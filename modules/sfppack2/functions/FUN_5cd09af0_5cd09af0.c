/* Module: sfppack2.dll
   Function: FUN_5cd09af0
   Address: 5cd09af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd09af0(HDC param_1,int *param_2,HGDIOBJ param_3)

{
  HGDIOBJ h;
  
  MoveToEx(param_1,param_2[2],param_2[1],(LPPOINT)0x0);
  h = SelectObject(param_1,param_3);
  LineTo(param_1,*param_2,param_2[1]);
  LineTo(param_1,*param_2,param_2[3]);
  LineTo(param_1,param_2[2],param_2[3]);
  LineTo(param_1,param_2[2],param_2[1]);
  SelectObject(param_1,h);
  return;
}


