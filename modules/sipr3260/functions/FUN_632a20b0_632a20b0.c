/* Module: sipr3260.dll
   Function: FUN_632a20b0
   Address: 632a20b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632a20b0(char *param_1)

{
  char *pcVar1;
  
  if (DAT_632a53b8 != 0) {
    pcVar1 = strchr(param_1,0x20);
    while (pcVar1 != (char *)0x0) {
      *pcVar1 = '_';
      pcVar1 = strchr(param_1,0x20);
    }
  }
  return;
}


