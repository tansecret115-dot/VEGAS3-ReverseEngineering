/* Module: vegas30k.dll
   Function: FUN_011c1f10
   Address: 011c1f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011c1f10(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  
  *param_1 = &PTR_LAB_011ebf70;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[2] = 0;
  if ((param_2 != (uint *)0x0) && (uVar1 = *param_2, uVar1 != 0)) {
    pvVar3 = calloc(1,uVar1 * 4);
    param_1[2] = pvVar3;
    param_1[3] = 0;
    param_1[4] = 0;
    if (uVar1 != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_1[5] + 8) + param_1[4] * 4);
        iVar4 = (**(code **)(*piVar2 + 0x60))(piVar2,param_1[2] + param_1[3] * 4);
        if (iVar4 == 0) {
          param_1[3] = param_1[3] + 1;
        }
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
      } while (iVar4 + 1U < uVar1);
      param_1[4] = 0;
      return param_1;
    }
  }
  param_1[4] = 0;
  return param_1;
}


