/* Module: 50comupd.exe
   Function: FUN_01005735
   Address: 01005735
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_01005735(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if ((int)DVar1 < 1) {
    DVar1 = GetLastError();
    return DVar1;
  }
  DVar1 = GetLastError();
  return DVar1 & 0xffff | 0x80070000;
}


