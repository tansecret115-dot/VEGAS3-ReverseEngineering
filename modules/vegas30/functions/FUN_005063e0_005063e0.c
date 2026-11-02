/* Module: vegas30.exe
   Function: FUN_005063e0
   Address: 005063e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005063e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043bc10(param_2,200,&DAT_00643508,2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


