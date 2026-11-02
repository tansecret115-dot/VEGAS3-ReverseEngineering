/* Module: vegas30.exe
   Function: FUN_005470d0
   Address: 005470d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005470d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0x80004005;
  }
  FUN_00544840(8);
  FUN_005446f0(8,param_2,param_3,0,0,0,0);
  return 0;
}


