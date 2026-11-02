/* Module: sfcdi.dll
   Function: FUN_5bf1cb50
   Address: 5bf1cb50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1cb50(LPCSTR param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  return;
}


