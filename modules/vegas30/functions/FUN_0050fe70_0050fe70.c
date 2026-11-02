/* Module: vegas30.exe
   Function: FUN_0050fe70
   Address: 0050fe70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0050fe70(HDC param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  HGDIOBJ pvVar1;
  
  BeginPath(param_1);
  FUN_0050ff00(param_1,param_2,param_3,param_4);
  CloseFigure(param_1);
  EndPath(param_1);
  if (param_5 != 0) {
    pvVar1 = GetStockObject(5);
    pvVar1 = SelectObject(param_1,pvVar1);
    StrokePath(param_1);
    SelectObject(param_1,pvVar1);
    return 1;
  }
  pvVar1 = GetStockObject(8);
  pvVar1 = SelectObject(param_1,pvVar1);
  FillPath(param_1);
  SelectObject(param_1,pvVar1);
  return 1;
}


