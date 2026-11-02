/* Module: encn3260.dll
   Function: FUN_664b5670
   Address: 664b5670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b5670(int param_1,undefined *param_2,undefined *param_3)

{
  UINT uMode;
  int local_24;
  undefined4 local_20;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
    (*(code *)param_2)(0,&local_8,0);
  }
  else {
    local_24 = param_1;
    local_c = 0;
    (*(code *)param_3)(FUN_664b56f0,&local_24,1);
    if (local_c != 0) {
      uMode = SetErrorMode(1);
      (*(code *)param_2)(local_20,&local_8,0);
      SetErrorMode(uMode);
      return local_8;
    }
  }
  return local_8;
}


