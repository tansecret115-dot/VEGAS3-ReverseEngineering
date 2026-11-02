/* Module: vfplugs.dll
   Function: FUN_00471a40
   Address: 00471a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00471a40(HDC param_1,int param_2,LPRECT param_3,int *param_4,int param_5)

{
  HFONT h;
  int dy;
  int iVar1;
  int dx;
  int iVar2;
  tagRECT local_11c;
  HGDIOBJ local_10c;
  int local_108;
  char local_104 [260];
  
  if (*(int *)(param_2 + 0x130) == 0) {
    return;
  }
  wcstombs(local_104,(wchar_t *)(param_2 + 0x2c),0x104);
  h = FUN_0044cf70(0x6e);
  local_10c = SelectObject(param_1,h);
  local_108 = SetBkMode(param_1,1);
  local_11c.left = param_3->left;
  local_11c.top = param_3->top;
  local_11c.right = param_3->right;
  local_11c.bottom = param_3->bottom;
  DrawTextA(param_1,local_104,-1,&local_11c,0x425);
  iVar1 = param_3->right - param_3->left;
  if (((local_11c.right - local_11c.left < iVar1) &&
      (local_11c.bottom - local_11c.top < param_3->bottom - param_3->top)) && (param_5 != 0)) {
    DrawTextA(param_1,local_104,-1,param_3,0x25);
    goto LAB_00471c2b;
  }
  iVar2 = param_3->bottom - param_3->top;
  dx = ((iVar1 - local_11c.right) + local_11c.left) / 2;
  dy = ((iVar2 - local_11c.bottom) + local_11c.top) / 2;
  switch(*(undefined4 *)(param_2 + 0x130)) {
  case 1:
    dy = (local_11c.top - local_11c.bottom) + -1;
    break;
  case 2:
    dy = iVar2 + 1;
    break;
  case 3:
    dx = (local_11c.left - local_11c.right) + -1;
    break;
  case 4:
    dx = iVar1 + 1;
    break;
  default:
    goto switchD_00471b63_default;
  }
  OffsetRect(&local_11c,dx,dy);
switchD_00471b63_default:
  if (param_4 != (int *)0x0) {
    OffsetRect(&local_11c,
               ((*param_4 - local_11c.left < 1) - 1 & *param_4 - local_11c.left) -
               (local_11c.right - param_4[2] & (local_11c.right - param_4[2] < 1) - 1),
               ((param_4[1] - local_11c.top < 1) - 1 & param_4[1] - local_11c.top) -
               ((local_11c.bottom - param_4[3] < 1) - 1 & local_11c.bottom - param_4[3]));
  }
  DrawTextA(param_1,local_104,-1,&local_11c,0x25);
LAB_00471c2b:
  SetBkMode(param_1,local_108);
  SelectObject(param_1,local_10c);
  return;
}


