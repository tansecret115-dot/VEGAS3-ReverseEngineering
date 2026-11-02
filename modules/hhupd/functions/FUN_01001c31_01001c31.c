/* Module: hhupd.exe
   Function: FUN_01001c31
   Address: 01001c31
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001c31(void)

{
  LSTATUS LVar1;
  HKEY local_8;
  
  if (DAT_0100a300 != '\0') {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Microsoft_Windows_Curre_0100a0d8,0,0x20006,
                          &local_8);
    if (LVar1 == 0) {
      RegDeleteValueA(local_8,&DAT_0100a300);
      RegCloseKey(local_8);
    }
  }
  return;
}


