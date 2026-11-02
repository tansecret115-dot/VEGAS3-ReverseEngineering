/* Module: pncrt.dll
   Function: adj_fdiv_m64
   Address: 78031678
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdiv_m64 */

undefined4 __cdecl adj_fdiv_m64(undefined4 param_1,uint param_2)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x31678  158  _adj_fdiv_m64 */
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivp_sti_st();
    return in_EAX;
  }
  __fdivp_sti_st();
  return in_EAX;
}


