/* Module: pncrt.dll
   Function: adj_fdivr_m32
   Address: 7803172c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdivr_m32 */

undefined4 __cdecl adj_fdivr_m32(uint param_1)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x3172c  161  _adj_fdivr_m32 */
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivrp_sti_st();
    return in_EAX;
  }
  __fdivrp_sti_st();
  return in_EAX;
}


