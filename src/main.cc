#include "core/app-template.hh"

using namespace seastar;
using namespace std;

int main(int argc, char** argv)
{
	namespace bpo = boost::program_options;
	app_template app;
	app.add_options()
		("warcfile", bpo::value<string>()->default_value(""),
		 "WARC file to process");
	return app.run(argc, argv, [&] {
		auto&& config = app.configuration();
		string file = config["warcfile"].as<string>();
		cout << "Parsing: " << file << endl;
            	return seastar::make_ready_future<>();
	});
}
