/* Module: sfcdi.dll
   Function: FUN_5bf3bbd0
   Address: 5bf3bbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3bbd0(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    puVar1 = param_1 + 4;
    while (uVar2 = *puVar1, uVar2 < param_2) {
      if (uVar2 != 0) {
        param_2 = param_2 - uVar2;
      }
      param_1[5] = 0;
      iVar3 = FUN_5bf46110((undefined4 *)*param_1,(undefined4 *)param_1[6],(undefined4 *)param_1[3],
                           puVar1);
      if (iVar3 < 0) {
        return iVar3;
      }
      if (param_1[2] == -1) {
        param_1[2] = 0;
      }
      else {
        param_1[2] = param_1[3] + param_1[2];
      }
      if (*puVar1 == 0) {
        return iVar3;
      }
      if (param_2 == 0) {
        return iVar3;
      }
    }
    param_1[5] = param_1[5] + param_2;
    *puVar1 = *puVar1 - param_2;
  }
  return iVar3;
}


