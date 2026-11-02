/* Module: Setup.exe
   Function: FUN_0042e0a0
   Address: 0042e0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e0a0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0042dff0(param_1,-param_2 - 1);
  uVar1 = FUN_0042dff0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_0042dff0(param_1 >> 0x10,uVar1);
  FUN_0042dff0(param_1 >> 0x18,uVar1);
  return;
}


