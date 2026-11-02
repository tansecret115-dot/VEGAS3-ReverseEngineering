/* Module: vegas30.exe
   Function: FUN_0046f110
   Address: 0046f110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f110(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  FUN_004582a0(param_1,&local_10,&local_8);
  FUN_004e9f70(uVar1,(**(int **)(param_1 + 0xcd0) != 1) + '\x1b',0);
  FUN_004ea880(uVar1);
  iVar4 = 0;
  if (**(int **)(param_1 + 0xcd0) < 1) {
    if (local_8 != 0 || local_4 != 0) {
      iVar4 = FUN_0046d230(param_1,local_10,local_c,local_8,local_4,1);
    }
    iVar2 = FUN_0046cb60(param_1,0,local_10,local_c,0,0,0,0,0,1);
    if (local_8 != 0 || local_4 != 0) {
      iVar3 = FUN_0046cb60(param_1,0,local_10 + local_8,
                           local_c + local_4 + (uint)CARRY4(local_10,local_8),0,0,0,0,1,2);
      iVar2 = iVar2 + iVar3;
    }
  }
  else {
    if (local_8 != 0 || local_4 != 0) {
      iVar4 = FUN_0046d3b0(param_1,local_10,local_c,local_8,local_4,1);
    }
    iVar2 = FUN_0046d030(param_1,local_10,local_c,local_8,local_4);
  }
  if ((iVar4 != 0) || (iVar2 != 0)) {
    FUN_0046ee50(param_1);
    FUN_004eb2b0(uVar1);
  }
  FUN_004ea040(uVar1,0);
  if (iVar2 != 0) {
    FUN_00469280(param_1);
    FUN_00456c20(param_1);
    FUN_004530a0(param_1,0);
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


