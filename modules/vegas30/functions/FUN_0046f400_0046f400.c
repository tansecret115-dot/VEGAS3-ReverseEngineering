/* Module: vegas30.exe
   Function: FUN_0046f400
   Address: 0046f400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f400(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xb24) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xbc8);
    if (*(int **)(param_1 + 0xcd0) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0xcd0);
    }
    FUN_004582a0(param_1,&local_8,&local_10);
    if (local_10 == 0 && local_c == 0) {
      if (iVar2 == 0) {
        return;
      }
      FUN_004e9f70(uVar1,0x16,0);
      FUN_0046d820(param_1,DAT_00647784);
      FUN_004eb2b0(uVar1);
      FUN_004ea040(uVar1,0);
    }
    else {
      uVar1 = 0;
      if (((iVar2 == 0) && (DAT_00647784 != 0)) && (DAT_0064a588 != 0)) {
        uVar1 = 1;
      }
      FUN_0046c490(param_1,local_8,local_4,local_10,local_c,DAT_00647784,uVar1,0x16);
    }
  }
  else {
    FUN_004c87d0(param_1,param_1 + 0x364,0x9d0f,0,0);
  }
  FUN_004692e0(param_1);
  FUN_00469280(param_1);
  return;
}


