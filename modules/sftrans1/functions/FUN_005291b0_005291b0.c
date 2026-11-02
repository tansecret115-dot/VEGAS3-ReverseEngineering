/* Module: sftrans1.dll
   Function: FUN_005291b0
   Address: 005291b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005291b0(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  COLORREF CVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  int y;
  undefined4 *puVar7;
  int iVar8;
  uint local_18;
  undefined4 local_c;
  
  iVar8 = 0;
  if (((*(int *)(param_1 + 0x54) == 0) || (*(int *)(param_1 + 0x60) == 0)) ||
     (*(int *)(param_1 + 100) == 0)) {
    return 0;
  }
  local_c = 0;
  pvVar1 = GlobalAlloc(0x40,*(int *)(param_1 + 100) * *(int *)(param_1 + 0x60) * 8);
  puVar2 = GlobalLock(pvVar1);
  local_18 = 0;
  hdc = GetDC(*(HWND *)(param_1 + 0x10));
  pcVar6 = GlobalHandle_exref;
  if ((hdc != (HDC)0x0) &&
     (hdc_00 = CreateCompatibleDC(hdc), pcVar6 = GlobalHandle_exref, hdc_00 != (HDC)0x0)) {
    h = SelectObject(hdc_00,*(HGDIOBJ *)(param_1 + 0x54));
    if (h == (HGDIOBJ)0xffffffff) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      do {
        y = 0;
        if (0 < *(int *)(param_1 + 100)) {
          piVar5 = puVar2 + local_18 * 2;
          do {
            CVar3 = GetPixel(hdc_00,iVar8,y);
            if (CVar3 == 0xffffffff) {
              return 0;
            }
            if (CVar3 == *(COLORREF *)(param_1 + 0x68)) {
              *piVar5 = iVar8;
              local_18 = local_18 + 1;
              piVar5[1] = y;
              piVar5 = piVar5 + 2;
            }
            y = y + 1;
          } while (y < *(int *)(param_1 + 100));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x60));
    }
    SelectObject(hdc_00,h);
    ReleaseDC(*(HWND *)(param_1 + 0x10),hdc);
    DeleteDC(hdc_00);
    pcVar6 = GlobalHandle_exref;
    pMem = *(LPCVOID *)(param_1 + 0x5c);
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (local_18 != 0) {
      pvVar1 = GlobalAlloc(0x40,local_18 * 8);
      puVar4 = GlobalLock(pvVar1);
      *(undefined4 **)(param_1 + 0x5c) = puVar4;
      if (puVar4 == (undefined4 *)0x0) goto LAB_00529342;
      puVar7 = puVar2;
      for (iVar8 = (local_18 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    *(uint *)(param_1 + 0x58) = local_18;
    local_c = 1;
  }
LAB_00529342:
  if (puVar2 != (undefined4 *)0x0) {
    pvVar1 = (HGLOBAL)(*pcVar6)(puVar2);
    GlobalUnlock(pvVar1);
    pvVar1 = (HGLOBAL)(*pcVar6)(puVar2);
    GlobalFree(pvVar1);
  }
  return local_c;
}


