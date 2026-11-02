/* Module: vegas30k.dll
   Function: FUN_011a7f10
   Address: 011a7f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a7f10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x7f4) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x7ec) & 1) == 0) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x7fc);
  if (piVar1 != (int *)0x0) {
    if ((((*(uint *)(param_1 + 0x7ec) & 0x400) != 0) && ((piVar1[3] & 1U) != 0)) &&
       ((piVar1[3] & 2U) != 0)) {
      iVar2 = (**(code **)(*piVar1 + 0x90))(piVar1,0);
      if (-1 < iVar2) {
        *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffffbff;
      }
    }
    (**(code **)(param_1 + 0x7dc))
              (param_1,0xf,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,0x3ff00000,0,0
               ,0,0,0,0);
  }
  if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x7f4);
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar4 * 4);
      if (((piVar1[3] & 1U) != 0) && ((piVar1[3] & 2U) != 0)) {
        (**(code **)(*piVar1 + 0x90))(piVar1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  uVar3 = (**(code **)(param_1 + 0x7dc))
                    (param_1,1,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,0x3ff00000
                     ,0,0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffffffe;
  return uVar3;
}


