/* Module: sftrkfx1.dll
   Function: FUN_5cbcb900
   Address: 5cbcb900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbcb900(int param_1,HDC param_2,LPRECT param_3,int param_4)

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
  
  if (param_1 != 0) {
    DrawEdge(param_2,param_3,(-(uint)(param_4 != 0) & 0xfffffffe) + 4,0x80f);
    return;
  }
  pvVar3 = (HGDIOBJ)FUN_5cbddbc0(6,0);
  SelectObject(param_2,pvVar3);
  h = FUN_5cbdda90(0xf);
  SelectObject(param_2,h);
  Rectangle(param_2,param_3->left,param_3->top,param_3->right,param_3->bottom);
  iVar1 = param_3->right;
  y = param_3->top;
  iVar2 = param_3->bottom;
  x = iVar1 + -2;
  x_00 = param_3->left + 1;
  y_00 = y + 1;
  y_01 = iVar2 + -2;
  pvVar3 = (HGDIOBJ)FUN_5cbddbc0(0x10,0);
  SelectObject(param_2,pvVar3);
  if (param_4 == 0) {
    MoveToEx(param_2,x_00,y_01,(LPPOINT)0x0);
    LineTo(param_2,x,y_01);
    LineTo(param_2,x,y);
    pvVar3 = (HGDIOBJ)FUN_5cbddbc0(0x14,0);
    SelectObject(param_2,pvVar3);
    MoveToEx(param_2,x_00,iVar2 + -3,(LPPOINT)0x0);
    pcVar4 = LineTo_exref;
    LineTo(param_2,x_00,y_00);
  }
  else {
    MoveToEx(param_2,x_00,y_01,(LPPOINT)0x0);
    pcVar4 = LineTo_exref;
    LineTo(param_2,x_00,y_00);
    x = iVar1 + -1;
  }
  (*pcVar4)(param_2,x,y_00);
  SelectObject(param_2,unaff_EBX);
  SelectObject(param_2,unaff_ESI);
  return;
}


