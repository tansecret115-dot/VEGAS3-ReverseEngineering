/* Module: sfpublish.dll
   Function: FUN_00420fc0
   Address: 00420fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00420fc0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if ((iVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return iVar1;
}


