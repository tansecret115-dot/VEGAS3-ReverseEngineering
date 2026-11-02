/* Module: vidcap30.exe
   Function: FUN_0052bce0
   Address: 0052bce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052bce0(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x52) = *param_3;
    *(undefined4 *)(param_2 + 0x56) = param_3[1];
    *(undefined1 *)(param_2 + 0x5a) = *(undefined1 *)(param_3 + 2);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}


