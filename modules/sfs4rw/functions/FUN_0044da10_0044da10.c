/* Module: sfs4rw.dll
   Function: FUN_0044da10
   Address: 0044da10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044da10(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x40) = *param_3;
    *(undefined1 *)(param_2 + 0x44) = *(undefined1 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  return;
}


