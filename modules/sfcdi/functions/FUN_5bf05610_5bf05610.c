/* Module: sfcdi.dll
   Function: FUN_5bf05610
   Address: 5bf05610
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf05610(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  HGLOBAL pvVar9;
  undefined4 *pMem;
  LPVOID pMem_00;
  LPVOID pMem_01;
  HSFSCSIPORT__ *pHVar10;
  LPSTR pCVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  SIZE_T dwBytes;
  undefined4 *puVar15;
  undefined3 extraout_var;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong *puVar19;
  undefined4 uVar20;
  int local_1c4;
  int local_1ac;
  undefined4 *puStack_194;
  undefined4 uStack_190;
  LPVOID pvStack_18c;
  undefined4 uStack_188;
  LPVOID pvStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  ulong local_16c;
  undefined4 local_168 [4];
  tCDR_ERRORDATA atStack_158 [344];
  
  piVar1 = (int *)param_1[1];
  puVar2 = (uint *)param_1[9];
  uVar12 = param_1[2];
  uVar16 = param_1[3];
  if (piVar1 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar7 = FUN_5bf01d30(param_1[4]);
  *(int *)((int)piVar1 + 0x2c6) = iVar7;
  *piVar1 = 0;
  bVar5 = false;
  uVar8 = SfScsi_GetDefIOBufferSize();
  pvVar9 = GlobalAlloc(0x42,uVar8);
  pMem = GlobalLock(pvVar9);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  uVar13 = param_1[7];
  uVar18 = uVar8 / 0xa56;
  if (uVar13 != 0) {
    if (uVar13 <= uVar18) {
      uVar18 = uVar13;
    }
    if (uVar18 < 9) {
      uVar18 = 8;
    }
  }
  pvVar9 = GlobalAlloc(0x42,uVar18 << 4);
  pMem_00 = GlobalLock(pvVar9);
  if (pMem_00 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  pvVar9 = GlobalAlloc(0x42,uVar18 * 0x126);
  pMem_01 = GlobalLock(pvVar9);
  if (pMem_01 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  iVar7 = FUN_5bf01c20(piVar1 + 1);
  if (iVar7 == 0) {
    if ((piVar1[2] != -1) && (piVar1[3] != -1)) {
      puVar19 = &local_16c;
      uVar8 = SfScsi_GetDefIOBufferSize();
      pHVar10 = SfScsi_Open(piVar1[2],piVar1[3],uVar8,puVar19);
      *piVar1 = (int)pHVar10;
    }
    if (*piVar1 == 0) {
      local_1c4 = -0x7ffb1f3d;
      goto LAB_5bf05a43;
    }
  }
  if ((int *)param_1[6] != (int *)0x0) {
    iVar7 = *(int *)param_1[6];
    uVar20 = 0;
    uVar13 = uVar16;
    pCVar11 = FUN_5bf283e0(DAT_5bf65fc4,0x4b3);
    (**(code **)(iVar7 + 0xc))(param_1[6],pCVar11,uVar13,uVar20);
  }
  puVar3 = (undefined4 *)piVar1[0x54];
  local_1ac = 0;
  FUN_5bf02800(local_168,uVar12,uVar16,0x930,0);
  iVar7 = (*(code *)puVar3[0x1a])(*puVar3,5,piVar1,local_168);
  if (iVar7 == 0) {
    local_1c4 = 0;
    for (; uVar16 != 0; uVar16 = uVar16 - uVar18) {
      WaitForSingleObject((HANDLE)param_1[0xc],0xffffffff);
      if (uVar16 < uVar18) {
        uVar18 = uVar16;
      }
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_174 = *param_1;
      uStack_170 = 0x930;
      puStack_194 = pMem;
      pvStack_18c = pMem_00;
      pvStack_184 = pMem_01;
      uStack_17c = uVar12;
      uStack_178 = uVar18;
      iVar7 = (*(code *)puVar3[0x1a])(*puVar3,6,piVar1,&puStack_194);
      if (iVar7 != 0) {
        local_1c4 = FUN_5bf01bf0((int)piVar1,iVar7);
        break;
      }
      piVar4 = (int *)param_1[6];
      if ((piVar4 != (int *)0x0) &&
         (iVar7 = (**(code **)(*piVar4 + 0x18))(piVar4,local_1ac,0), iVar7 < 0)) {
        local_1c4 = -0x7ffb1ff4;
        goto LAB_5bf059f6;
      }
      uVar12 = uVar12 + uVar18;
      uVar13 = FUN_5bf18a80((int)puVar2);
      if (uVar18 * 0x930 <= uVar13) {
        uVar13 = uVar18 * 0x930;
      }
      puVar14 = (undefined4 *)FUN_5bf18b10((int)puVar2);
      puVar15 = pMem;
      for (uVar17 = uVar13 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar14 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar17 = uVar13 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar15;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_5bf18b60((int)puVar2,uVar13,(uint)(param_2 <= uVar12));
      iVar7 = FUN_5bf18dc0(puVar2);
      if ((iVar7 < 0) && (param_2 <= uVar12 == 0)) {
        uVar20 = FUN_5bf18a30((int)puVar2);
        *param_3 = uVar20;
        *param_4 = 1;
        local_1c4 = 0;
        break;
      }
      dwBytes = FUN_5bf18ab0((int)puVar2);
      local_1c4 = 0;
      if (dwBytes != 0) {
        pvVar9 = GlobalAlloc(0x42,dwBytes);
        puVar15 = GlobalLock(pvVar9);
        if (puVar15 == (undefined4 *)0x0) {
          local_1c4 = -0x7ff8fff2;
        }
        else {
          FUN_5bf18bf0((int)puVar2,puVar15,dwBytes);
          FUN_5bf186f0((void *)param_1[10],puVar15,dwBytes);
          pvVar9 = GlobalHandle(puVar15);
          GlobalUnlock(pvVar9);
          pvVar9 = GlobalHandle(puVar15);
          GlobalFree(pvVar9);
          bVar6 = FUN_5bf055e0((int)param_1);
          if (CONCAT31(extraout_var,bVar6) != 0) {
            ResetEvent((HANDLE)param_1[0xc]);
          }
        }
      }
      local_1ac = local_1ac + uVar18;
    }
    if (local_1c4 != 0) {
LAB_5bf059f6:
      bVar5 = true;
      cdr_GetErrorState((HSFCD__ *)param_1[1],atStack_158);
    }
    iVar7 = (*(code *)puVar3[0x1a])(*puVar3,8,piVar1,0);
    if (bVar5) {
      cdr_SetErrorState((HSFCD__ *)param_1[1],atStack_158);
    }
    if (local_1c4 != 0) goto LAB_5bf05a43;
  }
  local_1c4 = FUN_5bf01bf0((int)piVar1,iVar7);
LAB_5bf05a43:
  if ((HSFSCSIPORT__ *)*piVar1 != (HSFSCSIPORT__ *)0x0) {
    SfScsi_Close((HSFSCSIPORT__ *)*piVar1);
  }
  pvVar9 = GlobalHandle(pMem);
  GlobalUnlock(pvVar9);
  pvVar9 = GlobalHandle(pMem);
  GlobalFree(pvVar9);
  pvVar9 = GlobalHandle(pMem_00);
  GlobalUnlock(pvVar9);
  pvVar9 = GlobalHandle(pMem_00);
  GlobalFree(pvVar9);
  pvVar9 = GlobalHandle(pMem_01);
  GlobalUnlock(pvVar9);
  pvVar9 = GlobalHandle(pMem_01);
  GlobalFree(pvVar9);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,local_1c4);
  }
  return local_1c4;
}


