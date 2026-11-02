/* Module: vegas30.exe
   Function: FUN_005ed450
   Address: 005ed450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005ed450(int param_1,int param_2)

{
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *(int *)(*(int *)(param_2 + 4) + 0x140) = *(int *)(*(int *)(param_2 + 4) + 0x140) + 1;
  *(uint *)(*(int *)(param_2 + 4) + 0x134) = *(uint *)(*(int *)(param_2 + 4) + 0x134) | 0x10;
  if (*(int *)(param_1 + 0x1c) != 0) {
    DAT_0064767c = DAT_0064767c | 0x100;
  }
  return *(undefined4 *)(param_2 + 8);
}


