/* Module: sfppack1.dll
   Function: FUN_5cde47a0
   Address: 5cde47a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde47a0(int param_1,int param_2)

{
  HDC hdc;
  HBITMAP pHVar1;
  HBRUSH h;
  HGDIOBJ pvVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 unaff_ESI;
  tagRECT local_10;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if (((uVar3 & 0x800) != 0) && ((uVar3 & 0x10) == 0)) {
    if ((uVar3 & 2) == 0) {
      return;
    }
    local_10.left = *(int *)(param_1 + 0xb8);
    local_10.top = *(int *)(param_1 + 0xbc);
    local_10.right = *(int *)(param_1 + 0xc0);
    local_10.bottom = *(int *)(param_1 + 0xc4);
    InflateRect(&local_10,-*(int *)(param_1 + 0x84),-*(int *)(param_1 + 0x88));
    if (param_2 != 0) {
      CreateCaret(*(HWND *)(param_1 + 0x30),(HBITMAP)0x1,local_10.right - local_10.left,
                  local_10.bottom - local_10.top);
    }
    SetCaretPos(local_10.left,local_10.top);
    return;
  }
  if (*(int *)(param_1 + 0x10c) == 0) {
    pHVar1 = CreateBitmap(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c),
                          *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40),1,1,(void *)0x0);
    *(HBITMAP *)(param_1 + 0x10c) = pHVar1;
  }
  else {
    if ((uVar3 & 0x20000) == 0) goto LAB_5cde48d1;
    pHVar1 = CreateBitmap(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c),
                          *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40),1,1,(void *)0x0);
    if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
      CreateCaret(*(HWND *)(param_1 + 0x30),pHVar1,0,0);
    }
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10c));
    *(HBITMAP *)(param_1 + 0x10c) = pHVar1;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffdffff;
LAB_5cde48d1:
  hdc = DAT_5ce23b6c;
  pcVar5 = SelectObject_exref;
  SelectObject(DAT_5ce23b6c,*(HGDIOBJ *)(param_1 + 0x10c));
  h = FUN_5cdf3ca0(0x2711);
  pvVar2 = SelectObject(hdc,h);
  PatBlt(hdc,0,0,*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c),
         *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40),0x42);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar4 = (int *)(param_1 + 0xb8);
    do {
      if ((*(uint *)(param_1 + 0x100) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
        local_10.left = *piVar4;
        local_10.top = piVar4[1];
        local_10.right = piVar4[2];
        local_10.bottom = piVar4[3];
        InflateRect(&local_10,-*(int *)(param_1 + 0x84),-*(int *)(param_1 + 0x88));
        PatBlt(hdc,local_10.left,local_10.top,local_10.right - local_10.left,
               local_10.bottom - local_10.top,0xf00021);
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 9;
      pcVar5 = SelectObject_exref;
    } while (uVar3 < *(uint *)(param_1 + 0x24));
  }
  (*pcVar5)(hdc,pvVar2);
  (*pcVar5)(hdc,unaff_ESI);
  if (local_10.right != 0) {
    if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
      return;
    }
    CreateCaret(*(HWND *)(param_1 + 0x30),*(HBITMAP *)(param_1 + 0x10c),0,0);
  }
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    SetCaretPos(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40));
  }
  return;
}


