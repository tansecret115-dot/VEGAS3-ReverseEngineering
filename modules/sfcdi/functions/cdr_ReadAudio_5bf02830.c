/* Module: sfcdi.dll
   Function: cdr_ReadAudio
   Address: 5bf02830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_ReadAudio(struct cdreadaudiotag *) */

long cdr_ReadAudio(cdreadaudiotag *param_1)

{
  undefined4 *pMem;
  LPCVOID pMem_00;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  HSFSCSIPORT__ *pHVar7;
  LPSTR pCVar8;
  int iVar9;
  long lVar10;
  LPCVOID unaff_EBX;
  uint unaff_EBP;
  int iVar11;
  int *unaff_ESI;
  uint uVar12;
  uint uVar13;
  ulong *puVar14;
  undefined4 uVar15;
  int local_1ac;
  LPVOID local_1a4;
  undefined1 auStack_1a0 [4];
  undefined4 uStack_19c;
  undefined4 *local_198;
  int iStack_194;
  LPCVOID pvStack_190;
  int iStack_18c;
  int iStack_188;
  uint uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulong uStack_178;
  undefined4 auStack_174 [4];
  tCDR_ERRORDATA atStack_164 [356];
  
                    /* 0x2830  195  ?cdr_ReadAudio@@YGJPAUcdreadaudiotag@@@Z */
  pMem = *(undefined4 **)(param_1 + 4);
  pMem_00 = *(LPCVOID *)(param_1 + 0xc);
  iVar11 = *(int *)(param_1 + 8);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar3 = FUN_5bf01d30(*(uint *)(param_1 + 0x10));
  *(int *)((int)pMem + 0x2c6) = iVar3;
  *pMem = 0;
  local_198 = (undefined4 *)0x0;
  uVar4 = SfScsi_GetDefIOBufferSize();
  pvVar5 = GlobalAlloc(0x42,uVar4);
  pvVar6 = GlobalLock(pvVar5);
  if (pvVar6 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  uVar13 = *(uint *)(param_1 + 0x1c);
  uVar12 = uVar4 / 0xa56;
  if (uVar13 != 0) {
    if (uVar13 <= uVar12) {
      uVar12 = uVar13;
    }
    if (uVar12 < 9) {
      uVar12 = 8;
    }
  }
  pvVar5 = GlobalAlloc(0x42,uVar12 << 4);
  pvVar6 = GlobalLock(pvVar5);
  if (pvVar6 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  pvVar5 = GlobalAlloc(0x42,uVar12 * 0x126);
  local_1a4 = GlobalLock(pvVar5);
  if (local_1a4 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),iVar11,pMem_00);
  if (-1 < iVar3) {
    iVar3 = FUN_5bf01c20(unaff_ESI + 1);
    if (iVar3 == 0) {
      if ((unaff_ESI[2] != -1) && (unaff_ESI[3] != -1)) {
        puVar14 = &uStack_178;
        uVar4 = SfScsi_GetDefIOBufferSize();
        pHVar7 = SfScsi_Open(unaff_ESI[2],unaff_ESI[3],uVar4,puVar14);
        *unaff_ESI = (int)pHVar7;
      }
      if (*unaff_ESI == 0) {
        iVar3 = -0x7ffb1f3d;
        goto LAB_5bf02b79;
      }
    }
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      iVar3 = **(int **)(param_1 + 0x18);
      uVar15 = 0;
      uVar13 = unaff_EBP;
      pCVar8 = FUN_5bf283e0(DAT_5bf65fc4,0x4b3);
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_1 + 0x18),pCVar8,uVar13,uVar15);
    }
    puVar1 = (undefined4 *)unaff_ESI[0x54];
    local_1ac = 0;
    FUN_5bf02800(auStack_174,iVar11,unaff_EBP,0x930,0);
    iVar9 = (*(code *)puVar1[0x1a])(*puVar1,5,unaff_ESI,auStack_174);
    if (iVar9 == 0) {
      iVar3 = 0;
      if (unaff_EBP != 0) {
        do {
          if (unaff_EBP < uVar12) {
            uVar12 = unaff_EBP;
          }
          uStack_19c = 0;
          uStack_180 = *(undefined4 *)param_1;
          iStack_194 = 0;
          iStack_18c = 0;
          uStack_17c = 0x930;
          local_198 = pMem;
          pvStack_190 = pMem_00;
          iStack_188 = iVar11;
          uStack_184 = uVar12;
          iVar3 = (*(code *)puVar1[0x1a])(*puVar1,6,unaff_ESI,auStack_1a0);
          if (iVar3 != 0) {
            iVar3 = FUN_5bf01bf0((int)unaff_ESI,iVar3);
            break;
          }
          piVar2 = *(int **)(param_1 + 0x18);
          if ((piVar2 != (int *)0x0) &&
             (iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,local_1ac,0), iVar3 < 0)) {
            iVar3 = -0x7ffb1ff4;
            goto LAB_5bf02b26;
          }
          iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                            (*(int **)(param_1 + 0x14),iVar11,unaff_EBX,uVar12 * 0x930);
          if (((iVar3 < 0) ||
              ((iStack_194 != 0 &&
               (iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x14))
                                  (*(int **)(param_1 + 0x14),iVar11,pMem,iStack_194), iVar3 < 0))))
             || ((iStack_18c != 0 &&
                 (iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x18))
                                    (*(int **)(param_1 + 0x14),iVar11,pMem_00,iStack_18c), iVar3 < 0
                 )))) goto LAB_5bf02b26;
          unaff_EBP = unaff_EBP - uVar12;
          local_1ac = local_1ac + uVar12;
          iVar11 = iVar11 + uVar12;
        } while (unaff_EBP != 0);
        if (iVar3 != 0) {
LAB_5bf02b26:
          local_1a4 = (LPVOID)0x1;
          cdr_GetErrorState(*(HSFCD__ **)(param_1 + 4),atStack_164);
        }
      }
      iVar9 = (*(code *)puVar1[0x1a])(*puVar1,8,unaff_ESI,0);
      if (local_1a4 != (LPVOID)0x0) {
        cdr_SetErrorState(*(HSFCD__ **)(param_1 + 4),atStack_164);
      }
      if (iVar3 != 0) goto LAB_5bf02b79;
    }
    iVar3 = FUN_5bf01bf0((int)unaff_ESI,iVar9);
  }
LAB_5bf02b79:
  if ((HSFSCSIPORT__ *)*unaff_ESI != (HSFSCSIPORT__ *)0x0) {
    SfScsi_Close((HSFSCSIPORT__ *)*unaff_ESI);
  }
  pvVar5 = GlobalHandle(unaff_EBX);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(unaff_EBX);
  GlobalFree(pvVar5);
  pvVar5 = GlobalHandle(pMem);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(pMem);
  GlobalFree(pvVar5);
  pvVar5 = GlobalHandle(pMem_00);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(pMem_00);
  GlobalFree(pvVar5);
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x20))(piVar2,iVar3);
  }
  lVar10 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(*(int **)(param_1 + 0x14),iVar3);
  if (-1 < iVar3) {
    iVar3 = lVar10;
  }
  return iVar3;
}


