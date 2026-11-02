/* Module: sfmarket2.dll
   Function: FUN_0045bc00
   Address: 0045bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045bc00(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
  *(uint *)(param_1 + 0xd) = (-(uint)(*(char *)(param_1 + 0xc) != '\0') & 100) + 100;
  return;
}


