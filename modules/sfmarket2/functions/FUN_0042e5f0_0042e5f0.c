/* Module: sfmarket2.dll
   Function: FUN_0042e5f0
   Address: 0042e5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0042e5f0(undefined4 *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  iVar1 = param_1[0x12] + -1;
  param_1[0x12] = iVar1;
  if ((iVar1 == 1) && (param_1[0x10] != 0)) {
    if (param_1[0xe] == 0) {
      FUN_0042e650(param_1,100);
    }
    else {
      param_1[0xd] = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if ((iVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return iVar1;
}


