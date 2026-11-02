/* Module: qt4plug.dll
   Function: FUN_5f5204b0
   Address: 5f5204b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f5204b0(int *param_1)

{
  int iVar1;
  
  if (param_1[8] == 0) {
    return -0x7fff0001;
  }
  if (param_1[3] == 0) {
    return -0x7fff0001;
  }
  if (param_1[9] == 0) {
    return 0;
  }
  iVar1 = FUN_5f520840(param_1);
  if (-1 < iVar1) {
    param_1[9] = 0;
  }
  return iVar1;
}


