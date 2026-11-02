/* Module: wmfplug2.dll
   Function: FUN_00419310
   Address: 00419310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419310(undefined4 *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *(char *)*param_1;
    if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\n')) && (cVar1 != '\r')) break;
    *param_1 = (char *)*param_1 + 1;
  }
  return;
}


