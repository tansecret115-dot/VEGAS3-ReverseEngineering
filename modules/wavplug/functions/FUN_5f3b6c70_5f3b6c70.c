/* Module: wavplug.dll
   Function: FUN_5f3b6c70
   Address: 5f3b6c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3b6c70(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


