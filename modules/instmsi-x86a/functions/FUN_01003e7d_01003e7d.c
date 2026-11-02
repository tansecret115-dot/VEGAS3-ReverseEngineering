/* Module: InstMsi-x86a.exe
   Function: FUN_01003e7d
   Address: 01003e7d
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_01003e7d(UINT param_1,LPSTR param_2,int param_3)

{
  if (param_2 != (LPSTR)0x0) {
    *param_2 = '\0';
    LoadStringA(DAT_0100b6dc,param_1,param_2,param_3);
  }
  return param_2;
}


