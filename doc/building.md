You can build inside a docker container:
```
crawlerbuild() {
	docker run -v $HOME/commoncrawl/:/commoncrawl --user $(id -u):$(id -g)  -w /commoncrawl -t -i crawler:latest "$@";
}

```
