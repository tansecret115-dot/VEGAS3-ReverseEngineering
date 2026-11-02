/* Module: stl2plg.dll
   Function: FUN_00408d10
   Address: 00408d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00408d10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  LPCWSTR lpWideCharStr;
  int *piVar2;
  BITMAPINFO *lpbmi;
  int DestHeight;
  int DestWidth;
  bool bVar3;
  HANDLE hFile;
  BOOL BVar4;
  undefined3 extraout_var;
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  HGDIOBJ h_00;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_124;
  undefined4 *puStack_110;
  HDC pHStack_10c;
  DWORD DStack_108;
  CHAR aCStack_104 [259];
  undefined1 uStack_1;
  
  local_124 = FUN_004083e0((int)this);
  if (-1 < local_124) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      piVar2 = *(int **)((int)this + 0x348);
      if (piVar2 == (int *)0x0) {
        return -0x7fffbffb;
      }
      puVar1 = (undefined4 *)((int)this + 0x1c);
      local_124 = (**(code **)(*piVar2 + 0x14))
                            (piVar2,0,0,0,*(undefined4 *)(*(int *)((int)this + 0x14) + 0x14),0,0,
                             puVar1);
      if (local_124 == 1) {
        lpWideCharStr = (LPCWSTR)((int)this + 0x34);
        local_124 = 0;
        if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
          WideCharToMultiByte(0,0,lpWideCharStr,-1,aCStack_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x104) {
          aCStack_104[0] = '\0';
        }
        uStack_1 = 0;
        hFile = CreateFileA(aCStack_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
        if (hFile == (HANDLE)0xffffffff) {
          local_124 = -0x7fffbffb;
          (**(code **)(**(int **)((int)this + 0x348) + 0x18))
                    (*(int **)((int)this + 0x348),0xffffffff,0xffffffff,0,0,
                     *(undefined4 *)(*(int *)((int)this + 0x14) + 0x14),*puVar1);
          *puVar1 = 0;
        }
        else {
          SetFilePointer(hFile,*(LONG *)((int)this + 0x20),(PLONG)0x0,0);
          BVar4 = ReadFile(hFile,(LPVOID)*puVar1,*(DWORD *)(*(int *)((int)this + 0x14) + 0x14),
                           &DStack_108,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            local_124 = -0x7ffb1ff8;
            (**(code **)(**(int **)((int)this + 0x348) + 0x18))
                      (*(int **)((int)this + 0x348),0xffffffff,0xffffffff,0,0,
                       *(undefined4 *)(*(int *)((int)this + 0x14) + 0x14),*puVar1);
            *puVar1 = 0;
            CloseHandle(hFile);
          }
          else {
            bVar3 = FUN_0040f860(*(int *)((int)this + 0x14));
            if (CONCAT31(extraout_var,bVar3) != 0) {
              hdc = GetDC((HWND)0x0);
              local_124 = -0x7fffbffb;
              hdc_00 = CreateCompatibleDC(hdc);
              pHStack_10c = hdc_00;
              if (hdc_00 != (HDC)0x0) {
                h = CreateDIBSection(hdc_00,*(BITMAPINFO **)((int)this + 0x18),0,&puStack_110,
                                     (HANDLE)0x0,0);
                if (h != (HBITMAP)0x0) {
                  h_00 = SelectObject(hdc_00,h);
                  lpbmi = *(BITMAPINFO **)((int)this + 0x14);
                  DestHeight = (lpbmi->bmiHeader).biHeight;
                  DestWidth = (lpbmi->bmiHeader).biWidth;
                  StretchDIBits(hdc_00,0,0,DestWidth,DestHeight,0,0,DestWidth,DestHeight,
                                (void *)*puVar1,lpbmi,0,0xcc0020);
                  (**(code **)(**(int **)((int)this + 0x348) + 0x18))
                            (*(int **)((int)this + 0x348),0xffffffff,0xffffffff,0,0,
                             *(undefined4 *)(*(int *)((int)this + 0x14) + 0x14),*puVar1);
                  *puVar1 = 0;
                  local_124 = (**(code **)(**(int **)((int)this + 0x348) + 0x14))
                                        (*(int **)((int)this + 0x348),0,0,0,
                                         *(undefined4 *)(*(int *)((int)this + 0x18) + 0x14),0,0,
                                         puVar1);
                  if (-1 < local_124) {
                    uVar6 = *(uint *)(*(int *)((int)this + 0x18) + 0x14);
                    puVar7 = (undefined4 *)*puVar1;
                    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *puVar7 = *puStack_110;
                      puStack_110 = puStack_110 + 1;
                      puVar7 = puVar7 + 1;
                    }
                    for (uVar6 = uVar6 & 3; hdc_00 = pHStack_10c, uVar6 != 0; uVar6 = uVar6 - 1) {
                      *(undefined1 *)puVar7 = *(undefined1 *)puStack_110;
                      puStack_110 = (undefined4 *)((int)puStack_110 + 1);
                      puVar7 = (undefined4 *)((int)puVar7 + 1);
                    }
                  }
                  SelectObject(hdc_00,h_00);
                  DeleteObject(h);
                }
                DeleteDC(hdc_00);
              }
              ReleaseDC((HWND)0x0,hdc);
              if (local_124 < 0) {
                (**(code **)(**(int **)((int)this + 0x348) + 0x18))
                          (*(int **)((int)this + 0x348),0xffffffff,0xffffffff,0,0,
                           *(undefined4 *)(*(int *)((int)this + 0x14) + 0x14),*puVar1);
                *puVar1 = 0;
              }
            }
            *param_2 = *puVar1;
            CloseHandle(hFile);
          }
        }
      }
      else if (local_124 == 0) {
        *param_2 = *puVar1;
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)((int)this + 0x18);
    }
  }
  return local_124;
}


