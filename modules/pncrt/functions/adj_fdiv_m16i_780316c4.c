/* Module: pncrt.dll
   Function: adj_fdiv_m16i
   Address: 780316c4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdiv_m16i */

undefined4 __cdecl adj_fdiv_m16i(void)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x316c4  155  _adj_fdiv_m16i */
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivp_sti_st();
    return in_EAX;
  }
  __fdivp_sti_st();
  return in_EAX;
}


