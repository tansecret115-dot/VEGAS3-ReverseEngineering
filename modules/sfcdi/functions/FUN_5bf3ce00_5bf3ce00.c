/* Module: sfcdi.dll
   Function: FUN_5bf3ce00
   Address: 5bf3ce00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3ce00(int param_1,LPSTR param_2,uint param_3)

{
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x254));
    if (0x1ff < param_3) {
      param_3 = 0x200;
    }
    lstrcpynA(param_2,(LPCSTR)(param_1 + 0x54),param_3);
    param_2[param_3 - 1] = '\0';
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x254));
  }
  return;
}


