/* Module: vegas30.exe
   Function: FUN_005bb170
   Address: 005bb170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005bb170(undefined4 param_1,int param_2)

{
  undefined1 local_28 [40];
  
  _SfGuidToString_12(param_1,local_28,0x28);
  if (param_2 != 0) {
    SfErrorHandler_DetailsAddString(0x8004e084,local_28);
    return;
  }
  SfErrorHandler_DetailsAddString(0x8004e084,"%s - %s",local_28,0);
  return;
}


