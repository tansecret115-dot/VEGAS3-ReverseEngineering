/* Module: sfs4rw.dll
   Function: FUN_00416d10
   Address: 00416d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416d10(uchar *param_1,int param_2)

{
  if (param_2 == 0) {
    _mbscpy(param_1,(uchar *)"0x0000");
    return;
  }
  FUN_00420f60(param_1,(BYTE *)"%0#6x");
  return;
}


