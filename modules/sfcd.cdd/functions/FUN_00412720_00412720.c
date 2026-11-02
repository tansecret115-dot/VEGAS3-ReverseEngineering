/* Module: sfcd.cdd
   Function: FUN_00412720
   Address: 00412720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412720(byte *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 8) & 8) != 0) {
    *param_1 = *param_1 | 0x80;
  }
  if ((*(uint *)(param_2 + 8) & 1) != 0) {
    *param_1 = *param_1 | 0x10;
  }
  if ((*(uint *)(param_2 + 8) & 2) != 0) {
    *param_1 = *param_1 | 0x20;
  }
  if ((*(uint *)(param_2 + 8) & 4) != 0) {
    *param_1 = *param_1 | 0x40;
  }
  return;
}


