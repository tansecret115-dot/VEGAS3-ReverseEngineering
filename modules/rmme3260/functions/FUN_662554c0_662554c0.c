/* Module: rmme3260.dll
   Function: FUN_662554c0
   Address: 662554c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_662554c0(int param_1,uint param_2,int param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2;
  if ((param_3 == 0) || ((param_2 != 1 && (param_4 == (uint *)0x0)))) {
    return 0x80004003;
  }
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    param_2 = 0;
    uVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    if (uVar2 < uVar3) {
      param_2 = 0x8004000c;
      uVar3 = uVar2;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar3;
    }
    if (uVar3 != 0) {
      iVar4 = uVar3 * 4;
      uVar2 = uVar3;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 4);
        *(int **)(param_3 + iVar4 + uVar3 * -4) = piVar1;
        (**(code **)(*piVar1 + 4))(piVar1);
        iVar4 = iVar4 + -4;
        uVar2 = uVar2 - 1;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      } while (uVar2 != 0);
    }
    return param_2;
  }
  return 0x80004005;
}


