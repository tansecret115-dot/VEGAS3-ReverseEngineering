/* Module: vegas30.exe
   Function: FUN_00544230
   Address: 00544230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00544230(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  FUN_005433c0(param_1);
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0xc);
  if (iVar1 < 1) {
    return 0;
  }
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 4) * iVar3;
    piVar5 = (int *)(iVar4 + iVar2);
    iVar2 = FUN_00543b00(param_1,*(undefined4 *)(iVar4 + iVar2),piVar5[1]);
    if (iVar2 == 0) {
      if ((*piVar5 != *(int *)(param_1 + 0x40)) || (piVar5[1] != *(int *)(param_1 + 0x44))) {
        FUN_00543440(param_1,piVar5);
      }
    }
    else {
      InterlockedDecrement((LONG *)(iVar2 + 0x14));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar1);
  return 0;
}


