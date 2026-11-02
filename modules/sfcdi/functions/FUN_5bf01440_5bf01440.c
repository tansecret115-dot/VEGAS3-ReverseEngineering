/* Module: sfcdi.dll
   Function: FUN_5bf01440
   Address: 5bf01440
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf01440(HMODULE param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    FUN_5bf01360();
  }
  else if (param_2 == 1) {
    bVar1 = FUN_5bf01260(param_1);
    return bVar1;
  }
  return true;
}


