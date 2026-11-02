/* Module: vegas30.exe
   Function: FUN_005b72a0
   Address: 005b72a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b72a0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x13c) = param_3;
  *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c8) + param_2 + 0xac;
  FUN_005b5960();
  *(int *)(param_1 + 0x120) = param_2 + 0xa4;
  uVar1 = FUN_005b5990(param_1 + 0x11c);
  riff_UpdateRIFFSize(*(undefined4 *)(param_1 + 0x118),param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  return uVar1;
}


