/* Module: mcplugrw.dll
   Function: FUN_00416d90
   Address: 00416d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416d90(uchar *param_1,int param_2)

{
  if (param_2 == 0) {
    _mbscpy(param_1,(uchar *)"0x0000");
    return;
  }
  FUN_00420fe0(param_1,(BYTE *)"%0#6x");
  return;
}


