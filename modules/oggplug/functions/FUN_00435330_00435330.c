/* Module: oggplug.dll
   Function: FUN_00435330
   Address: 00435330
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_00435330(uint param_1)

{
  double dVar1;
  undefined8 local_8;
  
  local_8 = (double)(param_1 & 0x1fffff);
  if ((param_1 & 0x80000000) != 0) {
    local_8 = -local_8;
  }
  dVar1 = ldexp(local_8,((int)param_1 >> 0x15 & 0x3ffU) - 0x314);
  return (float10)dVar1;
}


