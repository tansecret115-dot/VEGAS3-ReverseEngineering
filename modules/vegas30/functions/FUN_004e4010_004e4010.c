/* Module: vegas30.exe
   Function: FUN_004e4010
   Address: 004e4010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e4010(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0043c0e0(*(undefined4 *)(param_1 + 0xf20));
  *(undefined4 *)(param_1 + 0xf20) = 0;
  uVar1 = FUN_0043bc10(param_2,0x439,&DAT_0063ecd8,6,param_1 + 0xf24);
  *(undefined4 *)(param_1 + 0xf20) = uVar1;
  return;
}


