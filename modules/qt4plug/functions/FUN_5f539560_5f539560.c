/* Module: qt4plug.dll
   Function: FUN_5f539560
   Address: 5f539560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f539560(undefined4 param_1,undefined4 param_2,HDC param_3,int *param_4,int param_5)

{
  int iVar1;
  int y;
  int iVar2;
  HGDIOBJ pvVar3;
  HBRUSH h;
  int x;
  HGDIOBJ unaff_EBX;
  int x_00;
  int y_00;
  HGDIOBJ unaff_ESI;
  int y_01;
  code *pcVar4;
  
  pvVar3 = (HGDIOBJ)FUN_5f548ed0(6,0);
  SelectObject(param_3,pvVar3);
  h = FUN_5f548da0(0xf);
  SelectObject(param_3,h);
  Rectangle(param_3,*param_4,param_4[1],param_4[2],param_4[3]);
  iVar1 = param_4[2];
  y = param_4[1];
  iVar2 = param_4[3];
  x = iVar1 + -2;
  x_00 = *param_4 + 1;
  y_00 = y + 1;
  y_01 = iVar2 + -2;
  pvVar3 = (HGDIOBJ)FUN_5f548ed0(0x10,0);
  SelectObject(param_3,pvVar3);
  if (param_5 == 0) {
    MoveToEx(param_3,x_00,y_01,(LPPOINT)0x0);
    LineTo(param_3,x,y_01);
    LineTo(param_3,x,y);
    pvVar3 = (HGDIOBJ)FUN_5f548ed0(0x14,0);
    SelectObject(param_3,pvVar3);
    MoveToEx(param_3,x_00,iVar2 + -3,(LPPOINT)0x0);
    pcVar4 = LineTo_exref;
    LineTo(param_3,x_00,y_00);
  }
  else {
    MoveToEx(param_3,x_00,y_01,(LPPOINT)0x0);
    pcVar4 = LineTo_exref;
    LineTo(param_3,x_00,y_00);
    x = iVar1 + -1;
  }
  (*pcVar4)(param_3,x,y_00);
  SelectObject(param_3,unaff_EBX);
  SelectObject(param_3,unaff_ESI);
  return;
}


