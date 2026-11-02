/* Module: mpgmux.dll
   Function: FUN_10002150
   Address: 10002150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10002150(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x1c))(*param_1,param_2);
  (**(code **)(*param_1 + 0x20))(*param_1);
  *param_1 = 0;
  return;
}


