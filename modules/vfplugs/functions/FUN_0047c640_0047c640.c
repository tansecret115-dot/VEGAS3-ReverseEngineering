/* Module: vfplugs.dll
   Function: FUN_0047c640
   Address: 0047c640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0047c640(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7ec) == 0) {
    uVar1 = FUN_00480b50();
    *(short *)(param_1 + 0x7e8) = (short)uVar1;
    *(short *)(param_1 + 0x7f8) = (short)uVar1;
    *(undefined4 *)(param_1 + 0x7ec) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x7f8) = *(undefined2 *)(param_1 + 0x7e8);
  }
  if (*(short *)(param_1 + 0x7f8) == 0) {
    return 0;
  }
  return 0x80004005;
}


