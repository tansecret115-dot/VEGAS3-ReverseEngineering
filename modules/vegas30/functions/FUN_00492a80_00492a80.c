/* Module: vegas30.exe
   Function: FUN_00492a80
   Address: 00492a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492a80(int param_1,HDC param_2)

{
  HGDIOBJ h;
  int rop2;
  int mode;
  COLORREF color;
  
  h = SelectObject(param_2,*(HGDIOBJ *)(param_1 + 0x204));
  rop2 = SetROP2(param_2,7);
  mode = SetBkMode(param_2,2);
  color = SetBkColor(param_2,0xffffff);
  MoveToEx(param_2,*(int *)(param_1 + 500),*(int *)(param_1 + 0x1f8),(LPPOINT)0x0);
  LineTo(param_2,*(int *)(param_1 + 500),*(int *)(param_1 + 0x200));
  LineTo(param_2,*(int *)(param_1 + 0x1fc),*(int *)(param_1 + 0x200));
  LineTo(param_2,*(int *)(param_1 + 0x1fc),*(int *)(param_1 + 0x1f8));
  LineTo(param_2,*(int *)(param_1 + 500),*(int *)(param_1 + 0x1f8));
  SetROP2(param_2,rop2);
  SelectObject(param_2,h);
  SetBkMode(param_2,mode);
  SetBkColor(param_2,color);
  return;
}


