/* Module: vidcap30.exe
   Function: FUN_0052c280
   Address: 0052c280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052c280(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x39) = *param_3;
    *(undefined2 *)(param_2 + 0x3d) = *(undefined2 *)(param_3 + 1);
    *(undefined1 *)(param_2 + 0x3f) = *(undefined1 *)((int)param_3 + 6);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}


