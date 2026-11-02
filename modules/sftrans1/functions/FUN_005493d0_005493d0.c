/* Module: sftrans1.dll
   Function: FUN_005493d0
   Address: 005493d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005493d0(int param_1,HDC param_2)

{
  HPEN h;
  HPEN h_00;
  int iVar1;
  int iVar2;
  int y;
  int y_00;
  int x;
  int y_01;
  int x_00;
  LPPOINT ptVar3;
  undefined4 local_10;
  
  h = CreatePen(2,1,*(COLORREF *)(param_1 + 0x18c));
  local_10 = (HGDIOBJ)0x0;
  if (h != (HPEN)0x0) {
    local_10 = SelectObject(param_2,h);
  }
  h_00 = CreatePen(0,1,*(COLORREF *)(param_1 + 0x18c));
  if (h_00 != (HPEN)0x0) {
    SelectObject(param_2,h_00);
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar2 = ftol();
    y = ftol();
    y_00 = ftol();
    x = ftol();
    y_01 = ftol();
    ptVar3 = (LPPOINT)0x0;
    iVar1 = y_01;
    x_00 = ftol();
    MoveToEx(param_2,x_00,iVar1,ptVar3);
    LineTo(param_2,iVar2,y_01);
    MoveToEx(param_2,x,y,(LPPOINT)0x0);
    LineTo(param_2,x,y_00);
  }
  else {
    ptVar3 = (LPPOINT)0x0;
    iVar1 = ftol();
    iVar2 = ftol();
    MoveToEx(param_2,iVar2,iVar1,ptVar3);
    iVar1 = ftol();
    iVar2 = ftol();
    LineTo(param_2,iVar2,iVar1);
    iVar1 = ftol();
    iVar2 = ftol();
    LineTo(param_2,iVar2,iVar1);
    iVar1 = ftol();
    iVar2 = ftol();
    LineTo(param_2,iVar2,iVar1);
    iVar1 = ftol();
    iVar2 = ftol();
    LineTo(param_2,iVar2,iVar1);
  }
  if (local_10 != (HGDIOBJ)0x0) {
    SelectObject(param_2,local_10);
  }
  if (h != (HPEN)0x0) {
    DeleteObject(h);
  }
  if (h_00 != (HPEN)0x0) {
    DeleteObject(h_00);
  }
  return;
}


