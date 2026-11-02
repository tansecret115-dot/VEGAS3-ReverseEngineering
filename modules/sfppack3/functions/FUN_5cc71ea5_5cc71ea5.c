/* Module: sfppack3.dll
   Function: FUN_5cc71ea5
   Address: 5cc71ea5
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc71ea5(undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_5cc93248) {
    do {
      if (param_2 == 0) {
        uVar1 = FUN_5cc71df0();
      }
      else {
        uVar1 = FUN_5cc71c64();
      }
    } while ((-1 < (int)uVar1) && (local_8 = local_8 + 1, local_8 < DAT_5cc93248));
  }
  return;
}


