/* Module: sfs4rw.dll
   Function: FUN_004167a0
   Address: 004167a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004167a0(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_004169a0(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_0041b280();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


