/* Module: sfnetmedia.dll
   Function: FUN_00411e60
   Address: 00411e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00411e60(IStream *param_1,undefined4 param_2,wchar_t *param_3,undefined4 *param_4,
                undefined4 *param_5,HMODULE param_6)

{
  wchar_t wVar1;
  int iVar2;
  size_t sVar3;
  undefined4 *puVar4;
  HGLOBAL hMem;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  int *unaff_EBX;
  LPVOID unaff_EBP;
  LPVOID unaff_ESI;
  HMODULE unaff_retaddr;
  IStream *This;
  char *pcVar8;
  LPSTREAM pstm;
  undefined4 uVar9;
  ULARGE_INTEGER *plibNewPosition;
  HGLOBAL hMem_00;
  char *pcVar10;
  int *piVar11;
  IStream IVar12;
  int *piVar13;
  int *piVar14;
  void *pv;
  int iStack_238;
  undefined4 *puStack_234;
  LPVOID apvStack_230 [2];
  undefined4 local_228;
  int *local_224 [2];
  int local_21c [125];
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  int iStack_1c;
  
  if (param_3 == (wchar_t *)0x0) {
    return (int)unaff_ESI;
  }
  if (param_4 == (undefined4 *)0x0) {
    return (int)unaff_ESI;
  }
  if (param_5 == (undefined4 *)0x0) {
    return (int)unaff_ESI;
  }
  *param_5 = 0;
  *param_4 = 0;
  local_224[0] = (int *)0x0;
  iVar2 = FUN_0042ab40(param_6,&DAT_00436238);
  if ((iVar2 < 0) || (local_224[0] == (int *)0x0)) {
    pcVar8 = "Could not create SfConfigMgr COM object hr=0x%x";
    uVar9 = 0x105;
    pcVar10 = "gatherstats.cpp";
    IVar12.lpVtbl = (IStreamVtbl *)((int)&puRam00000000 + 1);
    puVar6 = FUN_004012b0();
    FUN_004124f0((int)puVar6,(uint)IVar12.lpVtbl,pcVar10,uVar9,pcVar8);
    goto LAB_004122d6;
  }
  local_21c[0] = 0;
  piVar14 = local_21c;
  local_228 = 0;
  iVar2 = (**(code **)(*local_224[0] + 0xc))();
  if (iVar2 < 0) {
    pcVar10 = "ISfConfigMgr::GetXMLVersionData failed hr=0x%x";
    uVar9 = 0xfd;
LAB_00412291:
    pcVar8 = "gatherstats.cpp";
    uVar7 = 1;
    puVar6 = FUN_004012b0();
    FUN_004124f0((int)puVar6,uVar7,pcVar8,uVar9,pcVar10);
  }
  else {
    iVar2 = CoCreateInstance((IID *)&DAT_00436248,(LPUNKNOWN)0x0,1,(IID *)&DAT_00436258,
                             (LPVOID *)&stack0xfffffdbc);
    if (-1 < iVar2) {
      piVar11 = (int *)&stack0xfffffdb4;
      pv = (void *)0x0;
      plibNewPosition = (ULARGE_INTEGER *)&DAT_0043c970;
      pstm = (LPSTREAM)0x0;
      iVar2 = (*(code *)*puRam00000000)();
      if (-1 < iVar2) {
        apvStack_230[0] = (LPVOID)0x0;
        iVar2 = (*param_1->lpVtbl->Write)(param_1,pv,(ULONG)unaff_EBP,(ULONG *)apvStack_230);
        if (-1 < iVar2) {
          (*param_1->lpVtbl->Release)(param_1);
          param_1 = (IStream *)0x0;
          if (unaff_EBP != apvStack_230[0]) {
            iVar2 = -0x7ffb1fc7;
            goto LAB_00412251;
          }
          iVar2 = (**(code **)(*piVar14 + 0xdc))(piVar14,L"configinfo",&stack0xfffffdbc);
          if (-1 < iVar2) {
            iStack_238 = 0;
            iVar2 = (*(code *)puRam00000000[8])(0,&iStack_238);
            if ((-1 < iVar2) && (iStack_238 == 1)) {
              puStack_234 = (undefined4 *)0x0;
              iVar2 = (*(code *)puRam00000000[9])(0,&puStack_234);
              if (-1 < iVar2) {
                unaff_EBX = (int *)0x0;
                iVar2 = FUN_0042a990((int)piVar14,puStack_234,L"downloadmediastats",
                                     (undefined4 *)&stack0xfffffdc4);
                if (-1 < iVar2) {
                  if (iStack_1c != 0) {
                    piVar13 = (int *)0x0;
                    iVar2 = FUN_0042a990((int)piVar14,(undefined4 *)0x0,L"provider",
                                         (undefined4 *)&stack0xfffffdac);
                    if (iVar2 < 0) goto LAB_0041223f;
                    IVar12.lpVtbl = (IStreamVtbl *)0x0;
                    iVar2 = FUN_0042aaf0(piVar14,piVar13,iStack_1c,(undefined4 *)&stack0xfffffda4);
                    if (-1 < iVar2) {
                      (**(code **)((IVar12.lpVtbl)->QueryInterface + 8))(IVar12.lpVtbl);
                    }
                    (**(code **)(*piVar13 + 8))(piVar13);
                  }
                  if (-1 < iVar2) {
                    wVar1 = *param_3;
                    while (wVar1 != L'\0') {
                      IVar12.lpVtbl = (IStreamVtbl *)0x0;
                      iVar2 = FUN_0042a990((int)piVar14,(undefined4 *)0x0,L"mediafile",
                                           (undefined4 *)&stack0xfffffda4);
                      if (-1 < iVar2) {
                        _wsplitpath(param_3,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,
                                    (wchar_t *)local_224);
                        piVar13 = (int *)0x0;
                        iVar2 = FUN_0042aaf0(piVar14,IVar12.lpVtbl,local_224,
                                             (undefined4 *)&stack0xfffffdac);
                        if (-1 < iVar2) {
                          (**(code **)(*piVar13 + 8))(piVar13);
                        }
                        (**(code **)((IVar12.lpVtbl)->QueryInterface + 8))(IVar12.lpVtbl);
                      }
                      sVar3 = wcslen(param_3);
                      param_3 = param_3 + sVar3 + 1;
                      wVar1 = *param_3;
                    }
                    if ((-1 < iVar2) &&
                       (iVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,(LPSTREAM *)&stack0xfffffda8),
                       -1 < iVar2)) {
                      This = (IStream *)&stack0xfffffda4;
                      piVar13 = (int *)&DAT_0043c960;
                      iVar2 = (**(code **)*piVar14)(piVar14);
                      if (-1 < iVar2) {
                        iVar2 = (**(code **)((plibNewPosition->s).LowPart + 0x18))
                                          (plibNewPosition,piVar11,1);
                        if ((-1 < iVar2) &&
                           (iVar2 = (*This->lpVtbl->Seek)
                                              (This,(LARGE_INTEGER)0x200000000,
                                               (DWORD)&stack0xfffffdbc,plibNewPosition), -1 < iVar2)
                           ) {
                          hMem_00 = (HGLOBAL)0x0;
                          iVar2 = GetHGlobalFromStream(pstm,(HGLOBAL *)&stack0xfffffd98);
                          if (-1 < iVar2) {
                            puVar4 = GlobalLock(hMem_00);
                            hMem = GlobalAlloc(0x40,(SIZE_T)unaff_EBP);
                            puVar5 = GlobalLock(hMem);
                            *puStack_24 = puVar5;
                            if (puVar5 == (undefined4 *)0x0) {
                              iVar2 = -0x7ff8fff2;
                            }
                            else {
                              for (uVar7 = (uint)unaff_EBP >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *puVar5 = *puVar4;
                                puVar4 = puVar4 + 1;
                                puVar5 = puVar5 + 1;
                              }
                              for (uVar7 = (uint)unaff_EBP & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
                                puVar4 = (undefined4 *)((int)puVar4 + 1);
                                puVar5 = (undefined4 *)((int)puVar5 + 1);
                              }
                              iVar2 = 0;
                              *puStack_28 = unaff_EBP;
                            }
                            GlobalUnlock(hMem_00);
                          }
                        }
                        (**(code **)(*piVar13 + 8))(piVar13);
                      }
                      (**(code **)(*piVar11 + 8))(piVar11);
                      goto LAB_00412251;
                    }
                  }
                }
              }
            }
          }
        }
LAB_0041223f:
        if (param_1 != (IStream *)0x0) {
          (*param_1->lpVtbl->Release)(param_1);
        }
      }
LAB_00412251:
      (**(code **)(*piVar14 + 8))(piVar14);
      param_6 = unaff_retaddr;
    }
    unaff_ESI = (LPVOID)0x0;
    CoTaskMemFree(unaff_EBP);
    if (iVar2 < 0) {
      pcVar10 = "Something failed when adding XML downloadmediastats elements hr=0x%x";
      uVar9 = 0xf8;
      goto LAB_00412291;
    }
  }
  (**(code **)(*unaff_EBX + 8))();
  local_224[0] = (int *)0x0;
LAB_004122d6:
  if (param_6 != (HMODULE)0x0) {
    FreeLibrary(param_6);
  }
  return (int)unaff_ESI;
}


