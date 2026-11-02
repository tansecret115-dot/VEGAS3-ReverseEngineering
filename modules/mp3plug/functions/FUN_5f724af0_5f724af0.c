/* Module: mp3plug.dll
   Function: FUN_5f724af0
   Address: 5f724af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f724af0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7ec) == 0) {
    uVar1 = FUN_5f729590();
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


