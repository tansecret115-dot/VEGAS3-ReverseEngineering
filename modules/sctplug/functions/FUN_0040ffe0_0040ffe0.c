/* Module: sctplug.dll
   Function: FUN_0040ffe0
   Address: 0040ffe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040ffe0(uint *param_1)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  *param_1 = ((uint)local_14.wMonth << 8 | (uint)local_14.wDay) << 0x10 | (uint)local_14.wYear;
  param_1[1] = (((uint)local_14.wHour << 8 | (uint)local_14.wMinute) << 8 | (uint)local_14.wSecond)
               << 8 | local_14.wMilliseconds / 10;
  return;
}


