/* Module: rmbe3260.dll
   Function: FUN_6603c0a0
   Address: 6603c0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6603c0a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_6603d3e0((int)param_1);
    (**(code **)*param_1)(1);
  }
  return uVar1;
}


