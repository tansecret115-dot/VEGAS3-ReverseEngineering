/* Module: wmfdist2.exe
   Function: FUN_01001d60
   Address: 01001d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001d60(void)

{
  LSTATUS LVar1;
  HKEY local_8;
  
  if (DAT_0100a310 != '\0') {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Microsoft_Windows_Curre_0100a0d8,0,0x20006,
                          &local_8);
    if (LVar1 == 0) {
      RegDeleteValueA(local_8,&DAT_0100a310);
      RegCloseKey(local_8);
    }
  }
  return;
}


