/* Module: stl2plg.dll
   Function: FUN_00405040
   Address: 00405040
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00405040(HANDLE param_1)

{
  BOOL BVar1;
  DWORD local_4;
  
  BVar1 = ReadFile(param_1,&param_1,1,&local_4,(LPOVERLAPPED)0x0);
  return CONCAT31((int3)((uint)-BVar1 >> 8),-(BVar1 != 0)) & (uint)param_1;
}


