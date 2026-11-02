/* Module: vegas30.exe
   Function: FUN_0046d820
   Address: 0046d820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046d820(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  if (**(int **)(param_1 + 0xcd0) != 0) {
    FUN_004ea880(uVar1);
    FUN_0046ba30(param_1,*(undefined4 *)(param_1 + 0xcd0));
    FUN_0046bad0(param_1);
    if (DAT_0064778c != 0) {
      FUN_0046c0f0(param_1,0,0,0,0x20000000,0,0);
    }
    FUN_005c93d0(uVar1,*(undefined4 *)(param_1 + 0xcd0));
    FUN_004692e0(param_1);
    FUN_0046ba70(uVar1,param_1);
    FUN_00456c20(param_1);
    FUN_004530a0(param_1,0);
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


