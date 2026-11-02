/* Module: wmfdist2.exe
   Function: FUN_01005d84
   Address: 01005d84
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01005d84(HMODULE param_1,LPCSTR param_2,LPCSTR param_3)

{
  int iVar1;
  
  if (DAT_0100a304 == -2) {
    DAT_0100a304 = 0;
    iVar1 = FUN_01005d4f(param_1,param_2,param_3,1);
    if ((iVar1 == 0) && (iVar1 = FUN_01005d4f(param_1,param_2,param_3,0xd), iVar1 == 0)) {
      return DAT_0100a304;
    }
    DAT_0100a304 = 1;
  }
  return DAT_0100a304;
}


