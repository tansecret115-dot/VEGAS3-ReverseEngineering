/* Module: sftrans1.dll
   Function: FUN_00548e00
   Address: 00548e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00548e00(int param_1,HDC param_2,undefined4 param_3)

{
  COLORREF color;
  undefined4 uVar1;
  HDC hdc;
  HPEN pHVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int *piVar9;
  BITMAPINFO *pBVar10;
  int local_8c;
  undefined2 *local_88;
  undefined2 *local_84;
  undefined2 *local_80;
  HDC local_7c;
  undefined2 *local_78;
  void *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  HBITMAP local_58;
  int local_54;
  HGDIOBJ local_50;
  HGDIOBJ local_4c;
  undefined4 local_48;
  int local_44;
  HGDIOBJ local_40;
  int *local_3c;
  undefined4 local_38;
  HPEN local_34;
  HPEN local_30;
  BITMAPINFO local_2c;
  
  local_44 = param_1;
  hdc = CreateCompatibleDC(param_2);
  pBVar10 = &local_2c;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pBVar10->bmiHeader).biSize = 0;
    pBVar10 = (BITMAPINFO *)&(pBVar10->bmiHeader).biWidth;
  }
  local_2c.bmiHeader.biWidth = *(int *)(param_1 + 0x140) - ((RECT *)(param_1 + 0x138))->left;
  local_2c.bmiHeader.biHeight = *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x13c);
  local_2c.bmiHeader.biSize = 0x28;
  local_2c.bmiHeader.biPlanes = 1;
  local_2c.bmiHeader.biBitCount = 0x20;
  local_2c.bmiHeader.biCompression = 0;
  local_58 = CreateDIBSection(param_2,&local_2c,0,&local_70,(HANDLE)0x0,0);
  if ((local_58 == (HBITMAP)0x0) || (hdc == (HDC)0x0)) {
    local_54 = 0;
  }
  else {
    local_54 = 1;
  }
  local_7c = param_2;
  local_50 = (HGDIOBJ)0x0;
  if (local_54 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    local_50 = SelectObject(hdc,local_58);
    local_7c = hdc;
  }
  pHVar2 = CreatePen(0,1,*(COLORREF *)(param_1 + 0x184));
  local_4c = (HGDIOBJ)0x0;
  local_34 = pHVar2;
  if (pHVar2 != (HPEN)0x0) {
    local_4c = SelectObject(local_7c,pHVar2);
  }
  SetBkColor(local_7c,*(COLORREF *)(param_1 + 0x174));
  ExtTextOutA(local_7c,0,0,2,(RECT *)(param_1 + 0x138),(LPCSTR)0x0,0,(INT *)0x0);
  FUN_005493d0(local_7c);
  if (0 < *(int *)(param_1 + 0x148)) {
    local_38 = *(undefined4 *)(param_1 + 0x184);
    local_68 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      do {
        iVar6 = local_68;
        piVar9 = *(int **)(*(int *)(param_1 + 0x150) + local_68 * 8);
        color = *(COLORREF *)(*(int *)(param_1 + 0x150) + local_68 * 8 + 4);
        local_6c = *piVar9;
        *(COLORREF *)(param_1 + 0x184) = color;
        local_3c = piVar9;
        pHVar2 = CreatePen(0,1,color);
        local_40 = (HGDIOBJ)0x0;
        local_30 = pHVar2;
        if (pHVar2 != (HPEN)0x0) {
          local_40 = SelectObject(local_7c,pHVar2);
        }
        if ((0 < local_6c) &&
           (local_48 = *(undefined4 *)piVar9[2], iVar6 == *(int *)(param_1 + 0x14c))) {
          FUN_0054a220(local_7c,local_70,local_48);
        }
        local_60 = 1;
        if (1 < local_6c) {
          do {
            local_5c = *(undefined4 *)(piVar9[2] + local_60 * 4);
            if (iVar6 == *(int *)(param_1 + 0x14c)) {
              local_84 = (undefined2 *)(param_1 + 0x1e6);
              *(undefined4 *)(param_1 + 0x13e8) = 0x41;
              *(undefined4 *)(param_1 + 0x13ec) = 100;
              local_80 = (undefined2 *)0x1a;
              do {
                local_8c = 0x1a;
                local_88 = local_84;
                do {
                  local_78 = local_88;
                  iVar6 = 0;
                  do {
                    local_64 = iVar6 + 0x10;
                    iVar8 = 0;
                    iVar4 = (int)local_80 + -0x14;
                    if ((iVar4 < local_64) && (iVar6 < (int)local_80)) {
                      puVar7 = (undefined2 *)local_64;
                      if ((int)local_80 <= local_64) {
                        puVar7 = local_80;
                      }
                      if (iVar6 <= iVar4) {
                        iVar6 = iVar4;
                      }
                      iVar8 = (int)puVar7 - iVar6;
                    }
                    iVar6 = 0;
                    puVar7 = local_78;
                    do {
                      iVar4 = iVar6 + 0x10;
                      iVar3 = 0;
                      if ((local_8c + -0x14 < iVar4) && (iVar6 < local_8c)) {
                        iVar3 = iVar4;
                        if (local_8c <= iVar4) {
                          iVar3 = local_8c;
                        }
                        if (iVar6 <= local_8c + -0x14) {
                          iVar6 = local_8c + -0x14;
                        }
                        iVar3 = iVar3 - iVar6;
                      }
                      *puVar7 = (short)((((uint)(iVar3 * iVar8 * 0xffff) >> 8) *
                                        *(int *)(param_1 + 0x13ec)) / 0x640);
                      iVar6 = iVar4;
                      puVar7 = puVar7 + 0x300;
                    } while (iVar4 < 0x30);
                    local_78 = local_78 + 0x100;
                    iVar6 = local_64;
                  } while (local_64 < 0x30);
                  local_88 = local_88 + 0x10;
                  iVar6 = local_8c + -0x19;
                  local_8c = local_8c + 1;
                } while (iVar6 < 0x10);
                local_84 = local_84 + 1;
                iVar6 = (int)local_80 + -0x19;
                local_80 = (undefined2 *)((int)local_80 + 1);
              } while (iVar6 < 0x10);
              FUN_0054a220(local_7c,local_70,local_5c);
            }
            else {
              *(undefined4 *)(param_1 + 0x13e8) = 0x3c;
              *(undefined4 *)(param_1 + 0x13ec) = 0x2d;
              local_88 = (undefined2 *)(param_1 + 0x1e6);
              local_78 = (undefined2 *)0x19;
              do {
                local_8c = 0x19;
                local_84 = local_88;
                do {
                  iVar6 = local_8c + -0x12;
                  local_80 = local_84;
                  iVar4 = 0;
                  do {
                    local_64 = iVar4 + 0x10;
                    iVar3 = 0;
                    iVar8 = (int)local_78 + -0x12;
                    if ((iVar8 < local_64) && (iVar4 < (int)local_78)) {
                      puVar7 = (undefined2 *)local_64;
                      if ((int)local_78 <= local_64) {
                        puVar7 = local_78;
                      }
                      if (iVar4 <= iVar8) {
                        iVar4 = iVar8;
                      }
                      iVar3 = (int)puVar7 - iVar4;
                    }
                    iVar4 = 0;
                    puVar7 = local_80;
                    do {
                      iVar8 = iVar4 + 0x10;
                      iVar5 = 0;
                      if ((iVar6 < iVar8) && (iVar4 < local_8c)) {
                        iVar5 = iVar8;
                        if (local_8c <= iVar8) {
                          iVar5 = local_8c;
                        }
                        if (iVar4 <= iVar6) {
                          iVar4 = iVar6;
                        }
                        iVar5 = iVar5 - iVar4;
                      }
                      *puVar7 = (short)((((uint)(iVar5 * iVar3 * 0xffff) >> 8) *
                                        *(int *)(local_44 + 0x13ec)) / 0x640);
                      iVar4 = iVar8;
                      puVar7 = puVar7 + 0x300;
                    } while (iVar8 < 0x30);
                    local_80 = local_80 + 0x100;
                    iVar4 = local_64;
                  } while (local_64 < 0x30);
                  local_84 = local_84 + 0x10;
                  iVar6 = local_8c + -0x18;
                  local_8c = local_8c + 1;
                } while (iVar6 < 0x10);
                local_88 = local_88 + 1;
                iVar6 = (int)local_78 + -0x18;
                param_1 = local_44;
                local_78 = (undefined2 *)((int)local_78 + 1);
              } while (iVar6 < 0x10);
            }
            uVar1 = local_5c;
            FUN_00549bf0(local_7c,local_70,local_48,local_5c);
            local_60 = local_60 + 1;
            local_48 = uVar1;
            iVar6 = local_68;
            piVar9 = local_3c;
            pHVar2 = local_30;
          } while (local_60 < local_6c);
        }
        if (pHVar2 != (HPEN)0x0) {
          SelectObject(local_7c,local_40);
          DeleteObject(pHVar2);
        }
        local_68 = iVar6 + 1;
      } while (local_68 < *(int *)(param_1 + 0x148));
    }
    *(undefined4 *)(param_1 + 0x184) = local_38;
    pHVar2 = local_34;
  }
  if ((-1 < *(int *)(param_1 + 0x14c)) &&
     (FUN_005497f0(local_7c,param_3), *(int *)(param_1 + 0x160) != 0)) {
    FUN_0054aee0(local_7c);
  }
  if (pHVar2 != (HPEN)0x0) {
    SelectObject(local_7c,local_4c);
    DeleteObject(pHVar2);
  }
  if (local_54 != 0) {
    BitBlt(param_2,*(int *)(param_1 + 0x138),*(int *)(param_1 + 0x13c),
           *(int *)(param_1 + 0x140) - *(int *)(param_1 + 0x138),
           *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x13c),hdc,0,0,0xcc0020);
    SelectObject(hdc,local_50);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  if (local_58 != (HBITMAP)0x0) {
    DeleteObject(local_58);
  }
  return;
}


