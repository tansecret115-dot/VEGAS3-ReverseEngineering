/* Module: vegas30k.dll
   Function: FUN_011bb930
   Address: 011bb930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bb930(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x7e4) != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x7ec) & 0x80) == 0) {
    return 1;
  }
  iVar3 = (*(code *)0x0)(param_1,0x26,*(undefined4 *)(param_1 + 0x7e8),0,0xffffffff,0,0xffffffff,
                         0xffffffff,0xffffffff,0xffffffff);
  if (iVar3 < 0) {
    return iVar3;
  }
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_1 + 0x7f8);
  }
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      if (iVar3 < 0) break;
      piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f8) + 8) + iVar5 * 4);
      uVar1 = piVar4[2];
      if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 4) != 0)) {
        iVar3 = (**(code **)(*piVar4 + 0x4c))(piVar4,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  uVar1 = *(uint *)(param_1 + 0x7ec);
  *(uint *)(param_1 + 0x7ec) = uVar1 & 0xffffff7f;
  if ((uVar1 & 0x200) != 0) {
    if (*(int *)(param_1 + 0x804) != -1) {
      piVar4 = *(int **)(param_1 + 0x7f4);
      if (piVar4 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar4;
      }
      iVar5 = 0;
      if (0 < iVar6) {
        piVar4 = (int *)piVar4[2];
        do {
          piVar2 = (int *)*piVar4;
          if (piVar2[0x94] == *(int *)(param_1 + 0x804)) {
            uVar1 = piVar2[3];
            if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) &&
               (((uVar1 & 4) != 0 && ((uVar1 & 8) != 0)))) {
              (**(code **)(*piVar2 + 0xa4))(piVar2);
            }
            uVar1 = piVar2[3];
            if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 4) != 0)) {
              (**(code **)(*piVar2 + 0x98))(piVar2);
            }
            break;
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar5 < iVar6);
      }
    }
    *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffffdff;
  }
  return iVar3;
}


