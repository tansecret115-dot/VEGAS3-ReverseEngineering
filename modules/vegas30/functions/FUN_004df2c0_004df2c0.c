/* Module: vegas30.exe
   Function: FUN_004df2c0
   Address: 004df2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004df2c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0xd94) == 2)) &&
      (iVar1 = *(int *)(param_1 + 0xd88), iVar1 != 0)) && (*(int *)(param_1 + 0xd8c) != 0)) {
    iVar2 = *(int *)(param_1 + 0xd98);
    if (iVar2 == 0) {
      FUN_004df180(iVar1,1);
      FUN_004df180(*(undefined4 *)(param_1 + 0xd8c),1);
    }
    else {
      if (iVar2 == 1) {
        FUN_004df180(iVar1,1);
        FUN_004df180(*(undefined4 *)(param_1 + 0xd8c),0);
        return;
      }
      if (iVar2 == 2) {
        FUN_004df180(iVar1,0);
        FUN_004df180(*(undefined4 *)(param_1 + 0xd8c),1);
        return;
      }
    }
  }
  return;
}


