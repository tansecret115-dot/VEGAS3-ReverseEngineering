/* Module: sfs4rw.dll
   Function: FUN_00406a90
   Address: 00406a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406a90(int param_1)

{
  void *this;
  
  this = DAT_004a8128;
  FUN_004116c0(DAT_004a8128,1);
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  FUN_00415c20(this,0x10);
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_00415c90(this,2);
  }
  return;
}


