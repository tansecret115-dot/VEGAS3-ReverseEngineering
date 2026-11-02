/* Module: wmfdist2.exe
   Function: FUN_010058e2
   Address: 010058e2
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_010058e2(void)

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


