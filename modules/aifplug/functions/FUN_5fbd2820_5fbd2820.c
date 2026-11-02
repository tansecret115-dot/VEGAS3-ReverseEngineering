/* Module: aifplug.dll
   Function: FUN_5fbd2820
   Address: 5fbd2820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd2820(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_4 == 2) && (7 < param_3)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
    param_2[1] = 0;
    uVar1 = 0;
  }
  return uVar1;
}


