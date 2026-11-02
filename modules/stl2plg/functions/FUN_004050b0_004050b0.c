/* Module: stl2plg.dll
   Function: FUN_004050b0
   Address: 004050b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004050b0(HANDLE param_1)

{
  BOOL BVar1;
  DWORD local_4;
  
  BVar1 = ReadFile(param_1,&param_1,4,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  return ((uint)param_1 & 0xff0000 | (uint)param_1 >> 0x10) >> 8 |
         ((uint)param_1 & 0xff00 | (int)param_1 << 0x10) << 8;
}


