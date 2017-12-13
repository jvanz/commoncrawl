#include <sstream>

#include <librdkafka/rdkafkacpp.h>
#include "core/app-template.hh"
#include "core/future-util.hh"
#include "warc.hh"

using namespace std;
using namespace seastar;
using namespace warc;

int main(int argc, char** argv)
{
	namespace bpo = boost::program_options;
	app_template app;
	app.add_options()
		("kafka-broker", bpo::value<string>()->default_value(""),
		 "Kafka brokers to connect")
		("kafka-topic", bpo::value<string>()->default_value(""),
		 "Kafka topic to get the WARC file to process")
		;
	return app.run(argc, argv, [&] {
			return seastar::make_ready_future<>();
			});
}
