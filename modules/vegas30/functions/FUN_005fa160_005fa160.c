/* Module: vegas30.exe
   Function: FUN_005fa160
   Address: 005fa160
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005fa160(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x14))(param_1 + 8,0);
  *(uint *)(param_1 + 0x10) = (uint)(iVar1 != 0);
  return (-(uint)((iVar1 != 0) != 0) & 0x7ffb1ff6) + 0x8004e00a;
}


