/* Module: vegas30k.dll
   Function: FUN_0118da20
   Address: 0118da20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118da20(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 2:
    *(undefined4 *)(param_1 + 0x54) = 0x40000;
    return 0;
  case 3:
    *(undefined4 *)(param_1 + 0x54) = 0x10000;
    return 0;
  case 4:
  case 5:
    *(undefined4 *)(param_1 + 0x54) = 0x20000;
  }
  return 0;
}


