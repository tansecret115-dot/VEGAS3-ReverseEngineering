/* Module: vidcap30.exe
   Function: FUN_0052c0c0
   Address: 0052c0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052c0c0(int param_1,int param_2,undefined1 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_2 + 0x2c) = param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  }
  return;
}


