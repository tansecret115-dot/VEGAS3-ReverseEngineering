/* Module: qt4plug.dll
   Function: FUN_5f514f70
   Address: 5f514f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f514f70(HWND param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (LVar1 == 0) {
    return 0;
  }
  iVar2 = GetDlgCtrlID(param_4);
  iVar3 = FUN_5f53bec0(param_2,param_3,param_4,1,1);
  if (iVar2 == 0x409) {
    *(int *)(LVar1 + 8) = iVar3;
    return 0;
  }
  if (iVar2 == 0x408) {
    *(int *)(LVar1 + 0xc) = iVar3;
    return 0;
  }
  if (iVar2 == 0x40a) {
    *(double *)(*(int *)(LVar1 + 4) + 0x30) = (double)iVar3 * _DAT_5f5966b0;
  }
  return 0;
}


