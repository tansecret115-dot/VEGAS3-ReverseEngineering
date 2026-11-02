/* Module: wmfplug2.dll
   Function: FUN_0040cf10
   Address: 0040cf10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040cf10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0040c890(*(int *)(param_1 + 0xc));
  *param_2 = puVar1;
  FUN_0040c840(*(int *)(param_1 + 0xc));
  return;
}


