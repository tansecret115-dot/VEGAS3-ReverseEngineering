/* Module: wmfplug2.dll
   Function: FUN_00414520
   Address: 00414520
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414520(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pMem;
  WPARAM wParam;
  int iVar3;
  int *unaff_ESI;
  int *piVar4;
  int *unaff_EDI;
  int *piVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uStack_330;
  SIZE_T SStack_32c;
  int *piStack_328;
  undefined4 uStack_324;
  uint uStack_320;
  int *apiStack_31c [64];
  undefined1 uStack_219;
  WCHAR aWStack_218 [262];
  HWND pHStack_c;
  
  SendMessageA(param_1,0x14b,0,0);
  iVar1 = WMCreateProfileManager();
  if (-1 < iVar1) {
    piVar7 = apiStack_31c[0];
    iVar1 = (**(code **)*apiStack_31c[0])(apiStack_31c[0],&DAT_0047c7d0);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,&DAT_0047b630,&uStack_330);
      if ((-1 < iVar1) && (uVar10 = 0, uStack_330 != 0)) {
        do {
          uStack_324 = 0x104;
          iVar1 = (**(code **)(*unaff_EDI + 0x18))
                            (unaff_EDI,&DAT_0047b630,uVar10,aWStack_218,&uStack_324);
          if (-1 < iVar1) {
            piVar8 = (int *)0x0;
            piVar9 = (int *)0x0;
            iVar1 = (**(code **)(*unaff_EDI + 0x14))
                              (unaff_EDI,&DAT_0047b630,uVar10,0,&stack0xfffffcc0);
            if (-1 < iVar1) {
              (**(code **)*piVar8)(piVar8,&DAT_0047c7f0,&stack0xfffffcc4);
              if (unaff_ESI != (int *)0x0) {
                (**(code **)(*unaff_ESI + 8))(unaff_ESI);
              }
              unaff_ESI = (int *)0x0;
              iVar1 = (**(code **)(*piVar7 + 0x10))(piVar7,0,&stack0xfffffcc8);
              if (-1 < iVar1) {
                pvVar2 = GlobalAlloc(0x40,SStack_32c);
                pMem = GlobalLock(pvVar2);
                if (pMem == (LPVOID)0x0) {
                  iVar1 = -0x7ff8fff2;
                }
                else {
                  iVar1 = (**(code **)(*piVar9 + 0x10))(piVar9,pMem,&SStack_32c);
                  if (-1 < iVar1) {
                    iVar3 = 4;
                    bVar6 = true;
                    piVar4 = (int *)((int)pMem + 0x2c);
                    piVar5 = &DAT_0047c0d8;
                    do {
                      if (iVar3 == 0) break;
                      iVar3 = iVar3 + -1;
                      bVar6 = *piVar4 == *piVar5;
                      piVar4 = piVar4 + 1;
                      piVar5 = piVar5 + 1;
                    } while (bVar6);
                    if (bVar6) {
                      uStack_320 = (uint)**(ushort **)((int)pMem + 0x44);
                    }
                    else {
                      iVar1 = -0x7fffbffb;
                    }
                  }
                }
                if (pMem != (LPVOID)0x0) {
                  pvVar2 = GlobalHandle(pMem);
                  GlobalUnlock(pvVar2);
                  pvVar2 = GlobalHandle(pMem);
                  GlobalFree(pvVar2);
                }
              }
            }
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 8))(piVar8);
            }
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 8))(piVar9);
            }
            if (-1 < iVar1) {
              if ((&stack0x00000000 == (undefined1 *)0x218) || (aWStack_218[0] != L'\0')) {
                WideCharToMultiByte(0,0,aWStack_218,-1,(LPSTR)apiStack_31c,0x104,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
              }
              else if (&stack0x00000000 != (undefined1 *)0x31c) {
                apiStack_31c[0] = (int *)((uint)apiStack_31c[0] & 0xffffff00);
              }
              hWnd = pHStack_c;
              uStack_219 = 0;
              wParam = SendMessageA(pHStack_c,0x143,0,(LPARAM)apiStack_31c);
              if (wParam != 0xffffffff) {
                SendMessageA(hWnd,0x151,wParam,uStack_320);
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uStack_330);
      }
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
    }
    if (piStack_328 != (int *)0x0) {
      (**(code **)(*piStack_328 + 8))(piStack_328);
    }
  }
  return iVar1;
}


