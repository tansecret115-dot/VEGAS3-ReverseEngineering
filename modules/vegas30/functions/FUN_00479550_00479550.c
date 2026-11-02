/* Module: vegas30.exe
   Function: FUN_00479550
   Address: 00479550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479550(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    param_2 = *(int **)(param_1 + 0x50);
  }
  if (*param_2 == 0x20) {
    FUN_004e9f70(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40),0x49,0);
    FUN_004ea250(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40),param_2,0xf,0);
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x1c) = iVar1;
    FUN_005410b0(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40),param_2,0);
    return;
  }
  FUN_004e9f70(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40),0x34,0);
  FUN_004ea750(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40),param_2,2,0);
  iVar1 = *(int *)(param_1 + 0x1c) + 1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_005410b0(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40),param_2[2],0);
  return;
}


