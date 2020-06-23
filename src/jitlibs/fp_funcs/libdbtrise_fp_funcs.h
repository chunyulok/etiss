#ifndef JITLIB_FPFUNCS_H
#define JITLIB_FPFUNCS_H

#include <stdint.h>

/*header file for the static library dbtrise_fp_funcs*/
uint32_t fget_flags();
uint32_t fadd_s(uint32_t v1, uint32_t v2, uint8_t mode);
uint32_t fsub_s(uint32_t v1, uint32_t v2, uint8_t mode);
uint32_t fmul_s(uint32_t v1, uint32_t v2, uint8_t mode);
uint32_t fdiv_s(uint32_t v1, uint32_t v2, uint8_t mode);
uint32_t fsqrt_s(uint32_t v1, uint8_t mode);
uint32_t fcmp_s(uint32_t v1, uint32_t v2, uint32_t op);
uint32_t fcvt_s(uint32_t v1, uint32_t op, uint8_t mode);
uint32_t fmadd_s(uint32_t v1, uint32_t v2, uint32_t v3, uint32_t op, uint8_t mode);
uint32_t fsel_s(uint32_t v1, uint32_t v2, uint32_t op);
uint32_t fclass_s(uint32_t v1);
uint32_t fconv_d2f(uint64_t v1, uint8_t mode);
uint64_t fconv_f2d(uint32_t v1, uint8_t mode);
uint64_t fadd_d(uint64_t v1, uint64_t v2, uint8_t mode);
uint64_t fsub_d(uint64_t v1, uint64_t v2, uint8_t mode);
uint64_t fmul_d(uint64_t v1, uint64_t v2, uint8_t mode);
uint64_t fdiv_d(uint64_t v1, uint64_t v2, uint8_t mode);
uint64_t fsqrt_d(uint64_t v1, uint8_t mode);
uint64_t fcmp_d(uint64_t v1, uint64_t v2, uint32_t op);
uint64_t fcvt_d(uint64_t v1, uint32_t op, uint8_t mode);
uint64_t fmadd_d(uint64_t v1, uint64_t v2, uint64_t v3, uint32_t op, uint8_t mode);
uint64_t fsel_d(uint64_t v1, uint64_t v2, uint32_t op);
uint64_t fclass_d(uint64_t v1);
uint64_t fcvt_32_64(uint32_t v1, uint32_t op, uint8_t mode);
uint32_t fcvt_64_32(uint64_t v1, uint32_t op, uint8_t mode);
uint32_t unbox_s(uint64_t v);

#endif
