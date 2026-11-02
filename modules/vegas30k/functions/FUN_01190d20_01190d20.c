/* Module: vegas30k.dll
   Function: FUN_01190d20
   Address: 01190d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01190d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (0x3ff < *(uint *)(param_1 + 0x115c)) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x15c + *(uint *)(param_1 + 0x115c) * 4) = param_3;
  *(int *)(param_1 + 0x115c) = *(int *)(param_1 + 0x115c) + 1;
  uVar1 = _SfGetMillisec_0();
  *(undefined4 *)(param_1 + 0x1160) = uVar1;
  return 0;
}


