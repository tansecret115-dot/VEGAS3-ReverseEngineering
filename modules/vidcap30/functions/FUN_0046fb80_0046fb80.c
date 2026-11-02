/* Module: vidcap30.exe
   Function: FUN_0046fb80
   Address: 0046fb80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0046fb80(int param_1,int param_2)

{
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *(int *)(*(int *)(param_2 + 4) + 0x128) = *(int *)(*(int *)(param_2 + 4) + 0x128) + 1;
  *(uint *)(*(int *)(param_2 + 4) + 0x124) = *(uint *)(*(int *)(param_2 + 4) + 0x124) | 0x10;
  if (*(int *)(param_1 + 0x1c) != 0) {
    DAT_005ba50c = DAT_005ba50c | 0x100;
  }
  return *(undefined4 *)(param_2 + 8);
}


