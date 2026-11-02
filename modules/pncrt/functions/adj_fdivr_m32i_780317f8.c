/* Module: pncrt.dll
   Function: adj_fdivr_m32i
   Address: 780317f8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdivr_m32i */

undefined4 __cdecl adj_fdivr_m32i(void)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x317f8  162  _adj_fdivr_m32i */
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivrp_sti_st();
    return in_EAX;
  }
  __fdivrp_sti_st();
  return in_EAX;
}


