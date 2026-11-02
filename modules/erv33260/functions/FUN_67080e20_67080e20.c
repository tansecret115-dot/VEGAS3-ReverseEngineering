/* Module: erv33260.dll
   Function: FUN_67080e20
   Address: 67080e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67080e20(int *param_1,undefined4 *param_2,uint param_3,int param_4,char param_5,
                 uint param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint local_18;
  
  iVar2 = param_1[1];
  iVar9 = *param_1;
  puVar1 = (uint *)(param_1 + 2);
  puVar10 = (undefined1 *)*param_2;
  iVar3 = param_2[1];
  param_2 = (undefined4 *)param_2[2];
  uVar7 = param_1[3];
  param_1 = (int *)*puVar1;
  if (param_6 != 0) {
    param_1 = (int *)(*puVar1 >> 1);
    uVar7 = uVar7 >> 1;
    param_2 = (undefined4 *)((uint)param_2 >> 1);
  }
  local_18 = (uint)(param_5 != '\0');
  pbVar5 = (byte *)(iVar2 + iVar9);
  if (uVar7 != 0) {
    param_6 = uVar7 + 1 >> 1;
    do {
      piVar8 = (int *)0x0;
      if (param_1 != (int *)0x0) {
        pbVar6 = pbVar5;
        do {
          puVar10[(uint)piVar8 >> 1] =
               (char)((int)(*pbVar6 + 1 +
                           pbVar6[1] + local_18 +
                           (uint)*(byte *)((int)piVar8 + iVar9 + 1) +
                           (uint)(pbVar6 + 2)[(iVar9 - (int)pbVar5) + -2]) >> 2);
          piVar8 = (int *)((int)piVar8 + 2);
          pbVar6 = pbVar6 + 2;
        } while (piVar8 < param_1);
      }
      if ((param_3 != 0) && (uVar7 = 0, param_3 != 0)) {
        do {
          ((undefined1 *)((int)param_2 + (int)puVar10))[uVar7] =
               ((undefined1 *)((int)param_2 + (int)puVar10))[-1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_3);
      }
      puVar10 = puVar10 + iVar3;
      iVar4 = iVar2 * 2;
      iVar9 = iVar9 + iVar4;
      pbVar5 = pbVar5 + iVar4;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  if (param_4 != 0) {
    _param_5 = param_4;
    iVar2 = (int)param_2 + param_3;
    puVar11 = puVar10;
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = puVar10[-iVar3];
        puVar10 = puVar10 + 1;
      }
      puVar10 = puVar11 + iVar3;
      _param_5 = _param_5 + -1;
      iVar2 = (int)param_2 + param_3;
      puVar11 = puVar10;
    } while (_param_5 != 0);
  }
  return;
}


