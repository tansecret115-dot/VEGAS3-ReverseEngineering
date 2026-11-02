/* Module: sfcdi.dll
   Function: FUN_5bf0c050
   Address: 5bf0c050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0c050(uint *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_5bf0be00((int)param_1);
    *param_1 = *param_1 & 0xfffffffe;
    return;
  }
  if (param_1[7] != 0xffffffff) {
    FUN_5bf0be00((int)param_1);
    CloseHandle((HANDLE)param_1[7]);
    param_1[7] = 0xffffffff;
  }
  return;
}


