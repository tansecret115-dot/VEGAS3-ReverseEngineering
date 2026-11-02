/* Module: vegas30.exe
   Function: FUN_0057f7e0
   Address: 0057f7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057f7e0(int param_1,undefined4 param_2)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x58) = DVar1;
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))(param_2);
    return 1;
  }
  return 0;
}


