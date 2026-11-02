/* Module: vidcap30.exe
   Function: FUN_00541670
   Address: 00541670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00541670(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_00540b30(param_1,param_2,param_3);
  uVar2 = FUN_00540ba0(param_1,param_2,param_3);
  uVar3 = *(uint *)(param_1 + 0x5c);
  if (((*(uint *)(param_1 + 0x160) & 0x800) == 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 1;
  }
  if ((uVar2 == 0xffff) || (uVar2 <= uVar3)) {
    FUN_005410b0(param_1,uVar2,uVar1);
  }
  return;
}


