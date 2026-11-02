/* Module: vegas30k.dll
   Function: FUN_011bb6d0
   Address: 011bb6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011bb6d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x7f0) == 0) {
    return 0;
  }
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x7f8);
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f8) + 8) + iVar4 * 4);
      if (((piVar1[2] & 1U) != 0) && ((piVar1[2] & 2U) != 0)) {
        (**(code **)(*piVar1 + 0x44))(piVar1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  uVar2 = (**(code **)(param_1 + 0x7e4))
                    (param_1,0x24,*(undefined4 *)(param_1 + 0x7e8),0,0xffffffff,0,0xffffffff,
                     0xffffffff,0xffffffff,0xffffffff);
  *(undefined4 *)(param_1 + 0x7e4) = 0;
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xffffffdf;
  return uVar2;
}


