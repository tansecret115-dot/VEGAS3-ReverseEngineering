/* Module: vegas30.exe
   Function: FUN_005a8810
   Address: 005a8810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a8810(byte *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x20);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      FUN_005a8780(*(int *)(*(int *)(param_1 + 0x20) + 4) * iVar3 +
                   *(int *)(*(int *)(param_1 + 0x20) + 8));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_005b1650(*(int *)(param_1 + 0x24),0);
  }
  FUN_005a7a60(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30));
  if (((*param_1 & 1) != 0) && (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  return;
}


