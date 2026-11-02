/* Module: vegas30k.dll
   Function: FUN_011a80f0
   Address: 011a80f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a80f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x7ec) & 1) == 0) {
    return 1;
  }
  iVar1 = **(int **)(param_1 + 0x7f4);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar4 * 4);
      if (((piVar2[3] & 1U) != 0) && ((piVar2[3] & 2U) != 0)) {
        (**(code **)(*piVar2 + 0x90))(piVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uVar3 = (**(code **)(param_1 + 0x7dc))
                    (param_1,1,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,0x3ff00000
                     ,0,0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffffffe;
  return uVar3;
}


