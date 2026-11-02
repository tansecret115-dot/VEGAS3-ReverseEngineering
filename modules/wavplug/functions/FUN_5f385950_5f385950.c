/* Module: wavplug.dll
   Function: FUN_5f385950
   Address: 5f385950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f385950(int param_1)

{
  undefined4 uVar1;
  
  FUN_5f3a2b90((int *)(param_1 + 0x218),4,-1,-1,0);
  uVar1 = 0x8007000e;
  if (*(int *)(param_1 + 0x218) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


