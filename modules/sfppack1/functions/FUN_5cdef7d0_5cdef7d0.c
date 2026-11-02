/* Module: sfppack1.dll
   Function: FUN_5cdef7d0
   Address: 5cdef7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdef7d0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5ce23b84,param_2,0x104);
    DAT_5ce23c87 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5ce23c88,param_2,0x104);
    DAT_5ce23d8b = 0;
    return;
  }
  return;
}


