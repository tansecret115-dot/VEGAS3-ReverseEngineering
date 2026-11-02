/* Module: qt4plug.dll
   Function: FUN_5f56b290
   Address: 5f56b290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f56b290(HANDLE param_1,DWORD *param_2)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  *param_2 = DVar1;
  return 0;
}


