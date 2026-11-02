/* Module: pncrt.dll
   Function: adj_fdiv_m32i
   Address: 780316f8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdiv_m32i */

undefined4 __cdecl adj_fdiv_m32i(void)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x316f8  157  _adj_fdiv_m32i */
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivp_sti_st();
    return in_EAX;
  }
  __fdivp_sti_st();
  return in_EAX;
}


