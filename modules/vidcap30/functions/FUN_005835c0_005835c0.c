/* Module: vidcap30.exe
   Function: FUN_005835c0
   Address: 005835c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005835c0(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    return DVar1 & 0xffff | 0x80070000;
  }
  return 0x80004005;
}


