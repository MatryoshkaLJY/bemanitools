#ifndef ACIOTEST_ICCA_H
#define ACIOTEST_ICCA_H

#include <stdbool.h>
#include <stdint.h>

bool aciotest_icca_handler_init(uint8_t node_id, void **ctx);
bool aciotest_icca_handler_update(uint8_t node_id, void *ctx);

#endif