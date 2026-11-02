/* Module: dnet3260.dll
   Function: FUN_630525e0
   Address: 630525e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_630525e0(char *param_1)

{
  char *pcVar1;
  
  if (DAT_63055518 != 0) {
    pcVar1 = strchr(param_1,0x20);
    while (pcVar1 != (char *)0x0) {
      *pcVar1 = '_';
      pcVar1 = strchr(param_1,0x20);
    }
  }
  return;
}


