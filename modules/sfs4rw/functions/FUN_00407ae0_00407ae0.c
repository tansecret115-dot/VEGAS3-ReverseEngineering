/* Module: sfs4rw.dll
   Function: FUN_00407ae0
   Address: 00407ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407ae0(int param_1)

{
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x20c) = 1;
  if ((*(int *)(param_1 + 0x23c) != 0) && (*(int *)(param_1 + 0x228) == 0)) {
    FUN_00406a50(param_1);
  }
  return;
}


