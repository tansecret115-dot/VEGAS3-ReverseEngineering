/* Module: vegas30.exe
   Function: FUN_00547110
   Address: 00547110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00547110(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  FUN_00546da0(0);
  FUN_00544840(4);
  FUN_005446f0(4,param_2,param_3,0,0,0,0);
  return 0;
}


