#ifndef PROTO_ICMP_H
#define PROTO_ICMP_H
struct PreprocessedInfo;
struct Output;

void handle_icmp(struct Output *out, const unsigned char *px, unsigned length, struct PreprocessedInfo *parsed);

#endif
