/* Module: vegas30.exe
   Function: FUN_006052e0
   Address: 006052e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_006052e0(int param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x7ec) == 0) {
    uVar1 = FUN_00609d80();
    *(undefined2 *)(param_1 + 0x7e8) = uVar1;
    *(undefined2 *)(param_1 + 0x7f8) = uVar1;
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


