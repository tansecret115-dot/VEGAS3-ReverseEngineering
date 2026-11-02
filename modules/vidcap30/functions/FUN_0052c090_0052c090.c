/* Module: vidcap30.exe
   Function: FUN_0052c090
   Address: 0052c090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052c090(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x40) = *param_3;
    *(undefined1 *)(param_2 + 0x44) = *(undefined1 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  return;
}


