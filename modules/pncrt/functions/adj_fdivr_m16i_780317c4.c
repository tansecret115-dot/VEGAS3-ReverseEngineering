/* Module: pncrt.dll
   Function: adj_fdivr_m16i
   Address: 780317c4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdivr_m16i */

undefined4 __cdecl adj_fdivr_m16i(void)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x317c4  160  _adj_fdivr_m16i */
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivrp_sti_st();
    return in_EAX;
  }
  __fdivrp_sti_st();
  return in_EAX;
}


