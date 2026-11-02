/* Module: vegas30k.dll
   Function: FUN_01110bf0
   Address: 01110bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01110bf0(int param_1,HDC param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  HGDIOBJ pvVar3;
  DWORD color;
  COLORREF color_00;
  int y;
  int x;
  code *pcVar4;
  HGDIOBJ unaff_ESI;
  int x_00;
  RECT local_10;
  
  pvVar3 = (HGDIOBJ)_SfGetUIPenWithStyle_8(6,0);
  SelectObject(param_2,pvVar3);
  if (*(int *)(param_1 + 0x30) == 0) {
    pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0xf);
    pvVar3 = SelectObject(param_2,pvVar3);
    Rectangle(param_2,*param_3,param_3[1],param_3[2],param_3[3]);
    piVar1 = param_3 + 2;
    piVar2 = param_3 + 3;
    x = *param_3 + 1;
    param_3 = (int *)(param_3[1] + 1);
    x_00 = *piVar1 + -2;
    y = *piVar2 + -2;
    SelectObject(param_2,pvVar3);
  }
  else {
    color = GetSysColor(0xf);
    color_00 = SetBkColor(param_2,color);
    local_10.right = param_3[2];
    local_10.left = *param_3;
    local_10.top = param_3[1];
    local_10.bottom = param_3[3];
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_2,color_00);
    x = *param_3;
    x_00 = param_3[2] + -1;
    y = param_3[3] + -1;
    param_3 = (int *)param_3[1];
  }
  pvVar3 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x10,0);
  SelectObject(param_2,pvVar3);
  if (param_4 == 0) {
    MoveToEx(param_2,x,y,(LPPOINT)0x0);
    LineTo(param_2,x_00,y);
    LineTo(param_2,x_00,(int)param_3 + -1);
    pvVar3 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x14,0);
    SelectObject(param_2,pvVar3);
    MoveToEx(param_2,x,y + -1,(LPPOINT)0x0);
    pcVar4 = LineTo_exref;
    LineTo(param_2,x,(int)param_3);
  }
  else {
    MoveToEx(param_2,x,y,(LPPOINT)0x0);
    pcVar4 = LineTo_exref;
    LineTo(param_2,x,(int)param_3);
    x_00 = x_00 + 1;
  }
  (*pcVar4)(param_2,x_00,param_3);
  SelectObject(param_2,unaff_ESI);
  return;
}


