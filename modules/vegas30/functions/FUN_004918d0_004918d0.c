/* Module: vegas30.exe
   Function: FUN_004918d0
   Address: 004918d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004918d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043bc10(param_2,0x439,&DAT_00613140,2,param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  return;
}


