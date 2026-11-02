/* Module: vegas30.exe
   Function: FUN_004cafd0
   Address: 004cafd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cafd0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x654) & 0x40) != 0) {
    *(int *)(param_1 + 0x678) = param_3;
    FUN_004530a0(param_1,0);
    UpdateWindow(*(HWND *)(param_1 + 4));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x678);
  if (param_3 != iVar1) {
    *(int *)(param_1 + 0x678) = param_3;
    if (param_3 == 0) {
      FUN_004c76b0(param_1,1);
      return;
    }
    if (*(int *)(param_1 + 0x680) == param_3) {
      FUN_004c7a00(param_1,0,0);
      return;
    }
    FUN_004c7a00(param_1,param_3 - iVar1,1);
  }
  return;
}


