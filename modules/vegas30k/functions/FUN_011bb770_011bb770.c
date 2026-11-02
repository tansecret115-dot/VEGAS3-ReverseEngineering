/* Module: vegas30k.dll
   Function: FUN_011bb770
   Address: 011bb770
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bb770(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x7e4) != 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x7ec) & 0x20) == 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x7ec) & 0x80) != 0) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x7e8);
  iVar9 = 0;
  iVar3 = (*(code *)0x0)(param_1,0x25,iVar8,0,0xffffffff,0,0xffffffff,0xffffffff,0xffffffff,
                         0xffffffff);
  if (iVar3 < 0) {
    return iVar3;
  }
  if ((iVar9 != 0) && (*(int *)(param_1 + 0x804) != -1)) {
    piVar4 = *(int **)(param_1 + 0x7f4);
    if (piVar4 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4;
    }
    iVar6 = 0;
    if (0 < iVar7) {
      piVar4 = (int *)piVar4[2];
      do {
        piVar1 = (int *)*piVar4;
        if (piVar1[0x94] == *(int *)(param_1 + 0x804)) {
          uVar2 = piVar1[3];
          if (((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) == 0)) &&
             (iVar3 = (**(code **)(*piVar1 + 0x94))(piVar1,0,0), -1 < iVar3)) {
            uVar2 = piVar1[3];
            if ((((uVar2 & 1) == 0) || ((uVar2 & 2) == 0)) ||
               (((uVar2 & 4) == 0 || ((uVar2 & 8) != 0)))) {
              (**(code **)(*piVar1 + 0x98))(piVar1);
            }
            else {
              iVar3 = (**(code **)(*piVar1 + 0xa0))(piVar1,0,0);
              if (iVar3 < 0) {
                (**(code **)(*piVar1 + 0x98))(piVar1);
              }
            }
          }
          break;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar6 < iVar7);
    }
  }
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = **(int **)(param_1 + 0x7f8);
  }
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      if (iVar3 < 0) break;
      piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f8) + 8) + iVar6 * 4);
      uVar2 = piVar4[2];
      if ((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) &&
         (((uVar2 & 4) == 0 && (iVar3 = (**(code **)(*piVar4 + 0x48))(piVar4,iVar9), iVar3 == 0))))
      {
        iVar8 = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  uVar2 = *(uint *)(param_1 + 0x7ec);
  uVar5 = (uint)(iVar8 == 0) << 7;
  *(uint *)(param_1 + 0x7ec) = uVar5 | uVar2 & 0xffffff7f;
  if (((iVar8 == 0) == 0) || (iVar9 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  *(uint *)(param_1 + 0x7ec) = iVar3 << 9 | uVar5 | uVar2 & 0xfffffd7f;
  return iVar8;
}


