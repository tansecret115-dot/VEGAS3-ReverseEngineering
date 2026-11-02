/* Module: sfmarket2.dll
   Function: FUN_0040f560
   Address: 0040f560
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040f560(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x48] + -1;
  param_1[0x48] = iVar1;
  if ((iVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return iVar1;
}


