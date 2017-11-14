/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/syscall.h>

const char message[] =
	"\n"
	"Welcome to the Kubernetes Enterprise Logging Workshop!\n"
	"\n"
	"All resources from this laboratory can be found at:\n"
	"\n"
	"    http://kelw.io\n"
	"\n"
	"This workshop is made and sponsored by Treasure Data, the Primary sponsor of Fluentd\n"
	"\n";

void main() {
	syscall(SYS_write, 1, message, sizeof(message) - 1);
	syscall(SYS_exit, 0);
}
