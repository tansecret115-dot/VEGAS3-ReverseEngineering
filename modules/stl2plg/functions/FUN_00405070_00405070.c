/* Module: stl2plg.dll
   Function: FUN_00405070
   Address: 00405070
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort FUN_00405070(HANDLE param_1)

{
  BOOL BVar1;
  DWORD local_4;
  
  BVar1 = ReadFile(param_1,&param_1,2,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  return (ushort)(byte)((uint)param_1 & 0xffff) << 8 | (ushort)(((uint)param_1 & 0xffff) >> 8);
}


