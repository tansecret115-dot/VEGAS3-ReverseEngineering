/* Module: sfcdi.dll
   Function: FUN_5bf463f0
   Address: 5bf463f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf463f0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0xffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffff;
  }
  return 0;
}


