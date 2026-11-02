/* Module: vegas30k.dll
   Function: FUN_0106f960
   Address: 0106f960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0106f960(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 0x44) & 0x10) == 0) {
    uVar1 = FUN_01070700(param_2,param_3);
    return uVar1;
  }
  if ((*(uint *)(param_1 + 0x880) & 1) == 0) {
    uVar1 = FUN_01070980(param_2,param_3);
    return uVar1;
  }
  return 0;
}


