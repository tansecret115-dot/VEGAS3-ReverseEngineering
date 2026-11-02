/* Module: rmto3260.dll
   Function: FUN_662ffa50
   Address: 662ffa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_662ffa50(uint param_1,int *param_2,uint param_3,int param_4,int param_5,int *param_6,int param_7
            ,int param_8,ushort param_9,uint param_10,uint param_11)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ushort uVar12;
  undefined4 *puVar13;
  int local_10;
  uint local_8;
  
  uVar5 = param_10 & 0xffff;
  uVar8 = param_3 % uVar5;
  uVar12 = 0;
  uVar10 = 0;
  local_10 = 0;
  *param_6 = 0;
  if (param_9 != 0) {
    param_10 = 0;
    do {
      if (*(int *)(param_7 + uVar8 * 4) == 0) {
        sVar4 = 1;
        local_10 = local_10 + 1;
        uVar7 = 0;
        do {
          if ((uVar7 & 1) == 0) {
            sVar1 = sVar4 + 1;
            sVar2 = sVar4;
          }
          else {
            sVar1 = sVar4;
            sVar2 = -sVar4;
          }
          sVar4 = sVar1;
          sVar2 = uVar12 + sVar2;
          if (((-1 < sVar2) && (sVar2 < (short)param_9)) &&
             (sVar2 = (short)((int)(short)(sVar2 + (short)param_3) % (int)uVar5),
             *(int *)(param_7 + sVar2 * 4) != 0)) {
            *param_6 = *param_6 + (uint)*(ushort *)(param_8 + sVar2 * 2);
            break;
          }
          sVar2 = -1;
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_9);
        if (sVar2 == -1) {
          uVar10 = 1;
          goto LAB_662ffc14;
        }
        local_8 = param_10;
        puVar3 = (undefined4 *)((param_11 & 0xffff) * (int)sVar2 + param_4);
        uVar9 = (uint)param_9;
        do {
          puVar11 = puVar3;
          puVar13 = (undefined4 *)(param_5 + (local_8 & 0xffff));
          for (uVar6 = param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar6 = param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          local_8 = local_8 + param_11;
          puVar3 = (undefined4 *)((int)puVar3 + param_1);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      else {
        local_8 = param_10;
        *param_6 = *param_6 + (uint)*(ushort *)(param_8 + uVar8 * 2);
        puVar3 = (undefined4 *)((param_11 & 0xffff) * uVar8 + param_4);
        uVar9 = (uint)param_9;
        do {
          puVar11 = puVar3;
          puVar13 = (undefined4 *)(param_5 + (local_8 & 0xffff));
          for (uVar6 = param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar6 = param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          local_8 = local_8 + param_11;
          puVar3 = (undefined4 *)((int)puVar3 + param_1);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar8 = (uint)((ulonglong)(uVar8 + 1 & 0xffff) % (ulonglong)(longlong)(int)uVar5);
      uVar12 = uVar12 + 1;
      param_10 = param_10 + param_1;
    } while (uVar12 < param_9);
    uVar10 = 0;
  }
LAB_662ffc14:
  *param_2 = local_10;
  return uVar10;
}


