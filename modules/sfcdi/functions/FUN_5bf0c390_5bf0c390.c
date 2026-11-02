/* Module: sfcdi.dll
   Function: FUN_5bf0c390
   Address: 5bf0c390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0c390(byte *param_1,uint *param_2)

{
  if ((*param_1 & 1) != 0) {
    FUN_5bf0c240((int)param_1,param_2);
    return;
  }
  FUN_5bf0c2e0((int)param_1,param_2);
  return;
}


