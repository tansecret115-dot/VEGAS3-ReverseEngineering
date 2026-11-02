/* Module: vegas30.exe
   Function: FUN_00423ac0
   Address: 00423ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423ac0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043bc10(param_2,0x439,&DAT_0063d418,6,param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_0043bc10(param_2,0x43a,&DAT_0063d490,4,param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_00423300(param_1);
  return;
}


