/* Module: pngu3266.dll
   Function: FUN_6061ee20
   Address: 6061ee20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6061ee20(int *param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x20))(&local_8);
  }
  return local_8;
}


