/* Module: sftrans1.dll
   Function: FUN_0054aee0
   Address: 0054aee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054aee0(int param_1,HDC param_2)

{
  HPEN h;
  HGDIOBJ h_00;
  
  h = CreatePen(2,1,*(COLORREF *)(param_1 + 400));
  h_00 = (HGDIOBJ)0x0;
  if (h != (HPEN)0x0) {
    h_00 = SelectObject(param_2,h);
  }
  SetBkColor(param_2,*(COLORREF *)(param_1 + 0x174));
  MoveToEx(param_2,*(int *)(param_1 + 0x164),*(int *)(param_1 + 0x168),(LPPOINT)0x0);
  LineTo(param_2,*(int *)(param_1 + 0x164),*(int *)(param_1 + 0x170));
  LineTo(param_2,*(int *)(param_1 + 0x16c),*(int *)(param_1 + 0x170));
  LineTo(param_2,*(int *)(param_1 + 0x16c),*(int *)(param_1 + 0x168));
  LineTo(param_2,*(int *)(param_1 + 0x164),*(int *)(param_1 + 0x168));
  if (h_00 != (HGDIOBJ)0x0) {
    SelectObject(param_2,h_00);
  }
  if (h != (HPEN)0x0) {
    DeleteObject(h);
  }
  return;
}


