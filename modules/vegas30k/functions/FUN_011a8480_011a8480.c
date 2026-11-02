/* Module: vegas30k.dll
   Function: FUN_011a8480
   Address: 011a8480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011a8480(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2;
  if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x7dc) == 0) || (uVar1 = *(uint *)(param_1 + 0x7ec), (uVar1 & 1) == 0))
      || ((uVar1 & 2) == 0)) || ((uVar1 & 4) != 0)) {
    return -0x7fff0001;
  }
  iVar5 = **(int **)(param_1 + 0x7f4);
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar4 * 4);
      uVar1 = piVar2[3];
      if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) &&
         (((uVar1 & 4) != 0 &&
          (((uVar1 & 8) == 0 &&
           (param_2 = (**(code **)(*piVar2 + 0xa0))(piVar2,iVar3,param_3), param_2 < 0))))))
      goto LAB_011a8563;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if (-1 < param_2) {
    *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) | 4;
    iVar3 = (**(code **)(param_1 + 0x7dc))
                      (param_1,4,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                       0x3ff00000,0,0,0,0,0,0);
    return iVar3;
  }
LAB_011a8563:
  if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x7f4);
  }
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar5 * 4);
      uVar1 = piVar2[3];
      if (((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 4) != 0)) &&
         (((uVar1 & 8) != 0 && (iVar4 = (**(code **)(*piVar2 + 0xa4))(piVar2), iVar4 < 0)))) {
        return param_2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return param_2;
}


