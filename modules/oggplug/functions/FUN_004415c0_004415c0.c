/* Module: oggplug.dll
   Function: FUN_004415c0
   Address: 004415c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004415c0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    FUN_00441010();
  }
  return 0;
}


