/* Module: mcplugrw.dll
   Function: FUN_00406af0
   Address: 00406af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406af0(int param_1)

{
  void *this;
  
  this = DAT_004a8128;
  FUN_00411740(DAT_004a8128,1);
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  FUN_00415ca0(this,0x10);
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_00415d10(this,2);
  }
  return;
}


