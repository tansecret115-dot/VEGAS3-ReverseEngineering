/* Module: vegas30k.dll
   Function: FUN_0115a470
   Address: 0115a470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115a470(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar2 = (int)param_3;
  puVar11 = param_2;
  if (5 < (int)param_3) {
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 0xb);
  if (bVar1 == 1) {
    uVar4 = *param_1;
    param_3 = param_2;
    param_2 = (undefined4 *)0x0;
    uVar3 = (&DAT_01207044)[iVar2];
    iVar9 = 7;
    if (uVar4 <= uVar3) goto LAB_0115a6c8;
    do {
      param_2 = (undefined4 *)
                ((uint)param_2 |
                (*(byte *)((uVar3 >> 3) + (int)puVar11) >> (7 - ((byte)uVar3 & 7) & 0x1f) & 1) <<
                ((byte)iVar9 & 0x1f));
      uVar5 = SUB41(param_2,0);
      if (iVar9 == 0) {
        iVar9 = 7;
        *(undefined1 *)param_3 = uVar5;
        param_3 = (undefined4 *)((int)param_3 + 1);
        uVar5 = 0;
        param_2 = (undefined4 *)0x0;
      }
      else {
        iVar9 = iVar9 + -1;
      }
      uVar3 = uVar3 + (&DAT_01207060)[iVar2];
    } while (uVar3 < uVar4);
    if (iVar9 == 7) goto LAB_0115a6c8;
  }
  else if (bVar1 == 2) {
    uVar4 = *param_1;
    param_3 = param_2;
    iVar9 = 6;
    uVar3 = (&DAT_01207044)[iVar2];
    param_2 = (undefined4 *)0x0;
    if (uVar4 <= uVar3) goto LAB_0115a6c8;
    do {
      param_2 = (undefined4 *)
                ((uint)param_2 |
                (*(byte *)((uVar3 >> 2) + (int)puVar11) >> (((byte)uVar3 & 3) * -2 + 6 & 0x1f) & 3)
                << ((byte)iVar9 & 0x1f));
      uVar5 = SUB41(param_2,0);
      if (iVar9 == 0) {
        iVar9 = 6;
        *(undefined1 *)param_3 = uVar5;
        param_3 = (undefined4 *)((int)param_3 + 1);
        uVar5 = 0;
        param_2 = (undefined4 *)0x0;
      }
      else {
        iVar9 = iVar9 + -2;
      }
      uVar3 = uVar3 + (&DAT_01207060)[iVar2];
    } while (uVar3 < uVar4);
    if (iVar9 == 6) goto LAB_0115a6c8;
  }
  else {
    if (bVar1 != 4) {
      uVar4 = *param_1;
      uVar6 = (uint)(bVar1 >> 3);
      for (uVar3 = (&DAT_01207044)[(int)param_3]; uVar3 < uVar4;
          uVar3 = uVar3 + (&DAT_01207060)[(int)param_3]) {
        puVar8 = (undefined4 *)(uVar3 * uVar6 + (int)param_2);
        if (puVar11 != puVar8) {
          puVar10 = puVar11;
          for (uVar7 = (uint)(bVar1 >> 5); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
        puVar11 = (undefined4 *)((int)puVar11 + uVar6);
      }
      goto LAB_0115a6c8;
    }
    uVar4 = *param_1;
    param_3 = param_2;
    iVar9 = 4;
    uVar3 = (&DAT_01207044)[iVar2];
    param_2 = (undefined4 *)0x0;
    if (uVar4 <= uVar3) goto LAB_0115a6c8;
    do {
      param_2 = (undefined4 *)
                ((uint)param_2 |
                (*(byte *)((uVar3 >> 1) + (int)puVar11) >> (((byte)uVar3 & 1) * -4 + 4 & 0x1f) & 0xf
                ) << ((byte)iVar9 & 0x1f));
      uVar5 = SUB41(param_2,0);
      if (iVar9 == 0) {
        iVar9 = 4;
        *(undefined1 *)param_3 = uVar5;
        param_3 = (undefined4 *)((int)param_3 + 1);
        uVar5 = 0;
        param_2 = (undefined4 *)0x0;
      }
      else {
        iVar9 = iVar9 + -4;
      }
      uVar3 = uVar3 + (&DAT_01207060)[iVar2];
    } while (uVar3 < uVar4);
    if (iVar9 == 4) goto LAB_0115a6c8;
  }
  *(undefined1 *)param_3 = uVar5;
LAB_0115a6c8:
  uVar4 = ((*param_1 - (&DAT_01207044)[iVar2]) + -1 + (&DAT_01207060)[iVar2]) /
          (uint)(&DAT_01207060)[iVar2];
  *param_1 = uVar4;
  param_1[1] = *(byte *)((int)param_1 + 0xb) * uVar4 + 7 >> 3;
  return;
}


