/* Module: qt4plug.dll
   Function: FUN_5f519350
   Address: 5f519350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f519350(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0 && param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  puVar2 = (undefined4 *)*param_1;
  iVar4 = 0;
  uVar1 = *puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    do {
      if ((float)puVar2[uVar3 * 2] < (float)param_1[1]) {
        param_1[1] = puVar2[uVar3 * 2];
      }
      if ((float)param_1[2] < (float)puVar2[uVar3 * 2]) {
        param_1[2] = puVar2[uVar3 * 2];
      }
      bVar5 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + (uint)bVar5;
    } while ((iVar4 < param_3) || ((iVar4 <= param_3 && (uVar3 < param_2))));
  }
  return 1;
}


