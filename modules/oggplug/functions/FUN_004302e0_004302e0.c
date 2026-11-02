/* Module: oggplug.dll
   Function: FUN_004302e0
   Address: 004302e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004302e0(int *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = FUN_00442100(param_1,8);
    *param_2 = (char)uVar1;
    param_2 = param_2 + 1;
  }
  return;
}


