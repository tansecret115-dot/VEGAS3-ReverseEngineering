/* Module: vidcap30.exe
   Function: FUN_005361d0
   Address: 005361d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005361d0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 0x44) & 0x10) == 0) {
    uVar1 = FUN_00536f70(param_2,param_3);
    return uVar1;
  }
  if ((*(uint *)(param_1 + 0x880) & 1) == 0) {
    uVar1 = FUN_005371f0(param_2,param_3);
    return uVar1;
  }
  return 0;
}


