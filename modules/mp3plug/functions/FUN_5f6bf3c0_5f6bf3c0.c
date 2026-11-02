/* Module: mp3plug.dll
   Function: FUN_5f6bf3c0
   Address: 5f6bf3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6bf3c0(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


