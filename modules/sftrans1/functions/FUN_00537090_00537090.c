/* Module: sftrans1.dll
   Function: FUN_00537090
   Address: 00537090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00537090(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00536fe0(param_1,-1 - param_2);
  uVar1 = FUN_00536fe0(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_00536fe0(param_1 >> 0x10,uVar1);
  FUN_00536fe0(param_1 >> 0x18,uVar1);
  return;
}


