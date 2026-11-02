/* Module: sfcdi.dll
   Function: FUN_5bf116c0
   Address: 5bf116c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf116c0(LPCSTR param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar1 == ' ') {
      *param_1 = '_';
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  return;
}


