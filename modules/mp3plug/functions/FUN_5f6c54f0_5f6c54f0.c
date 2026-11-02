/* Module: mp3plug.dll
   Function: FUN_5f6c54f0
   Address: 5f6c54f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c54f0(HANDLE param_1,DWORD *param_2)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  *param_2 = DVar1;
  return 0;
}


