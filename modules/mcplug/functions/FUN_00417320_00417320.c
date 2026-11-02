/* Module: mcplug.dll
   Function: FUN_00417320
   Address: 00417320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00417320(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if ((iVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return iVar1;
}


