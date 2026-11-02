/* Module: sftrkfx1.dll
   Function: FUN_5cbc20f0
   Address: 5cbc20f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc20f0(HWND param_1)

{
  int *piVar1;
  LONG LVar2;
  HDC hdc;
  HFONT h;
  int iVar3;
  int iVar4;
  tagSIZE *lpsz;
  tagRECT local_128;
  int local_118;
  HDC local_114;
  HGDIOBJ local_110;
  tagSIZE local_10c;
  CHAR local_104 [260];
  
  LVar2 = GetWindowLongA(param_1,0);
  if (LVar2 != 0) {
    *(undefined4 *)(LVar2 + 4) = 0xffffffff;
    GetClientRect(param_1,&local_128);
    iVar3 = *(int *)(LVar2 + 0xc);
    if ((iVar3 != 0) && (*(int *)(LVar2 + 0x14) != 0)) {
      iVar4 = *(int *)(iVar3 + 4);
      local_128.bottom = *(LONG *)(iVar3 + 8);
      local_128.top = 0;
      *(LONG *)(LVar2 + 0x18) = local_128.left;
      *(undefined4 *)(LVar2 + 0x1c) = 0;
      *(LONG *)(LVar2 + 0x20) = local_128.right;
      *(LONG *)(LVar2 + 0x24) = local_128.bottom;
      local_128.left = local_128.left + iVar4;
      *(LONG *)(LVar2 + 0x20) = local_128.left;
      *(LONG *)(LVar2 + 0x40) = local_128.left;
      *(undefined4 *)(LVar2 + 0x44) = 0;
      *(LONG *)(LVar2 + 0x48) = local_128.right;
      *(LONG *)(LVar2 + 0x4c) = local_128.bottom;
      InflateRect(&local_128,-1,-1);
      piVar1 = *(int **)(LVar2 + 0x3c);
      if ((piVar1 != (int *)0x0) && (local_118 = *piVar1, 0 < local_118)) {
        hdc = GetDC(param_1);
        local_114 = hdc;
        h = FUN_5cbdc9c0(0x6e);
        *(int *)(LVar2 + 0x50) = local_128.left;
        *(LONG *)(LVar2 + 0x54) = local_128.top;
        *(LONG *)(LVar2 + 0x58) = local_128.right;
        *(LONG *)(LVar2 + 0x5c) = local_128.bottom;
        local_128.right = local_128.right + -2;
        *(int *)(LVar2 + 0x50) = local_128.right;
        local_110 = SelectObject(hdc,h);
        while (local_118 = local_118 + -1, -1 < local_118) {
          iVar4 = piVar1[1] * local_118 + piVar1[2];
          lpsz = &local_10c;
          iVar3 = lstrlenA((LPCSTR)(iVar4 + 0x18));
          GetTextExtentPointA(local_114,(LPCSTR)(iVar4 + 0x18),iVar3,lpsz);
          iVar3 = local_128.right - local_128.left;
          if (local_10c.cx + 8 <= local_128.right - local_128.left) {
            iVar3 = local_10c.cx + 8;
          }
          *(int *)(iVar4 + 8) = local_128.left;
          *(LONG *)(iVar4 + 0xc) = local_128.top;
          *(LONG *)(iVar4 + 0x10) = local_128.right;
          *(LONG *)(iVar4 + 0x14) = local_128.bottom;
          *(int *)(iVar4 + 8) = local_128.right - iVar3;
          local_128.right = local_128.right - iVar3;
          hdc = local_114;
        }
        SelectObject(hdc,local_110);
        ReleaseDC(param_1,hdc);
      }
      iVar3 = GetWindowTextA(param_1,local_104,0x104);
      if ((0 < iVar3) && (local_128.left < local_128.right)) {
        *(LONG *)(LVar2 + 0x28) = local_128.left;
        *(LONG *)(LVar2 + 0x2c) = local_128.top;
        *(LONG *)(LVar2 + 0x30) = local_128.right;
        *(LONG *)(LVar2 + 0x34) = local_128.bottom;
        return;
      }
      *(undefined4 *)(LVar2 + 0x40) = 0;
      *(undefined4 *)(LVar2 + 0x44) = 0;
      *(undefined4 *)(LVar2 + 0x48) = 0;
      *(undefined4 *)(LVar2 + 0x4c) = 0;
      *(undefined4 *)(LVar2 + 0x28) = 0;
      *(undefined4 *)(LVar2 + 0x2c) = 0;
      *(undefined4 *)(LVar2 + 0x30) = 0;
      *(undefined4 *)(LVar2 + 0x34) = 0;
      return;
    }
    *(LONG *)(LVar2 + 0x18) = local_128.left;
    *(LONG *)(LVar2 + 0x1c) = local_128.top;
    *(LONG *)(LVar2 + 0x20) = local_128.right;
    *(LONG *)(LVar2 + 0x24) = local_128.bottom;
  }
  return;
}


