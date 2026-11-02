/* Module: 28_83260.dll
   Function: FUN_10006880
   Address: 10006880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006880(char *param_1)

{
  char *pcVar1;
  
  if (DAT_1000cd68 != 0) {
    pcVar1 = strchr(param_1,0x20);
    while (pcVar1 != (char *)0x0) {
      *pcVar1 = '_';
      pcVar1 = strchr(param_1,0x20);
    }
  }
  return;
}


