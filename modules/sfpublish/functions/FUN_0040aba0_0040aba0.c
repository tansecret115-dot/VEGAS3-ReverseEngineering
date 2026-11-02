/* Module: sfpublish.dll
   Function: FUN_0040aba0
   Address: 0040aba0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040aba0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = param_3;
  if ((param_3 == (int *)0x0) || ((param_2 != 1 && (param_4 == (uint *)0x0)))) {
    return 0x80004003;
  }
  if ((*(int *)(param_1 + 8) != 0) &&
     ((*(int *)(param_1 + 0xc) != 0 && (*(int *)(param_1 + 0x10) != 0)))) {
    uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10) >> 2;
    param_3 = (int *)(uint)(uVar2 < param_2);
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar2;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      piVar1 = (int *)**(int **)(param_1 + 0x10);
      *piVar3 = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      piVar3 = piVar3 + 1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    }
    return (uint)param_3;
  }
  return 0x80004005;
}


