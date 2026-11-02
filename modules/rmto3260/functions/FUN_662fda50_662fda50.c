/* Module: rmto3260.dll
   Function: FUN_662fda50
   Address: 662fda50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662fda50(byte *param_1,undefined4 *param_2,undefined2 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  void *this;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  *param_2 = 0;
  pbVar5 = &DAT_66311918;
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_662fda8b:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_662fda90;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_662fda8b;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_662fda90:
  if (iVar4 == 0) {
    puVar2 = operator_new(0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_662ffe20(puVar2);
      goto LAB_662fdc09;
    }
  }
  else {
    pbVar5 = &DAT_66311910;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_662fdadd:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_662fdae2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_662fdadd;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_662fdae2:
    if (iVar4 == 0) {
      puVar2 = operator_new(0x10);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = FUN_662ff9a0(puVar2);
        goto LAB_662fdbaa;
      }
LAB_662fdba8:
      puVar2 = (undefined4 *)0x0;
LAB_662fdbaa:
      if (puVar2 != (undefined4 *)0x0) {
        return;
      }
      *param_2 = 0x8007000e;
      return;
    }
    pbVar5 = &DAT_66311908;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_662fdb2f:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_662fdb34;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_662fdb2f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_662fdb34:
    if (iVar4 == 0) {
      puVar2 = operator_new(0x18);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = FUN_662ff760(puVar2);
        goto LAB_662fdc09;
      }
    }
    else {
      pbVar5 = &DAT_66311900;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_662fdb81:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_662fdb86;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_662fdb81;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_662fdb86:
      if (iVar4 == 0) {
        this = operator_new(0x1a);
        if (this != (void *)0x0) {
          puVar2 = FUN_662ff350(this,*param_3);
          goto LAB_662fdbaa;
        }
        goto LAB_662fdba8;
      }
      pbVar3 = &DAT_663118f8;
      do {
        bVar1 = *param_1;
        bVar6 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_662fdbe7:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_662fdbec;
        }
        if (bVar1 == 0) break;
        bVar1 = param_1[1];
        bVar6 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_662fdbe7;
        param_1 = param_1 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_662fdbec:
      if (iVar4 != 0) {
        *param_2 = 0x80040fc0;
        return;
      }
      puVar2 = operator_new(0x34);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = FUN_662fee50(puVar2);
        goto LAB_662fdc09;
      }
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_662fdc09:
  if (puVar2 != (undefined4 *)0x0) {
    return;
  }
  *param_2 = 0x8007000e;
  return;
}


