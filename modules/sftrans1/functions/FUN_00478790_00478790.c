/* Module: sftrans1.dll
   Function: FUN_00478790
   Address: 00478790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00478790(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pMem;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  puVar3 = param_2;
  puVar9 = param_1;
  for (iVar5 = 0x72; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar9 = puVar9 + 1;
  }
  pbVar8 = (byte *)param_2[0x73];
  if (pbVar8 != (byte *)0x0) {
    pMem = (byte *)param_1[0x73];
    pbVar4 = pMem;
    if (pMem == (byte *)0x0) {
      param_1[0x72] = param_2[0x72];
      pvVar2 = GlobalAlloc(2,param_2[0x72]);
      puVar3 = GlobalLock(pvVar2);
      param_1[0x73] = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        uVar7 = param_2[0x72];
        puVar9 = (undefined4 *)param_2[0x73];
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar3 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        return 0;
      }
      return 0x8007000e;
    }
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00478842:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00478847;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00478842;
      pbVar8 = pbVar8 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00478847:
    if (iVar5 != 0) {
      param_1[0x72] = param_2[0x72];
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x73]);
      GlobalFree(pvVar2);
      pvVar2 = GlobalAlloc(2,param_2[0x72]);
      puVar3 = GlobalLock(pvVar2);
      param_1[0x73] = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      uVar7 = param_2[0x72];
      puVar9 = (undefined4 *)param_2[0x73];
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  return 0;
}


