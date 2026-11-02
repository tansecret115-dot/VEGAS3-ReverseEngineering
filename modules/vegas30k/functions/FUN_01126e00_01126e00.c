/* Module: vegas30k.dll
   Function: FUN_01126e00
   Address: 01126e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01126e00(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_01155e40(2);
  if (iVar1 != 0) {
    FUN_01126e60(iVar1);
  }
  return iVar1;
}


