/* Module: rmme3260.dll
   Function: FUN_66243fc0
   Address: 66243fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66243fc0(HGDIOBJ param_1,HDC param_2,int *param_3)

{
  undefined4 *puVar1;
  HGDIOBJ pvVar2;
  HBRUSH pHVar3;
  HPEN pHVar4;
  HGDIOBJ h;
  HGDIOBJ h_00;
  int mode;
  tagTEXTMETRICA local_54;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  pvVar2 = param_1;
  local_c = *(int *)(*(int *)((int)param_1 + 0x84) + -8);
  if (local_c != 0) {
    puVar1 = (undefined4 *)((int)param_1 + 0x74);
    param_1 = (HGDIOBJ)0x0;
    if ((HGDIOBJ)*puVar1 != (HGDIOBJ)0x0) {
      param_1 = SelectObject(param_2,(HGDIOBJ)*puVar1);
    }
    GetTextMetricsA(param_2,&local_54);
    *(LONG *)((int)pvVar2 + 0x80) = local_54.tmHeight;
    local_1c.left = 0;
    local_1c.right = param_3[2] - *param_3;
    local_1c.bottom = param_3[3];
    local_1c.top = local_1c.bottom - local_54.tmHeight;
    if (*(int *)((int)pvVar2 + 0x78) == 0) {
      pHVar3 = CreateSolidBrush(0xff00);
      *(HBRUSH *)((int)pvVar2 + 0x78) = pHVar3;
      pHVar4 = CreatePen(5,0,0);
      *(HPEN *)((int)pvVar2 + 0x7c) = pHVar4;
    }
    h = SelectObject(param_2,*(HGDIOBJ *)((int)pvVar2 + 0x78));
    h_00 = SelectObject(param_2,*(HGDIOBJ *)((int)pvVar2 + 0x7c));
    local_8 = SetROP2(param_2,9);
    Rectangle(param_2,local_1c.left,local_1c.top,local_1c.right + 1,local_1c.bottom + 1);
    SelectObject(param_2,h);
    SelectObject(param_2,h_00);
    SetROP2(param_2,local_8);
    mode = SetBkMode(param_2,1);
    SetTextColor(param_2,0);
    SetTextColor(param_2,0xff00);
    DrawTextA(param_2,*(LPCSTR *)((int)pvVar2 + 0x84),local_c,&local_1c,0x25);
    SetBkMode(param_2,mode);
    if (param_1 != (HGDIOBJ)0x0) {
      SelectObject(param_2,param_1);
    }
  }
  return 0;
}


