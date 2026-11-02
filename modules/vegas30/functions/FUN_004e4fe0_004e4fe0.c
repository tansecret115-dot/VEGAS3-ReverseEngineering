/* Module: vegas30.exe
   Function: FUN_004e4fe0
   Address: 004e4fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e4fe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(DAT_0064762c + 0x70) != 0) &&
     (param_1 == *(int *)(*(int *)(DAT_0064762c + 0x70) + 0xdd0))) {
    uVar1 = 1;
  }
  return uVar1;
}


