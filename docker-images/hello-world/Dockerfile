FROM debian:stretch-slim

COPY hello.c /

RUN apt-get update \
        && apt-get install -y \
	   gcc \
	   libc6-dev \
	   make \
	   file \
        && gcc /hello.c -o /hello

CMD ["/hello"]
