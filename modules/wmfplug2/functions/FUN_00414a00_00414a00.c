/* Module: wmfplug2.dll
   Function: FUN_00414a00
   Address: 00414a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_00414a00(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  int iVar3;
  SIZE_T dwBytes;
  undefined4 *lParam;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar7;
  ushort *puVar8;
  int *unaff_EDI;
  WPARAM WVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  int *local_338;
  uint local_334;
  size_t local_330;
  undefined4 *local_32c;
  undefined4 *local_328;
  uint auStack_324 [2];
  CHAR aCStack_31c [259];
  undefined1 uStack_219;
  WCHAR aWStack_218 [262];
  HWND pHStack_c;
  uint uStack_8;
  
  local_328 = (undefined4 *)0x0;
  local_330 = 0;
  local_338 = (int *)0x0;
  local_334 = 0;
  local_32c = (undefined4 *)0x0;
  WVar9 = 0;
  LVar1 = SendMessageA(param_1,0x146,0,0);
  if (0 < LVar1) {
    do {
      pMem = (LPCVOID)SendMessageA(param_1,0x150,WVar9,0);
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      WVar9 = WVar9 + 1;
      LVar1 = SendMessageA(param_1,0x146,0,0);
    } while ((int)WVar9 < LVar1);
  }
  SendMessageA(param_1,0x14b,0,0);
  iVar3 = WMCreateProfileManager(&local_328);
  if (-1 < iVar3) {
    iVar3 = (**(code **)*local_32c)(local_32c,&DAT_0047c7d0,&local_338);
    if (((-1 < iVar3) &&
        (iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,&DAT_0047b630,&local_328), -1 < iVar3))
       && (local_32c = (undefined4 *)0x0, local_328 != (undefined4 *)0x0)) {
      do {
        iVar3 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,&DAT_0047b630,local_32c,auStack_324);
        if (iVar3 < 0) break;
        local_334 = 0;
        if (auStack_324[0] != 0) {
          do {
            if (unaff_EBX != (void *)0x0) {
              free(unaff_EBX);
              unaff_EBX = (void *)0x0;
            }
            local_330 = 0;
            auStack_324[1] = 0x104;
            iVar3 = (**(code **)(*unaff_ESI + 0x1c))
                              (unaff_ESI,&DAT_0047b630,local_32c,local_334,&stack0xfffffcc0,
                               aWStack_218,auStack_324 + 1);
            if (iVar3 < 0) break;
            if (unaff_EDI != (int *)0x0) {
              (**(code **)(*unaff_EDI + 8))(unaff_EDI);
              unaff_EDI = (int *)0x0;
            }
            iVar3 = (**(code **)*unaff_EBP)(unaff_EBP,&DAT_0047c7f0,&stack0xfffffcb8);
            if (unaff_EBP != (int *)0x0) {
              (**(code **)(*unaff_EBP + 8))(unaff_EBP);
              unaff_EBP = (int *)0x0;
            }
            if ((iVar3 < 0) ||
               (iVar3 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,0,&local_330), iVar3 < 0)) break;
            unaff_EBX = calloc(1,local_330);
            if (unaff_EBX == (void *)0x0) {
              iVar3 = -0x7ff8fff2;
              break;
            }
            iVar3 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,unaff_EBX,&local_330);
            if (iVar3 < 0) break;
            iVar4 = 4;
            bVar12 = true;
            piVar7 = (int *)((int)unaff_EBX + 0x2c);
            piVar10 = &DAT_0047c0d8;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar12 = *piVar7 == *piVar10;
              piVar7 = piVar7 + 1;
              piVar10 = piVar10 + 1;
            } while (bVar12);
            if (!bVar12) {
              iVar3 = -0x7fffbffb;
              break;
            }
            puVar8 = *(ushort **)((int)unaff_EBX + 0x44);
            if (*puVar8 == uStack_8) {
              if ((&stack0x00000000 == (undefined1 *)0x218) || (aWStack_218[0] != L'\0')) {
                WideCharToMultiByte(0,0,aWStack_218,-1,aCStack_31c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              else if (&stack0x00000000 != (undefined1 *)0x31c) {
                aCStack_31c[0] = '\0';
              }
              hWnd = pHStack_c;
              uStack_219 = 0;
              LVar1 = SendMessageA(pHStack_c,0x158,0,(LPARAM)aCStack_31c);
              if ((LVar1 == -1) &&
                 (WVar9 = SendMessageA(hWnd,0x143,0,(LPARAM)aCStack_31c), WVar9 != 0xffffffff)) {
                if ((*puVar8 == 3) || (*puVar8 == 1)) {
                  dwBytes = 0x10;
                }
                else {
                  dwBytes = puVar8[8] + 0x12;
                }
                pvVar2 = GlobalAlloc(0x42,dwBytes);
                lParam = GlobalLock(pvVar2);
                if (lParam != (undefined4 *)0x0) {
                  if ((*puVar8 == 3) || (*puVar8 == 1)) {
                    uVar5 = 0x10;
                  }
                  else {
                    uVar5 = puVar8[8] + 0x12;
                  }
                  puVar11 = lParam;
                  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar11 = *(undefined4 *)puVar8;
                    puVar8 = puVar8 + 2;
                    puVar11 = puVar11 + 1;
                  }
                  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *(char *)puVar11 = (char)*puVar8;
                    puVar8 = (ushort *)((int)puVar8 + 1);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  SendMessageA(pHStack_c,0x151,WVar9,(LPARAM)lParam);
                }
              }
            }
            local_334 = local_334 + 1;
          } while (local_334 < auStack_324[0]);
        }
        local_32c = (undefined4 *)((int)local_32c + 1);
      } while (local_32c < local_328);
      if (unaff_EBX != (void *)0x0) {
        free(unaff_EBX);
      }
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    if (local_338 != (int *)0x0) {
      (**(code **)(*local_338 + 8))(local_338);
      local_338 = (int *)0x0;
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  return iVar3;
}


