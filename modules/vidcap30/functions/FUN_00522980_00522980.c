/* Module: vidcap30.exe
   Function: FUN_00522980
   Address: 00522980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00522980(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 * 1000 + *param_1 * -1000;
}


