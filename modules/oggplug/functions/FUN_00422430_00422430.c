/* Module: oggplug.dll
   Function: FUN_00422430
   Address: 00422430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00422430(HANDLE param_1,DWORD *param_2)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  *param_2 = DVar1;
  return 0;
}


