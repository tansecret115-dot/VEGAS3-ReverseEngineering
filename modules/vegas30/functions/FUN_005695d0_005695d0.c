/* Module: vegas30.exe
   Function: FUN_005695d0
   Address: 005695d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005695d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043bc10(*(undefined4 *)(param_2 + 0x24),0xa7a6,&DAT_00645598,3,param_1 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c0) = uVar1;
  FUN_00569590();
  return;
}


