/* Module: vidcap30.exe
   Function: FUN_00553590
   Address: 00553590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553590(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
  *(uint *)(param_1 + 0xd) = (-(uint)(*(char *)(param_1 + 0xc) != '\0') & 100) + 100;
  return;
}


