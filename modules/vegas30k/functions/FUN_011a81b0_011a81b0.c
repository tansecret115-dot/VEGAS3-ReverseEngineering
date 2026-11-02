/* Module: vegas30k.dll
   Function: FUN_011a81b0
   Address: 011a81b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011a81b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x7f4) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x7ec) & 1) == 0) {
    return -0x7fff0001;
  }
  uVar6 = 0;
  iVar3 = (**(code **)(param_1 + 0x7dc))
                    (param_1,2,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,0x3ff00000
                     ,0,0,param_2,param_3,0,0);
  if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x7f4);
  }
  if (0 < iVar5) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar4 * 4);
      uVar2 = piVar1[3];
      if ((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) == 0)) {
        iVar3 = (**(code **)(*piVar1 + 0x94))(piVar1,uVar6,param_3);
        if (iVar3 < 0) goto LAB_011a82aa;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if (-1 < iVar3) {
    *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) | 2;
    iVar4 = (**(code **)(param_1 + 0x7dc))
                      (param_1,3,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                       0x3ff00000,0,0,uVar6,param_3,0,0);
    return iVar4;
  }
LAB_011a82aa:
  FUN_011a82c0();
  return iVar3;
}


