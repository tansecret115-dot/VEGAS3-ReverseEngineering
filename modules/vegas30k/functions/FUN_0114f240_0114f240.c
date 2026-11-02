/* Module: vegas30k.dll
   Function: FUN_0114f240
   Address: 0114f240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114f240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_0114e760(param_1,param_2,param_3);
  uVar2 = FUN_0114e7d0(param_1,param_2,param_3);
  uVar3 = *(uint *)(param_1 + 0x5c);
  if (((*(uint *)(param_1 + 0x160) & 0x800) == 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 1;
  }
  if ((uVar2 == 0xffff) || (uVar2 <= uVar3)) {
    FUN_0114e940(param_1,uVar2,uVar1,param_4);
  }
  return;
}


