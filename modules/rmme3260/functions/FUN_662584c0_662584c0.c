/* Module: rmme3260.dll
   Function: FUN_662584c0
   Address: 662584c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662584c0(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  
  uVar9 = 0;
  bVar14 = false;
  bVar2 = false;
  bVar3 = false;
  if ((ushort)DAT_6627f178 != 0) {
    do {
      bVar14 = bVar3;
      if (bVar14) break;
      iVar12 = (uint)uVar9 * 0xe;
      if ((param_2 == *(int *)((int)&DAT_6627f0d0 + (uint)uVar9 * 0xe)) &&
         (pbVar11 = *(byte **)((int)&DAT_6627f0da + iVar12), pbVar5 = param_1,
         pbVar11 != (byte *)0x0)) {
        do {
          bVar1 = *pbVar5;
          bVar14 = bVar1 < *pbVar11;
          if (bVar1 != *pbVar11) {
LAB_66258535:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_6625853a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar14 = bVar1 < pbVar11[1];
          if (bVar1 != pbVar11[1]) goto LAB_66258535;
          pbVar11 = pbVar11 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_6625853a:
        bVar14 = bVar2;
        if (iVar6 == 0) {
          time((time_t *)((int)&DAT_6627f0d4 + iVar12));
          bVar2 = true;
          bVar14 = true;
        }
      }
      uVar9 = uVar9 + 1;
      bVar3 = bVar14;
    } while (uVar9 < (ushort)DAT_6627f178);
  }
  if (!bVar14) {
    if ((ushort)DAT_6627f178 < 10) {
      iVar12 = (DAT_6627f178 & 0xffff) * 0xe;
      *(int *)((int)&DAT_6627f0d0 + iVar12) = param_2;
      time((time_t *)((int)&DAT_6627f0d4 + iVar12));
      pbVar11 = *(byte **)((int)&DAT_6627f0da + iVar12);
      if (pbVar11 != param_1) {
        if (pbVar11 != (byte *)0x0) {
          operator_delete(pbVar11);
          *(undefined4 *)((int)&DAT_6627f0da + iVar12) = 0;
        }
        uVar7 = 0xffffffff;
        pbVar11 = param_1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar1 != 0);
        pbVar11 = operator_new(~uVar7);
        uVar7 = 0xffffffff;
        do {
          pbVar5 = param_1;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pbVar5 = param_1 + 1;
          bVar1 = *param_1;
          param_1 = pbVar5;
        } while (bVar1 != 0);
        uVar7 = ~uVar7;
        pbVar5 = pbVar5 + -uVar7;
        pbVar13 = pbVar11;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar13 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar13 = pbVar13 + 1;
        }
        *(byte **)((int)&DAT_6627f0da + iVar12) = pbVar11;
      }
      DAT_6627f178._0_2_ = (ushort)DAT_6627f178 + 1;
      return;
    }
    uVar4 = 1;
    uVar9 = 0;
    if (1 < (ushort)DAT_6627f178) {
      piVar10 = &DAT_6627f0e2;
      iVar12 = DAT_6627f0d4;
      do {
        if (*piVar10 < iVar12) {
          iVar12 = *piVar10;
          uVar9 = uVar4;
        }
        uVar4 = uVar4 + 1;
        piVar10 = (int *)((int)piVar10 + 0xe);
      } while (uVar4 < (ushort)DAT_6627f178);
    }
    iVar12 = (uint)uVar9 * 0xe;
    *(int *)((int)&DAT_6627f0d0 + iVar12) = param_2;
    time((time_t *)((int)&DAT_6627f0d4 + iVar12));
    pbVar11 = *(byte **)((int)&DAT_6627f0da + iVar12);
    if (pbVar11 != param_1) {
      if (pbVar11 != (byte *)0x0) {
        operator_delete(pbVar11);
        *(undefined4 *)((int)&DAT_6627f0da + iVar12) = 0;
      }
      uVar7 = 0xffffffff;
      pbVar11 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
      pbVar11 = operator_new(~uVar7);
      uVar7 = 0xffffffff;
      do {
        pbVar5 = param_1;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar5 = param_1 + 1;
        bVar1 = *param_1;
        param_1 = pbVar5;
      } while (bVar1 != 0);
      uVar7 = ~uVar7;
      pbVar5 = pbVar5 + -uVar7;
      pbVar13 = pbVar11;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar13 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar13 = pbVar13 + 1;
      }
      *(byte **)((int)&DAT_6627f0da + iVar12) = pbVar11;
    }
  }
  return;
}


