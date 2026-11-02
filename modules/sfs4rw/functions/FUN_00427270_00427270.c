/* Module: sfs4rw.dll
   Function: FUN_00427270
   Address: 00427270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00427270(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


