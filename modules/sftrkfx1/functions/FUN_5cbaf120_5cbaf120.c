/* Module: sftrkfx1.dll
   Function: FUN_5cbaf120
   Address: 5cbaf120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaf120(HDC param_1,undefined4 *param_2)

{
  HGDIOBJ pvVar1;
  RECT local_10;
  
  if (((byte)*param_2 & 5) == 5) {
    local_10.left = param_2[5] + 1;
    local_10.top = param_2[6] + 1;
    local_10.right = param_2[7] + -1;
    local_10.bottom = param_2[8] + -1;
    pvVar1 = GetStockObject(4);
    pvVar1 = SelectObject(param_1,pvVar1);
    DrawFocusRect(param_1,&local_10);
    SelectObject(param_1,pvVar1);
  }
  return;
}


