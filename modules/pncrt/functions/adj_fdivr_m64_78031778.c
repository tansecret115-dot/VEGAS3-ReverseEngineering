/* Module: pncrt.dll
   Function: adj_fdivr_m64
   Address: 78031778
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fdivr_m64 */

undefined4 __cdecl adj_fdivr_m64(undefined4 param_1,uint param_2)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
                    /* 0x31778  163  _adj_fdivr_m64 */
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivrp_sti_st();
    return in_EAX;
  }
  __fdivrp_sti_st();
  return in_EAX;
}


