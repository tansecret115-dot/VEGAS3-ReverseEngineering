/* Module: sfcd.cdd
   Function: FUN_0041b3e0
   Address: 0041b3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041b3e0(int param_1,int param_2)

{
  if ((*(uint *)(param_1 + 0x38) & 0x200000) == 0) {
    return false;
  }
  if ((*(uint *)(param_2 + 0x20) & 2) == 0) {
    return false;
  }
  return ((byte)*(undefined4 *)(param_1 + 0x1c4) & 1) != 1;
}


