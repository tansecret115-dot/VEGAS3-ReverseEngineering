/* Module: vidcap30.exe
   Function: FUN_00522940
   Address: 00522940
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00522940(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


