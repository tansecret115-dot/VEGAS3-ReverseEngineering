/* Module: mp3rw.dll
   Function: FUN_00453410
   Address: 00453410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453410(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
  *(uint *)(param_1 + 0xd) = (-(uint)(*(char *)(param_1 + 0xc) != '\0') & 100) + 100;
  return;
}


