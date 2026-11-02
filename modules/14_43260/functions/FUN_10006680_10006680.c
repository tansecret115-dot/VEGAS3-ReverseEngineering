/* Module: 14_43260.dll
   Function: FUN_10006680
   Address: 10006680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006680(char *param_1)

{
  char *pcVar1;
  
  if (DAT_10016058 != 0) {
    pcVar1 = strchr(param_1,0x20);
    while (pcVar1 != (char *)0x0) {
      *pcVar1 = '_';
      pcVar1 = strchr(param_1,0x20);
    }
  }
  return;
}


