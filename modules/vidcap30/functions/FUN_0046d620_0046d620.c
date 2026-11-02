/* Module: vidcap30.exe
   Function: FUN_0046d620
   Address: 0046d620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_0046d620(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_00583c20(param_2,param_4,param_3,param_5);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  param_1[0x42] = param_3;
  *param_1 = &PTR_FUN_00593354;
  param_1[0x12] = &PTR_FUN_005932f8;
  param_1[0x15] = &PTR_FUN_005932b0;
  param_1[0x16] = &PTR_LAB_0059329c;
  return param_1;
}


