/* Module: sfppack3.dll
   Function: FUN_5cc51960
   Address: 5cc51960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc51960(HDC param_1,int param_2,int param_3)

{
  int rop2;
  COLORREF color;
  HPEN h;
  HGDIOBJ h_00;
  
  rop2 = SetROP2(param_1,10);
  color = FUN_5cc695c0(0x8d);
  h = CreatePen(0,2,color);
  h_00 = SelectObject(param_1,h);
  MoveToEx(param_1,param_3,*(int *)(param_2 + 0x7c),(LPPOINT)0x0);
  LineTo(param_1,param_3,*(int *)(param_2 + 0x84));
  SetROP2(param_1,rop2);
  SelectObject(param_1,h_00);
  DeleteObject(h);
  return;
}


