/* Module: g2plug.dll
   Function: FUN_5f804f20
   Address: 5f804f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f804f20(void *this,int param_1,undefined4 param_2)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *this_00;
  uint uVar4;
  WCHAR *pWVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  LPCWSTR pWVar9;
  int *unaff_EDI;
  int iVar10;
  LPCWSTR pMem;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  WCHAR *pWVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int *piStack_854;
  int iStack_850;
  int *local_84c;
  undefined4 uStack_848;
  int *local_844;
  void *local_840;
  int *local_83c;
  ushort uStack_836;
  WCHAR aWStack_830 [2];
  undefined1 auStack_82c [12];
  WCHAR aWStack_820 [4];
  int iStack_818;
  int iStack_814;
  WCHAR aWStack_810 [1032];
  
  local_84c = this;
  if (DAT_5f877464 == 0) {
    SfRealG2_Initialize(DAT_5f877460);
    DAT_5f877464 = DAT_5f877464 + 1;
  }
  pvVar1 = GlobalAlloc(0x40,0x138);
  puVar2 = GlobalLock(pvVar1);
  if ((puVar2 == (undefined4 *)0x0) || (piVar3 = (int *)FUN_5f8063a0(puVar2), piVar3 == (int *)0x0))
  {
    return -0x7ff8fff2;
  }
  pvVar1 = GlobalAlloc(0x40,0xc);
  puVar2 = GlobalLock(pvVar1);
  iVar10 = 0;
  if ((puVar2 == (undefined4 *)0x0) ||
     (this_00 = (void *)FUN_5f806910(puVar2), this_00 == (void *)0x0)) {
    return -0x7ff8fff2;
  }
  local_840 = this_00;
  FUN_5f806930(this_00,param_2);
  FUN_5f806940((int)this_00);
  local_83c = (int *)0x0;
  local_844 = (int *)0x0;
  if (0 < *(int *)((int)this + 0x114)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x118) + 8) + iVar10 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        if (local_83c == (int *)0x0) {
          (**(code **)*puVar2)();
        }
        if (local_844 == (int *)0x0) {
          (**(code **)*puVar2)();
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)((int)this + 0x114));
  }
  iVar10 = FUN_5f8064a0(piVar3,(LPCSTR)((int)this + 8),this,local_844,local_83c);
  *(uint *)(param_1 + 0x128) = (uint)(local_844 != (int *)0x0);
  *(uint *)(param_1 + 300) = (uint)(local_83c != (int *)0x0);
  if (((-1 < iVar10) && ((local_844 != (int *)0x0) != 0)) &&
     (iVar10 = (**(code **)(*local_844 + 0x30))(), -1 < iVar10)) {
    *(uint *)(param_1 + 0x134) = (uint)(1 < uStack_836);
  }
  if (local_844 != (int *)0x0) {
    (**(code **)(*local_844 + 8))();
    local_844 = (int *)0x0;
  }
  if (local_83c != (int *)0x0) {
    (**(code **)(*local_83c + 8))();
    local_83c = (int *)0x0;
  }
  if (iVar10 < 0) {
    return iVar10;
  }
  *(int **)(param_1 + 0x14) = piVar3;
  *(void **)(param_1 + 0x18) = local_840;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lstrcpynA((LPSTR)(param_1 + 0x24),(LPCSTR)((int)this + 8),0x104);
  *(undefined1 *)(param_1 + 0x127) = 0;
  *(undefined4 *)(param_1 + 0x3f7) = 0;
  *(undefined4 *)(param_1 + 0x3fb) = 0;
  lVar11 = (**(code **)(*piVar3 + 0x3c))();
  piVar3 = local_84c;
  *(longlong *)(param_1 + 0x3ff) = lVar11 + *(longlong *)(param_1 + 0x3f7);
  if ((int *)local_84c[0x49] != (int *)0x0) {
    (**(code **)(*(int *)local_84c[0x49] + 0x18))();
    if (aWStack_810[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_810,-1,(LPSTR)(param_1 + 0x160),0x80,(LPCSTR)0x0,(LPBOOL)0x0);
      *(undefined1 *)(param_1 + 0x1df) = 0;
    }
    (**(code **)(*(int *)piVar3[0x49] + 0x18))();
    if ((aWStack_820[0] != L'\0') ||
       ((**(code **)(*(int *)piVar3[0x49] + 0x18))(), aWStack_820[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_820,-1,(LPSTR)(param_1 + 0x1e0),0x80,(LPCSTR)0x0,(LPBOOL)0x0);
      *(undefined1 *)(param_1 + 0x25f) = 0;
    }
    piVar15 = (int *)piVar3[0x49];
    (**(code **)(*piVar15 + 0x18))();
    if (aWStack_830[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_830,-1,(LPSTR)(param_1 + 0x260),0x80,(LPCSTR)0x0,(LPBOOL)0x0);
      *(undefined1 *)(param_1 + 0x2df) = 0;
    }
    piVar19 = (int *)piVar3[0x49];
    pWVar14 = aWStack_830;
    (**(code **)(*piVar19 + 0x18))();
    if ((short)local_840 != 0) {
      WideCharToMultiByte(0,0,(LPCWSTR)&local_840,-1,(LPSTR)(param_1 + 0x2e0),0xff,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      *(undefined1 *)(param_1 + 0x3de) = 0;
    }
    piVar12 = (int *)piVar3[0x49];
    iVar10 = (**(code **)(*piVar12 + 0x10))();
    if (-1 < iVar10) {
      puVar6 = &stack0xfffff768;
      *(undefined4 *)(param_1 + 0x41b) = 1;
      uVar4 = (**(code **)(*(int *)pWVar14 + 0xc))();
      if (uVar4 == 0) {
        pWVar9 = (LPCWSTR)0x0;
        piVar13 = (int *)0x0;
        uVar16 = uVar4;
        uVar17 = uVar4;
        (**(code **)(*piVar12 + 0x14))(piVar12,0,0,0);
        pWVar5 = pWVar14;
        if ((WCHAR *)0xb < pWVar14) {
          pWVar5 = (WCHAR *)0xc;
        }
        iVar10 = (**(code **)(*piVar13 + 0xc))(piVar13,&stack0xfffff75c,pWVar5,&stack0xfffff74c);
        if ((iVar10 == 0) && (uVar16 < 0x65)) {
          piVar18 = (int *)0x0;
          piVar13 = (int *)0x0;
          pMem = (LPCWSTR)0x0;
          piVar3 = piVar19;
          (**(code **)(*piVar12 + 0x14))(piVar12,uVar4 - 0xc,0,1,0);
          iVar10 = 0;
          if (0 < (int)uVar17) {
            do {
              piVar19 = piVar12;
              (**(code **)(*piVar12 + 0xc))(piVar12,&stack0xfffff758,4,&stack0xfffff760);
              if ((undefined1 *)0x1b < puVar6) {
                puVar6 = (undefined1 *)0x1c;
              }
              puVar6 = puVar6 + -4;
              (**(code **)(*(int *)pWVar14 + 0xc))(pWVar14,&stack0xfffff780,puVar6,&stack0xfffff750)
              ;
              iVar7 = (**(code **)(*piVar12 + 0x14))(piVar12,piVar15 + -7,0,1,0);
              if (unaff_ESI == (int *)0x0) {
                piVar12 = piVar19;
                if (pWVar9 != (LPCWSTR)0x0) {
                  *pWVar9 = L'\0';
                }
              }
              else {
                if ((int)piVar18 < (int)unaff_ESI) {
                  if (pWVar9 != (LPCWSTR)0x0) {
                    pvVar1 = GlobalHandle(pWVar9);
                    GlobalUnlock(pvVar1);
                    pvVar1 = GlobalHandle(pWVar9);
                    GlobalFree(pvVar1);
                  }
                  pvVar1 = GlobalAlloc(0x42,(int)unaff_ESI * 2);
                  pWVar9 = GlobalLock(pvVar1);
                  piVar18 = unaff_ESI;
                }
                iVar7 = (**(code **)(*piVar19 + 0xc))(piVar19,pWVar9,unaff_ESI,&stack0xfffff760);
                piVar12 = piVar19;
              }
              if (unaff_EBP == (int *)0x0) {
                if (pMem != (LPCWSTR)0x0) {
                  *pMem = L'\0';
                }
              }
              else {
                if ((int)piVar13 < (int)unaff_EBP) {
                  if (pMem != (LPCWSTR)0x0) {
                    pvVar1 = GlobalHandle(pMem);
                    GlobalUnlock(pvVar1);
                    pvVar1 = GlobalHandle(pMem);
                    GlobalFree(pvVar1);
                  }
                  pvVar1 = GlobalAlloc(0x42,(int)unaff_EBP * 2);
                  pMem = GlobalLock(pvVar1);
                  piVar13 = unaff_EBP;
                }
                iVar7 = (**(code **)(*piVar12 + 0xc))(piVar12,pMem,unaff_EBP,&stack0xfffff760);
              }
              if (-1 < iVar7) {
                FUN_5f805770(param_1,(int)&stack0xfffff78c,pWVar9,pMem);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)uVar17);
            if (pWVar9 != (LPCWSTR)0x0) {
              pvVar1 = GlobalHandle(pWVar9);
              GlobalUnlock(pvVar1);
              pvVar1 = GlobalHandle(pWVar9);
              GlobalFree(pvVar1);
            }
            if (pMem != (LPCWSTR)0x0) {
              pvVar1 = GlobalHandle(pMem);
              GlobalUnlock(pvVar1);
              pvVar1 = GlobalHandle(pMem);
              GlobalFree(pvVar1);
            }
          }
        }
      }
      (**(code **)(*piVar12 + 8))(piVar12);
    }
    iVar10 = (**(code **)(*(int *)piVar3[0x49] + 0xc))();
    if (-1 < iVar10) {
      piVar15 = &iStack_850;
      *(undefined4 *)(param_1 + 0x427) = 1;
      iVar10 = (**(code **)(*piStack_854 + 0xc))();
      if (iVar10 == 0) {
        uStack_848 = 0;
        piVar19 = (int *)0x0;
        local_844 = (int *)0x0;
        local_840 = (void *)0x0;
        (**(code **)(*unaff_EDI + 0x14))();
        iVar10 = (**(code **)(*piVar19 + 0xc))();
        if ((iVar10 == 0) && (local_844 < (int *)0x65)) {
          iVar10 = 0;
          pWVar9 = (LPCWSTR)0x0;
          (**(code **)(*unaff_EDI + 0x14))();
          iStack_850 = 0;
          piVar3 = unaff_EBP;
          if (0 < (int)local_840) {
            do {
              piVar12 = unaff_EDI;
              (**(code **)(*unaff_EDI + 0xc))();
              piVar19 = piVar15;
              if ((int *)0x1b < piVar15) {
                piVar19 = (int *)0x1c;
              }
              piVar19 = piVar19 + -1;
              local_83c = piVar15;
              (**(code **)(*piStack_854 + 0xc))();
              iVar7 = (**(code **)(*piVar12 + 0x14))();
              if (iStack_818 == 0) {
                if (iStack_814 == 0) {
                  if (pWVar9 != (LPCWSTR)0x0) {
                    *pWVar9 = L'\0';
                  }
                }
                else {
                  if (iVar10 < iStack_814) {
                    if (pWVar9 != (LPCWSTR)0x0) {
                      pvVar1 = GlobalHandle(pWVar9);
                      GlobalUnlock(pvVar1);
                      pvVar1 = GlobalHandle(pWVar9);
                      GlobalFree(pvVar1);
                    }
                    pvVar1 = GlobalAlloc(0x42,iStack_814 * 2);
                    pWVar9 = GlobalLock(pvVar1);
                    iVar10 = iStack_814;
                  }
                  iVar7 = (**(code **)(*unaff_EDI + 0xc))();
                }
                if ((-1 < iVar7) && (pWVar9 != (LPCWSTR)0x0)) {
                  FUN_5f805a40(param_1,(int)auStack_82c,pWVar9);
                }
              }
              else if (iStack_814 != 0) {
                (**(code **)(*unaff_EDI + 0x14))();
              }
              iStack_850 = iStack_850 + 1;
              piVar15 = piVar19;
            } while (iStack_850 < (int)local_840);
            if (pWVar9 != (LPCWSTR)0x0) {
              pvVar1 = GlobalHandle(pWVar9);
              GlobalUnlock(pvVar1);
              pvVar1 = GlobalHandle(pWVar9);
              GlobalFree(pvVar1);
            }
          }
        }
      }
      (**(code **)(*unaff_EDI + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x66f) = 0;
  piVar3 = (int *)piVar3[1];
  if (piVar3 != (int *)0x0) {
    iStack_850 = 0;
    iVar10 = (**(code **)(*piVar3 + 0x18))();
    if (-1 < iVar10) {
      iVar10 = (**(code **)*unaff_EBX)();
      if (-1 < iVar10) {
        uVar8 = (**(code **)(*unaff_ESI + 0x18))();
        *(undefined4 *)(param_1 + 0x66f) = uVar8;
        (**(code **)(*piVar3 + 8))();
      }
      (**(code **)(*unaff_EDI + 8))();
    }
  }
  return 0;
}


