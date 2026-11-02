/* Module: vegas30.exe
   Function: FUN_00579c50
   Address: 00579c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00579c50(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if ((iVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return iVar1;
}


