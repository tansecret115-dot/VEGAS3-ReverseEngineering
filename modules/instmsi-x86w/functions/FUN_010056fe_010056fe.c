/* Module: InstMsi-x86w.exe
   Function: FUN_010056fe
   Address: 010056fe
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_010056fe(void)

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


