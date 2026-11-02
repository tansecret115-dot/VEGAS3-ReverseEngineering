/* Module: sfcdi.dll
   Function: FUN_5bf1a870
   Address: 5bf1a870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1a870(LPSTR param_1,LPSTR param_2)

{
  char cVar1;
  LPSTR lpsz;
  
  *param_1 = '\0';
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    *param_1 = '\0';
    return;
  }
  do {
    if (cVar1 == ' ') {
      *param_1 = '%';
      lpsz = CharNextA(param_1);
      *lpsz = '2';
      param_1 = CharNextA(lpsz);
      *param_1 = '0';
    }
    else {
      *param_1 = cVar1;
    }
    param_2 = CharNextA(param_2);
    param_1 = CharNextA(param_1);
    cVar1 = *param_2;
  } while (cVar1 != '\0');
  *param_1 = '\0';
  return;
}


