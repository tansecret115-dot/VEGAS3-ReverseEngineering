/* Module: rmto3260.dll
   Function: FUN_662fe5a0
   Address: 662fe5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_662fe5a0(undefined4 param_1)

{
  int _FindHandle;
  undefined1 local_11c [280];
  
  _FindHandle = findfirst(param_1,local_11c);
  _findclose(_FindHandle);
  return _FindHandle != -1;
}


