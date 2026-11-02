/* Module: mcplug.dll
   Function: FUN_004012c0
   Address: 004012c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004012c0(HMODULE param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    FUN_00401150();
  }
  else if (param_2 == 1) {
    bVar1 = FUN_00401000(param_1);
    return bVar1;
  }
  return true;
}


