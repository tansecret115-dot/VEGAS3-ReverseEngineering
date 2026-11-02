/* Module: encn3260.dll
   Function: FUN_6649dba0
   Address: 6649dba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6649dba0(int *param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x20))(&local_8);
  }
  return local_8;
}


