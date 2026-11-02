/* Module: rmbe3260.dll
   Function: FUN_6604aac0
   Address: 6604aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_6604aac0(undefined4 param_1)

{
  int _FindHandle;
  undefined1 local_11c [280];
  
  _FindHandle = findfirst(param_1,local_11c);
  _findclose(_FindHandle);
  return _FindHandle != -1;
}


