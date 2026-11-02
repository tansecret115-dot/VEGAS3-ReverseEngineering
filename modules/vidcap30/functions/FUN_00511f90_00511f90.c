/* Module: vidcap30.exe
   Function: FUN_00511f90
   Address: 00511f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00511f90(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LONG LVar3;
  HWND pHVar4;
  HGLOBAL pvVar5;
  int iVar6;
  uint uVar7;
  HDC hDC;
  uint uVar8;
  int local_10;
  int local_c;
  int local_8 [2];
  
  LVar3 = GetWindowLongA(param_1,0);
  pHVar4 = GetCapture();
  if (pHVar4 == param_1) {
    if (*(LPCVOID *)(LVar3 + 0x28) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)(LVar3 + 0x28));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)(LVar3 + 0x28));
      GlobalFree(pvVar5);
      *(undefined4 *)(LVar3 + 0x28) = 0;
      *(undefined4 *)(LVar3 + 0x2c) = 0;
    }
    if (*(int *)(LVar3 + 0x60) != 0) {
      MessageBeep(0);
      return;
    }
    if (*(int *)(LVar3 + 0x1c) == 0) {
      if (*(int *)(LVar3 + 0x4c) == 0) {
        if (*(HWND *)(LVar3 + 0x6c) != (HWND)0x0) {
          if (*(int *)(LVar3 + 0x34) < 1) {
            uVar7 = (uint)*(ushort *)(LVar3 + 0x24);
            uVar8 = uVar7;
          }
          else {
            uVar7 = (uint)*(ushort *)(LVar3 + 0x34);
            uVar8 = (uint)*(ushort *)(LVar3 + 0x38);
          }
          PostMessageA(*(HWND *)(LVar3 + 0x6c),0x612,0,uVar8 << 0x10 | uVar7);
        }
      }
      else {
        iVar6 = *(int *)(LVar3 + 0x3c);
        if (param_2 < iVar6) {
          *(int *)(LVar3 + 0x3c) = param_2;
          param_2 = iVar6;
        }
        iVar6 = *(int *)(LVar3 + 0x40);
        if (param_3 < iVar6) {
          *(int *)(LVar3 + 0x40) = param_3;
          param_3 = iVar6;
        }
        uVar8 = 0;
        *(undefined4 *)(LVar3 + 0x34) = 0xffffffff;
        *(undefined4 *)(LVar3 + 0x38) = 0xffffffff;
        if (*(int *)(LVar3 + 0xa0) != 0) {
          do {
            FUN_00510de0(LVar3,*(int *)(LVar3 + 0xb4) + uVar8 * 8,&local_10);
            if ((((*(int *)(LVar3 + 0x34) == -1) && (*(int *)(LVar3 + 0x3c) <= local_10)) &&
                (*(int *)(LVar3 + 0x40) <= local_c)) &&
               ((local_c <= param_3 && (local_10 <= param_2)))) {
              *(uint *)(LVar3 + 0x34) = uVar8;
            }
            if (*(int *)(LVar3 + 0x34) != -1) {
              if (param_2 < local_10) break;
              if ((*(int *)(LVar3 + 0x40) <= local_c) && (local_c <= param_3)) {
                *(uint *)(LVar3 + 0x38) = uVar8;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(LVar3 + 0xa0));
        }
        if ((*(int *)(LVar3 + 0x34) != -1) && (*(int *)(LVar3 + 0x38) == -1)) {
          *(int *)(LVar3 + 0x38) = *(int *)(LVar3 + 0xa0) + -1;
        }
        InvalidateRect(param_1,(RECT *)0x0,1);
        *(undefined4 *)(LVar3 + 0x4c) = 0;
      }
      ReleaseCapture();
      if (*(int *)(LVar3 + 0x58) != 0) {
        hDC = GetDC(param_1);
        if (hDC != (HDC)0x0) {
          uVar1 = *(undefined4 *)(LVar3 + 0x38);
          uVar2 = *(undefined4 *)(LVar3 + 0x34);
          FUN_00511050(LVar3,hDC,uVar2,uVar1);
          *(undefined4 *)(LVar3 + 0x38) = 0xffffffff;
          *(undefined4 *)(LVar3 + 0x34) = 0xffffffff;
          FUN_00511050(LVar3,hDC,uVar2,uVar1);
          ReleaseDC(param_1,hDC);
          *(undefined4 *)(LVar3 + 0x58) = 0;
          *(undefined4 *)(LVar3 + 0x24) = 0xffffffff;
          *(undefined4 *)(LVar3 + 0x50) = 0;
          return;
        }
        *(undefined4 *)(LVar3 + 0x38) = 0xffffffff;
        *(undefined4 *)(LVar3 + 0x34) = 0xffffffff;
        InvalidateRect(param_1,(RECT *)0x0,0);
        *(undefined4 *)(LVar3 + 0x58) = 0;
      }
      *(undefined4 *)(LVar3 + 0x24) = 0xffffffff;
      *(undefined4 *)(LVar3 + 0x50) = 0;
    }
    else {
      local_10 = param_2;
      local_c = param_3;
      FUN_00510ea0(LVar3,&local_10,local_8);
      *(int *)(LVar3 + 0x20) = local_8[0];
      iVar6 = *(int *)(LVar3 + 0x90);
      if ((*(int *)(LVar3 + 0x90) <= local_8[0]) &&
         (iVar6 = *(int *)(LVar3 + 0x94), local_8[0] <= *(int *)(LVar3 + 0x94))) {
        iVar6 = local_8[0];
      }
      *(int *)(LVar3 + 0x20) = iVar6;
      FUN_00512210(LVar3);
      *(undefined4 *)(LVar3 + 0x1c) = 0;
      InvalidateRect(param_1,(RECT *)0x0,1);
      ReleaseCapture();
      if (*(HWND *)(LVar3 + 0x74) != (HWND)0x0) {
        PostMessageA(*(HWND *)(LVar3 + 0x74),0x623,0,*(LPARAM *)(LVar3 + 0x20));
        return;
      }
    }
  }
  return;
}


