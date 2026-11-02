/* Module: atrc3260.dll
   Function: FUN_68002760
   Address: 68002760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68002760(char *param_1)

{
  char *pcVar1;
  
  if (DAT_680054c8 != 0) {
    pcVar1 = strchr(param_1,0x20);
    while (pcVar1 != (char *)0x0) {
      *pcVar1 = '_';
      pcVar1 = strchr(param_1,0x20);
    }
  }
  return;
}


