/* Module: vegas30.exe
   Function: FUN_00401510
   Address: 00401510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401510(HDC param_1,int param_2,int param_3,COLORREF param_4,COLORREF param_5,
                 LPCSTR param_6,int param_7,int param_8)

{
  SetTextColor(param_1,param_4);
  TextOutA(param_1,param_2 + param_8,param_3 + param_8,param_6,param_7);
  SetTextColor(param_1,param_5);
  TextOutA(param_1,param_2,param_3,param_6,param_7);
  return;
}


