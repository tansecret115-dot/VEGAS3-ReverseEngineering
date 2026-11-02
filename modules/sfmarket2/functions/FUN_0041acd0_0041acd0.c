/* Module: sfmarket2.dll
   Function: FUN_0041acd0
   Address: 0041acd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041acd0(uchar *param_1,int param_2)

{
  if (param_2 == 0) {
    _mbscpy(param_1,(uchar *)"0x0000");
    return;
  }
  FUN_00424a60(param_1,(BYTE *)"%0#6x");
  return;
}


