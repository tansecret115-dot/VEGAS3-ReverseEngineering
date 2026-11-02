/* Module: sfcdi.dll
   Function: FUN_5bf15860
   Address: 5bf15860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf15860(int param_1,uchar *param_2)

{
  if (*(int *)(param_1 + 4) < 0) {
    return 1;
  }
  FUN_5bf25750(param_2,(BYTE *)"%s (%d,%d)");
  return 0;
}


