/* Module: sfpublish.dll
   Function: FUN_004052f0
   Address: 004052f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040540c) */

HWND FUN_004052f0(HMODULE param_1,HWND param_2,HWND param_3,DLGPROC param_4,LPARAM param_5)

{
  short sVar1;
  BOOL BVar2;
  HRSRC pHVar3;
  LPCDLGTEMPLATEA pDVar4;
  int iVar5;
  int iVar6;
  WORD *pWVar7;
  HGLOBAL hMem;
  HRSRC pHVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 *puVar14;
  LPWSTR pWVar15;
  HWND pHVar16;
  HRSRC pHVar17;
  LPCDLGTEMPLATEA pDVar18;
  undefined4 *puVar19;
  tagWNDCLASSEXA local_68;
  int local_38;
  HRSRC local_34;
  HGLOBAL local_30;
  HWND local_2c;
  HGLOBAL local_28;
  HRSRC local_24;
  uint local_20;
  LPCDLGTEMPLATEA local_1c;
  LPCDLGTEMPLATEA local_18;
  HRSRC local_14;
  HRSRC local_10;
  LPWSTR local_c;
  ushort *local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
  DAT_004413f4 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_004413f0 = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_68.cbSize = 0x30;
  BVar2 = GetClassInfoExA(DAT_0044175c,"AtlAxWin",&local_68);
  if (BVar2 == 0) {
    local_68.cbSize = 0x30;
    local_68.style = 0;
    local_68.lpfnWndProc = FUN_00404830;
    local_68.cbClsExtra = 0;
    local_68.cbWndExtra = 0;
    local_68.hInstance = DAT_0044175c;
    local_68.hIcon = (HICON)0x0;
    local_68.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_68.hbrBackground = (HBRUSH)0x6;
    local_68.lpszMenuName = (LPCSTR)0x0;
    local_68.lpszClassName = "AtlAxWin";
    local_68.hIconSm = (HICON)0x0;
    RegisterClassExA(&local_68);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
  local_24 = FindResourceA(param_1,(LPCSTR)param_2,(LPCSTR)0x5);
  pHVar3 = FindResourceA(param_1,(LPCSTR)param_2,(LPCSTR)0xf0);
  local_28 = (HGLOBAL)0x0;
  local_8 = (ushort *)0x0;
  param_2 = (HWND)0x0;
  local_34 = pHVar3;
  if (pHVar3 != (HRSRC)0x0) {
    local_28 = LoadResource(param_1,pHVar3);
    local_8 = LockResource(local_28);
  }
  if (local_24 != (HRSRC)0x0) {
    local_30 = LoadResource(param_1,local_24);
    pDVar4 = LockResource(local_30);
    local_1c = pDVar4;
    iVar5 = lstrlenA("AtlAxWin");
    FUN_004328f0();
    local_c = FUN_00401720((LPWSTR)&stack0xffffff8c,"AtlAxWin",iVar5 + 1,0);
    pHVar3 = (HRSRC)FUN_00405700(&pDVar4->style);
    sVar1 = *(short *)((int)&pDVar4->style + 2);
    pHVar17 = (HRSRC)((int)pHVar3 - (int)pDVar4);
    uVar9 = (uint)(sVar1 == -1);
    pWVar7 = (WORD *)&pDVar4->cy;
    if (sVar1 != -1) {
      pWVar7 = &pDVar4->cdit;
    }
    local_18 = (LPCDLGTEMPLATEA)0x0;
    param_2 = (HWND)(uint)*pWVar7;
    pDVar4 = local_1c;
    local_2c = param_2;
    local_24 = pHVar3;
    local_20 = uVar9;
    local_10 = pHVar17;
    if (param_2 != (HWND)0x0) {
      do {
        local_14 = (HRSRC)FUN_004057b0((int)pHVar3,uVar9);
        pHVar8 = pHVar3 + 6;
        if (uVar9 == 0) {
          pHVar8 = (HRSRC)((int)&pHVar3[4].unused + 2);
        }
        if ((short)pHVar8->unused == 0x7b) {
          local_18 = (LPCDLGTEMPLATEA)0x1;
          iVar5 = lstrlenW(local_c);
          if (uVar9 == 0) {
            uVar10 = (uint)(ushort)pHVar3[4].unused;
          }
          else {
            uVar10 = pHVar3[5].unused;
          }
          iVar6 = FUN_00405830(uVar10,local_8,&local_38);
          pHVar17 = (HRSRC)((int)&pHVar17[0x19].unused +
                            iVar6 + iVar5 * 2 + (-(uint)(uVar9 != 0) & 6) + 3 & 0xfffffffc);
        }
        else {
          pHVar17 = (HRSRC)((int)pHVar17 + ((int)local_14 - (int)pHVar3));
        }
        param_2 = (HWND)((int)&param_2[-1].unused + 3);
        pHVar3 = local_14;
      } while (param_2 != (HWND)0x0);
      pDVar4 = local_1c;
      if (local_18 != (LPCDLGTEMPLATEA)0x0) {
        local_18 = GlobalAlloc(0,(SIZE_T)pHVar17);
        pHVar3 = local_24;
        pDVar4 = local_1c;
        pDVar18 = local_18;
        for (uVar9 = (uint)local_10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          pDVar18->style = pDVar4->style;
          pDVar4 = (LPCDLGTEMPLATEA)&pDVar4->dwExtendedStyle;
          pDVar18 = (LPCDLGTEMPLATEA)&pDVar18->dwExtendedStyle;
        }
        for (uVar9 = (uint)local_10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(char *)&pDVar18->style = (char)pDVar4->style;
          pDVar4 = (LPCDLGTEMPLATEA)((int)&pDVar4->style + 1);
          pDVar18 = (LPCDLGTEMPLATEA)((int)&pDVar18->style + 1);
        }
        if (*(short *)((int)&local_18->style + 2) == -1) {
          pWVar7 = (WORD *)&local_18->cy;
        }
        else {
          pWVar7 = &local_18->cdit;
        }
        *pWVar7 = 0;
        local_24 = (HRSRC)local_2c;
        piVar12 = (int *)((int)&local_10->unused + (int)&local_18->style);
        do {
          uVar9 = local_20;
          local_14 = (HRSRC)FUN_004057b0((int)pHVar3,local_20);
          pWVar15 = local_c;
          if (uVar9 == 0) {
            local_10 = (HRSRC)((int)&pHVar3[4].unused + 2);
          }
          else {
            local_10 = pHVar3 + 6;
          }
          if ((short)local_10->unused == 0x7b) {
            uVar9 = (-(uint)(uVar9 != 0) & 6) + 0x12;
            pHVar17 = pHVar3;
            piVar13 = piVar12;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *piVar13 = pHVar17->unused;
              pHVar17 = pHVar17 + 1;
              piVar13 = piVar13 + 1;
            }
            for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(char *)piVar13 = (char)pHVar17->unused;
              pHVar17 = (HRSRC)((int)&pHVar17->unused + 1);
              piVar13 = (int *)((int)piVar13 + 1);
            }
            iVar5 = lstrlenW(local_c);
            uVar10 = iVar5 * 2 + 2;
            piVar13 = (int *)((int)((int)piVar12 + uVar9) + uVar10);
            puVar19 = (undefined4 *)((int)piVar12 + uVar9);
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar19 = *(undefined4 *)pWVar15;
              pWVar15 = pWVar15 + 2;
              puVar19 = puVar19 + 1;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(char *)puVar19 = (char)*pWVar15;
              pWVar15 = (LPCWSTR)((int)pWVar15 + 1);
              puVar19 = (undefined4 *)((int)puVar19 + 1);
            }
            pHVar17 = local_10;
            piVar12 = piVar13;
            for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar12 = pHVar17->unused;
              pHVar17 = pHVar17 + 1;
              piVar12 = piVar12 + 1;
            }
            *(short *)piVar12 = (short)pHVar17->unused;
            if (local_20 == 0) {
              uVar9 = (uint)(ushort)pHVar3[4].unused;
            }
            else {
              uVar9 = pHVar3[5].unused;
            }
            uVar9 = FUN_00405830(uVar9,local_8,(int *)&local_2c);
            *(short *)((int)piVar13 + 0x4e) = (short)uVar9;
            pHVar16 = local_2c;
            piVar12 = piVar13 + 0x14;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *piVar12 = pHVar16->unused;
              pHVar16 = pHVar16 + 1;
              piVar12 = piVar12 + 1;
            }
            puVar14 = (undefined1 *)((int)(piVar13 + 0x14) + uVar9);
            piVar13 = (int *)(puVar14 + (~(uint)puVar14 + 1 & 3));
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(char *)piVar12 = (char)pHVar16->unused;
              pHVar16 = (HWND)((int)&pHVar16->unused + 1);
              piVar12 = (int *)((int)piVar12 + 1);
            }
            if (*(short *)((int)&local_18->style + 2) == -1) {
              pWVar7 = (WORD *)&local_18->cy;
            }
            else {
              pWVar7 = &local_18->cdit;
            }
          }
          else {
            uVar9 = (int)local_14 - (int)pHVar3;
            piVar13 = (int *)((int)piVar12 + uVar9);
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *piVar12 = pHVar3->unused;
              pHVar3 = pHVar3 + 1;
              piVar12 = piVar12 + 1;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(char *)piVar12 = (char)pHVar3->unused;
              pHVar3 = (HRSRC)((int)&pHVar3->unused + 1);
              piVar12 = (int *)((int)piVar12 + 1);
            }
            pWVar7 = (WORD *)FUN_004056e0((int)local_18);
          }
          *pWVar7 = *pWVar7 + 1;
          local_24 = (HRSRC)((int)&((HWND)(local_24 + -1))->unused + 3);
          piVar12 = piVar13;
          pHVar3 = local_14;
        } while (local_24 != (HRSRC)0x0);
        pDVar4 = local_18;
        local_24 = (HRSRC)0x0;
      }
    }
    param_2 = CreateDialogIndirectParamA(param_1,pDVar4,param_3,param_4,param_5);
    if (pDVar4 != local_1c) {
      hMem = GlobalHandle(pDVar4);
      GlobalFree(hMem);
    }
    FreeResource(local_30);
    pHVar3 = local_34;
  }
  if ((local_8 != (ushort *)0x0) && (pHVar3 != (HRSRC)0x0)) {
    FreeResource(local_28);
  }
  return param_2;
}


