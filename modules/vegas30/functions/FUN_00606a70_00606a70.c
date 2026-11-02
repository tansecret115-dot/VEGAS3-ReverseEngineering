/* Module: vegas30.exe
   Function: FUN_00606a70
   Address: 00606a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00606a70(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006069c0(param_1,-1 - param_2);
  uVar1 = FUN_006069c0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_006069c0(param_1 >> 0x10,uVar1);
  FUN_006069c0(param_1 >> 0x18,uVar1);
  return;
}


