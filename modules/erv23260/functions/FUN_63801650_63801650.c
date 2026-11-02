/* Module: erv23260.dll
   Function: FUN_63801650
   Address: 63801650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63801650(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,char param_5,
                 uint param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint local_18;
  
  iVar2 = param_2[1];
  iVar3 = param_1[1];
  pbVar6 = (byte *)*param_1;
  puVar10 = (undefined1 *)*param_2;
  param_2 = (undefined4 *)param_2[2];
  puVar1 = param_1 + 2;
  uVar7 = param_1[3];
  param_1 = (undefined4 *)*puVar1;
  if (param_6 != 0) {
    param_1 = (undefined4 *)(*puVar1 >> 1);
    uVar7 = uVar7 >> 1;
    param_2 = (undefined4 *)((uint)param_2 >> 1);
  }
  local_18 = (uint)(param_5 != '\0');
  _param_5 = pbVar6 + iVar3;
  if (uVar7 != 0) {
    param_6 = uVar7 + 1 >> 1;
    do {
      if (param_1 != (undefined4 *)0x0) {
        pbVar5 = pbVar6;
        puVar8 = (undefined4 *)0x0;
        do {
          puVar9 = (undefined4 *)((int)puVar8 + 2);
          puVar10[(uint)puVar8 >> 1] =
               (char)((int)(*pbVar5 + 1 +
                           pbVar5[1] + local_18 +
                           (uint)_param_5[(int)puVar8 + 1] +
                           (uint)(pbVar5 + 2)[(int)(_param_5 + (-2 - (int)pbVar6))]) >> 2);
          pbVar5 = pbVar5 + 2;
          puVar8 = puVar9;
        } while (puVar9 < param_1);
      }
      if ((param_3 != 0) && (uVar7 = 0, param_3 != 0)) {
        do {
          ((undefined1 *)((int)param_2 + (int)puVar10))[uVar7] =
               ((undefined1 *)((int)param_2 + (int)puVar10))[-1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_3);
      }
      iVar4 = iVar3 * 2;
      puVar10 = puVar10 + iVar2;
      pbVar6 = pbVar6 + iVar4;
      _param_5 = _param_5 + iVar4;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  if (param_4 != 0) {
    _param_5 = (byte *)param_4;
    iVar3 = param_3 + (int)param_2;
    puVar11 = puVar10;
    do {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = puVar10[-iVar2];
        puVar10 = puVar10 + 1;
      }
      puVar10 = puVar11 + iVar2;
      _param_5 = (byte *)((int)_param_5 + -1);
      iVar3 = param_3 + (int)param_2;
      puVar11 = puVar10;
    } while (_param_5 != (byte *)0x0);
  }
  return;
}


