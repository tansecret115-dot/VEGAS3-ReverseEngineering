/* Module: sfcdi.dll
   Function: SfCDWrite_Create
   Address: 5bf06330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDWrite_Create(struct HSFCDWRITE__ * *,struct tagSFCDWRITE_CREATE *) */

long SfCDWrite_Create(HSFCDWRITE__ **param_1,tagSFCDWRITE_CREATE *param_2)

{
  HSFCD__ *pHVar1;
  byte bVar2;
  tagSFCDWRITE_CREATE *ptVar3;
  HGLOBAL pvVar4;
  int iVar5;
  HANDLE pvVar6;
  uint uVar7;
  ulong uVar8;
  LPVOID pvVar9;
  int iVar10;
  uint uVar11;
  HSFCDWRITE__ *pHVar12;
  HSFCDWRITE__ *pHVar13;
  
                    /* 0x6330  52
                       ?SfCDWrite_Create@@YGJPAPAUHSFCDWRITE__@@PAUtagSFCDWRITE_CREATE@@@Z */
  ptVar3 = param_2;
  pHVar12 = (HSFCDWRITE__ *)0x0;
  if ((param_2 == (tagSFCDWRITE_CREATE *)0x0) ||
     (((*(int *)(param_2 + 8) == 0 && (*(int *)(param_2 + 0xc) == 0)) ||
      (pHVar1 = *(HSFCD__ **)(param_2 + 4), pHVar1 == (HSFCD__ *)0x0)))) {
LAB_5bf066c6:
    SfCDWrite_Destroy(pHVar12);
    return -0x7ff8ffa9;
  }
  if (*(uint *)(param_2 + 0x14) == 0) {
    *(undefined4 *)(pHVar1 + 0x2ca) = 0xffff;
  }
  else {
    uVar7 = FUN_5bf01dc0(pHVar1,*(uint *)(param_2 + 0x14));
    iVar10 = FUN_5bf01d30(uVar7);
    *(int *)(pHVar1 + 0x2ca) = iVar10;
  }
  if ((*(uint *)param_2 & 0x20) == 0) {
    *(undefined4 *)(pHVar1 + 0x2be) = 0;
  }
  else {
    *(undefined4 *)(pHVar1 + 0x2be) = 1;
  }
  if ((*(uint *)param_2 & 0x400) == 0) {
    *(undefined4 *)(pHVar1 + 0x2c2) = 0;
  }
  else {
    *(undefined4 *)(pHVar1 + 0x2c2) = 1;
  }
  pvVar4 = GlobalAlloc(0x42,0x1d14);
  pHVar12 = GlobalLock(pvVar4);
  if (pHVar12 != (HSFCDWRITE__ *)0x0) {
    pHVar13 = pHVar12;
    for (iVar10 = 0x745; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)pHVar13 = 0;
      pHVar13 = pHVar13 + 4;
    }
    uVar7 = *(uint *)param_2;
    *(uint *)pHVar12 = uVar7;
    if ((uVar7 & 0x40) == 0) {
      iVar10 = FUN_5bf2bb90(*(int *)(param_2 + 8));
      if ((iVar10 == 0) || (*(int *)(*(int *)(param_2 + 8) + 0x10) == 0)) goto LAB_5bf066c6;
      FUN_5bf2bf00(*(int *)(param_2 + 8));
      iVar5 = FUN_5bf2bbb0(*(int *)(param_2 + 8),0);
      iVar10 = *(int *)(*(int *)(param_2 + 8) + 0x1d8c);
      iVar5 = *(int *)(iVar5 + 0x10);
      *(undefined4 *)(pHVar12 + 0x28) = 0;
      *(int *)(pHVar12 + 0x1d00) = iVar10 - iVar5;
      *(undefined4 *)(pHVar12 + 0x2c) = *(undefined4 *)(param_2 + 8);
    }
    else {
      FUN_5bf2bac0(*(int *)(param_2 + 0xc));
      *(undefined4 *)(pHVar12 + 0x1d00) = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x18);
      *(undefined4 *)(pHVar12 + 0x28) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(pHVar12 + 0x2c) = 0;
    }
    if ((*(uint *)pHVar12 & 0x80) == 0) {
      *(undefined4 *)(pHVar12 + 0x20) = 0;
    }
    else {
      *(undefined4 *)(pHVar12 + 0x20) = *(undefined4 *)(param_2 + 0x10);
    }
    bVar2 = (byte)*(uint *)param_2;
    if ((bVar2 & 3) == 3) {
      pHVar12[0x34] = (HSFCDWRITE__)0x2;
    }
    else if ((bVar2 & 1) == 1) {
      pHVar12[0x34] = (HSFCDWRITE__)0x0;
      param_2 = (tagSFCDWRITE_CREATE *)0x930;
    }
    else if ((bVar2 & 2) == 2) {
      pHVar12[0x34] = (HSFCDWRITE__)0x1;
      param_2 = (tagSFCDWRITE_CREATE *)0x800;
    }
    else if ((*(uint *)param_2 & 0x100) == 0x100) {
      pHVar12[0x34] = (HSFCDWRITE__)0x3;
      param_2 = (tagSFCDWRITE_CREATE *)
                ((-(uint)((*(uint *)pHVar12 & 0x40) != 0) & 0xffffffec) + 0x930);
    }
    *(undefined4 *)(pHVar12 + 0x14) = *(undefined4 *)(ptVar3 + 4);
    *(undefined4 *)(pHVar12 + 0x24) = *(undefined4 *)(ptVar3 + 0x20);
    *(undefined4 *)(pHVar12 + 0x30) = 0xffffffff;
    if ((*(uint *)pHVar12 & 0x10) != 0) {
      pvVar6 = CreateFileA(*(LPCSTR *)(ptVar3 + 0x18),0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80
                           ,(HANDLE)0x0);
      *(HANDLE *)(pHVar12 + 0x30) = pvVar6;
      if (pvVar6 == (HANDLE)0xffffffff) {
        SfCDWrite_Destroy(pHVar12);
        return -0x7ffb1ff9;
      }
    }
    *(undefined4 *)(pHVar12 + 0x38) = 100;
    cdr_GetDeviceCaps(*(HSFCD__ **)(pHVar12 + 0x14),(cdrcaps_tag *)(pHVar12 + 0x38));
    FUN_5bf2c090((int *)(pHVar12 + 0x9c));
    FUN_5bf2c090((int *)(pHVar12 + 0xc4));
    uVar7 = *(uint *)(ptVar3 + 0x1c);
    if (0xff < uVar7) {
      uVar7 = 0x100;
    }
    *(uint *)(pHVar12 + 0x18) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = 0x20;
    }
    *(uint *)(pHVar12 + 0x18) = uVar7;
    uVar8 = SfScsi_GetDefIOBufferSize();
    *(ulong *)(pHVar12 + 0x1cf0) = uVar8 & 0xfffff800;
    pvVar4 = GlobalAlloc(0x42,(uVar8 & 0xfffff800) * *(int *)(pHVar12 + 0x18) + 0x800);
    pvVar9 = GlobalLock(pvVar4);
    *(LPVOID *)(pHVar12 + 0x1cec) = pvVar9;
    if (pvVar9 != (LPVOID)0x0) {
      uVar11 = 0;
      uVar7 = (*(uint *)(pHVar12 + 0x1cf0) / 0x9b0) * (int)param_2;
      if (*(int *)(pHVar12 + 0x18) != 0) {
        pHVar13 = pHVar12 + 0x100;
        do {
          *(uint *)(pHVar13 + -0xc) =
               *(int *)(pHVar12 + 0x1cf0) * uVar11 + (0x800 - ((uint)pvVar9 & 0x800)) +
               *(int *)(pHVar12 + 0x1cec);
          *(tagSFCDWRITE_CREATE **)pHVar13 = param_2;
          *(uint *)(pHVar13 + -8) = uVar7;
          *(uint *)(pHVar13 + -4) = uVar7 / *(uint *)pHVar13;
          FUN_5bf2c120((undefined4 *)(pHVar12 + 0x9c),(int *)(pHVar13 + -0x14));
          uVar11 = uVar11 + 1;
          pHVar13 = pHVar13 + 0x1c;
        } while (uVar11 < *(uint *)(pHVar12 + 0x18));
      }
      if ((*(uint *)pHVar12 & 0x200) == 0) {
        *(undefined4 *)(pHVar12 + 0x1cf4) = 0;
      }
      else {
        pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        *(HANDLE *)(pHVar12 + 0x1cf4) = pvVar6;
        if (pvVar6 == (HANDLE)0x0) goto LAB_5bf066af;
      }
      pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      *(HANDLE *)(pHVar12 + 0x1cf8) = pvVar6;
      if (pvVar6 != (HANDLE)0x0) {
        *(undefined4 *)(pHVar1 + 0x15c) = 0;
        *param_1 = pHVar12;
        return 0;
      }
    }
  }
LAB_5bf066af:
  SfCDWrite_Destroy(pHVar12);
  return -0x7ff8fff2;
}


