/* Module: vidcap30.exe
   Function: FUN_005123e0
   Address: 005123e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005123e0(HDC param_1,int *param_2)

{
  int rop2;
  HPEN h;
  HGDIOBJ h_00;
  
  MoveToEx(param_1,param_2[2],param_2[1],(LPPOINT)0x0);
  rop2 = SetROP2(param_1,10);
  h = CreatePen(2,1,0);
  h_00 = SelectObject(param_1,h);
  LineTo(param_1,*param_2,param_2[1]);
  LineTo(param_1,*param_2,param_2[3]);
  LineTo(param_1,param_2[2],param_2[3]);
  LineTo(param_1,param_2[2],param_2[1]);
  SetROP2(param_1,rop2);
  SelectObject(param_1,h_00);
  DeleteObject(h);
  return;
}


