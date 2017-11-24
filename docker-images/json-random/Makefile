all:
	docker build -t flb/json-random-word .

build-rpi:
	docker build -f Dockerfile.rpi -t flb-arm/json-random-word .

run:
	docker run flb/json-random-word
