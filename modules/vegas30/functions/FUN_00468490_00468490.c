/* Module: vegas30.exe
   Function: FUN_00468490
   Address: 00468490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004686a7) */

void FUN_00468490(int param_1,int param_2,HDC param_3,RECT *param_4)

{
  undefined4 uVar1;
  HDC pHVar2;
  ulonglong uVar3;
  COLORREF color;
  COLORREF color_00;
  UINT align;
  HGDIOBJ pvVar4;
  int iVar5;
  uint x;
  longlong lVar6;
  tagRECT local_10;
  
  local_10.left = ((RECT *)(param_2 + 8))->left;
  uVar1 = *(undefined4 *)(param_1 + 0xd40);
  local_10.top = *(int *)(param_2 + 0xc);
  local_10.right = *(int *)(param_2 + 0x10);
  local_10.bottom = *(int *)(param_2 + 0x14);
  if ((DAT_00647678 & 0x2000) != 0) {
    FUN_005b8da0(*(undefined4 *)(param_1 + 0xbc8),0,1);
  }
  if ((param_4 == (RECT *)0x0) ||
     ((IntersectRect(&local_10,param_4,(RECT *)(param_2 + 8)), local_10.left < local_10.right &&
      (local_10.top < local_10.bottom)))) {
    color = GetBkColor(param_3);
    color_00 = GetTextColor(param_3);
    align = SetTextAlign(param_3,0);
    pvVar4 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
    pvVar4 = SelectObject(param_3,pvVar4);
    iVar5 = FUN_00460960(param_1,param_3,&local_10,uVar1);
    *(int *)(param_1 + 0xd40) = iVar5;
    if (iVar5 != 0) {
      pHVar2 = *(HDC *)(param_1 + 0xd1c);
      if ((pHVar2 == (HDC)0x0) || (pHVar2 == param_3)) {
        FUN_00465c00(param_1,param_3,&local_10,iVar5);
      }
      else {
        if (((*(int *)(param_1 + 0xd38) != 0) || (local_10.left < *(int *)(param_1 + 0xd28))) ||
           (*(int *)(param_1 + 0xd30) < local_10.right)) {
          FUN_00465c00(param_1,pHVar2,&local_10,iVar5);
          *(LONG *)(param_1 + 0xd28) = local_10.left;
          *(undefined4 *)(param_1 + 0xd38) = 0;
          *(LONG *)(param_1 + 0xd2c) = local_10.top;
          *(LONG *)(param_1 + 0xd30) = local_10.right;
          *(LONG *)(param_1 + 0xd34) = local_10.bottom;
        }
        BitBlt(param_3,local_10.left,local_10.top,local_10.right - local_10.left,
               local_10.bottom - local_10.top,*(HDC *)(param_1 + 0xd1c),local_10.left,local_10.top,
               0xcc0020);
      }
      if ((*(uint *)(param_2 + 4) & 0xf0000000) != 0) {
        FUN_004c2ff0(param_1,param_2,param_3,param_4);
      }
      if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
        x = 0xffffffff;
      }
      else {
        lVar6 = ftol();
        uVar3 = lVar6 + *(int *)(param_1 + 0xac0);
        x = (uint)uVar3;
        if ((uVar3 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < x))))
        {
          if (0x3fff < (longlong)uVar3) {
            x = 0x3fff;
          }
        }
        else {
          x = 0xffffc000;
        }
      }
      if ((local_10.left <= (int)x) && ((int)x < local_10.right)) {
        PatBlt(param_3,x,local_10.top,1,local_10.bottom - local_10.top,0x42);
      }
      if (*(int *)(param_1 + 0x16c) != 0) {
        FUN_004abde0(param_1,param_3);
      }
      if ((*(byte *)(param_1 + 0x20c) & 1) != 0) {
        FUN_00492a20(param_1,param_3,1);
      }
      FUN_00460890(iVar5);
    }
    SelectObject(param_3,pvVar4);
    SetTextAlign(param_3,align);
    SetTextColor(param_3,color_00);
    SetBkColor(param_3,color);
  }
  return;
}


