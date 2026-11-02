/* Module: vidcap30.exe
   Function: FUN_00522920
   Address: 00522920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00522920(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


