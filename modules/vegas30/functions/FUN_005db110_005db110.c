/* Module: vegas30.exe
   Function: FUN_005db110
   Address: 005db110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005db110(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004e7320(param_1,param_2);
  uVar1 = 0x8004e00c;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


