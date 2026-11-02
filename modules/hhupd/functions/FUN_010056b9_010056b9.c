/* Module: hhupd.exe
   Function: FUN_010056b9
   Address: 010056b9
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010056b9(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = GetLastError();
    return DVar1 & 0xffff | 0x80070000;
  }
  return 0;
}


