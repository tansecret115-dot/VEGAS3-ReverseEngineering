/* Module: pncrt.dll
   Function: adj_fdiv_m32
   Address: 7803162c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdiv_m32 */

undefined4 __cdecl adj_fdiv_m32(uint param_1)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x3162c  156  _adj_fdiv_m32 */
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivp_sti_st();
    return in_EAX;
  }
  __fdivp_sti_st();
  return in_EAX;
}


