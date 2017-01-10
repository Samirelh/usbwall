#ifndef FORMAT_VALIDITY_H
# define FORMAT_VALIDITY_H

#include <stdint.h> 

# define LEN_FIELD 64
# define NB_FIELD_COMPLETE_ID 8
# define DEVID_MAX_LEN 1024
# define MIN_SERIAL 12
# define MAX_SERIAL 126
# define LEN_VENDOR_PRODUCT 4
# define LEN_BCD 16
# define MAX_BUS_PORT 3

# define FIELD_MACHINE 0
# define FIELD_BUS 1
# define FIELD_PORT 2
# define FIELD_SERIAL 3
# define FIELD_VENDOR 4
# define FIELD_PRODUCT 5
# define FIELD_BCD 6
# define FIELD_HORARY 7



int32_t check_serial_format(char *serial);

int32_t check_vendor_product_format(char *str); /* uint16_t id */

int32_t check_bcd_format(char *bcd);

/* Notice that bus and port doesn't need to be checked: the only rule is that
they must have less than 3 digits. But uint8_t already forces them to be so. */


#endif /* !FORMAT_VALIDITY_H */


