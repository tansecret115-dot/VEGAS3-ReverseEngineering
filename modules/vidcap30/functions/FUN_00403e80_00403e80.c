/* Module: vidcap30.exe
   Function: FUN_00403e80
   Address: 00403e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403e80(HWND param_1,INT_PTR param_2)

{
  int iVar1;
  
  DAT_005ba4d0 = param_2;
  iVar1 = FUN_00403e50(param_1);
  if (iVar1 != 0) {
    EndDialog(param_1,param_2);
    return;
  }
  if ((DAT_005ba4b4 & 0x100) != 0) {
    FUN_00409600(DAT_005ba4c0,1);
  }
  ShowWindow(param_1,0);
  return;
}


