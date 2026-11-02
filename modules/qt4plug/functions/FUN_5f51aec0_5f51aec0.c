/* Module: qt4plug.dll
   Function: FUN_5f51aec0
   Address: 5f51aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f51aec0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f51aef0(param_1);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x128);
    param_2[1] = *(undefined4 *)(param_1 + 300);
  }
  return;
}


