/* Module: vegas30k.dll
   Function: FUN_010af590
   Address: 010af590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010af590(HBITMAP param_1,HDC param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int cx;
  HGDIOBJ h;
  int iVar3;
  HDC hdc;
  tagRECT local_10;
  
  iVar2 = (int)param_1;
  hdc = (HDC)0x0;
  param_1 = (HBITMAP)0x0;
  piVar1 = (int *)(iVar2 + 0x58);
  local_10.left = *piVar1;
  local_10.top = *(int *)(iVar2 + 0x5c);
  local_10.right = *(int *)(iVar2 + 0x60);
  iVar3 = *(int *)(iVar2 + 100);
  if (param_3 != 0) {
    hdc = CreateCompatibleDC(param_2);
    iVar3 = iVar3 - local_10.top;
    cx = local_10.right - local_10.left;
    param_1 = CreateCompatibleBitmap(param_2,cx,iVar3);
    if ((hdc != (HDC)0x0) && (param_1 != (HBITMAP)0x0)) {
      h = SelectObject(hdc,param_1);
      local_10.left = *piVar1;
      local_10.top = *(LONG *)(iVar2 + 0x5c);
      local_10.right = *(LONG *)(iVar2 + 0x60);
      local_10.bottom = *(LONG *)(iVar2 + 100);
      OffsetRect(&local_10,-*piVar1,-*(int *)(iVar2 + 0x5c));
      FUN_010aedc0(iVar2,hdc,&local_10);
      local_10.left = *(int *)(iVar2 + 0x118);
      local_10.top = *(int *)(iVar2 + 0x11c);
      local_10.right = *(int *)(iVar2 + 0x120);
      local_10.bottom = *(LONG *)(iVar2 + 0x124);
      OffsetRect(&local_10,-*piVar1,-*(int *)(iVar2 + 0x5c));
      FUN_010aed90(iVar2,hdc,&local_10);
      BitBlt(param_2,0,0,cx,iVar3,hdc,0,0,0xcc0020);
      SelectObject(hdc,h);
      goto LAB_010af6e6;
    }
  }
  FUN_010aedc0(iVar2,param_2,piVar1);
  FUN_010aed90(iVar2,param_2,iVar2 + 0x118);
LAB_010af6e6:
  if (param_1 != (HBITMAP)0x0) {
    DeleteObject(param_1);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  return;
}


