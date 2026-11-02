/* Module: wmfplug2.dll
   Function: FUN_004147a0
   Address: 004147a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004147a0(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  void *_Memory;
  WPARAM wParam;
  int iVar2;
  int *unaff_ESI;
  int *piVar3;
  int *unaff_EDI;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uStack_330;
  size_t sStack_32c;
  int *piStack_328;
  undefined4 uStack_324;
  LPARAM LStack_320;
  int *apiStack_31c [64];
  undefined1 uStack_219;
  WCHAR aWStack_218 [262];
  HWND pHStack_c;
  
  SendMessageA(param_1,0x14b,0,0);
  iVar1 = WMCreateProfileManager();
  if (-1 < iVar1) {
    piVar6 = apiStack_31c[0];
    iVar1 = (**(code **)*apiStack_31c[0])(apiStack_31c[0],&DAT_0047c7d0);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,&DAT_0047b640,&uStack_330);
      if ((-1 < iVar1) && (uVar9 = 0, uStack_330 != 0)) {
        do {
          uStack_324 = 0x104;
          iVar1 = (**(code **)(*unaff_ESI + 0x18))
                            (unaff_ESI,&DAT_0047b640,uVar9,aWStack_218,&uStack_324);
          if (-1 < iVar1) {
            piVar7 = (int *)0x0;
            piVar8 = (int *)0x0;
            iVar1 = (**(code **)(*unaff_ESI + 0x14))
                              (unaff_ESI,&DAT_0047b640,uVar9,0,&stack0xfffffcc0);
            if (-1 < iVar1) {
              (**(code **)*piVar7)(piVar7,&DAT_0047c7f0,&stack0xfffffcc4);
              if (unaff_EDI != (int *)0x0) {
                (**(code **)(*unaff_EDI + 8))(unaff_EDI);
              }
              unaff_EDI = (int *)0x0;
              iVar1 = (**(code **)(*piVar6 + 0x10))(piVar6,0,&stack0xfffffcc8);
              if (-1 < iVar1) {
                _Memory = calloc(1,sStack_32c);
                if (_Memory == (void *)0x0) {
                  iVar1 = -0x7ff8fff2;
                }
                else {
                  iVar1 = (**(code **)(*piVar8 + 0x10))(piVar8,_Memory,&sStack_32c);
                  if (-1 < iVar1) {
                    iVar2 = 4;
                    bVar5 = true;
                    piVar3 = (int *)((int)_Memory + 0x2c);
                    piVar4 = &DAT_0047c0e8;
                    do {
                      if (iVar2 == 0) break;
                      iVar2 = iVar2 + -1;
                      bVar5 = *piVar3 == *piVar4;
                      piVar3 = piVar3 + 1;
                      piVar4 = piVar4 + 1;
                    } while (bVar5);
                    if (bVar5) {
                      LStack_320 = *(LPARAM *)(*(int *)((int)_Memory + 0x44) + 0x40);
                    }
                    else {
                      iVar1 = -0x7fffbffb;
                    }
                  }
                }
                if (_Memory != (void *)0x0) {
                  free(_Memory);
                }
              }
            }
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 8))(piVar7);
            }
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 8))(piVar8);
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
                SendMessageA(hWnd,0x151,wParam,LStack_320);
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uStack_330);
      }
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
    }
    if (piStack_328 != (int *)0x0) {
      (**(code **)(*piStack_328 + 8))(piStack_328);
    }
  }
  return iVar1;
}


