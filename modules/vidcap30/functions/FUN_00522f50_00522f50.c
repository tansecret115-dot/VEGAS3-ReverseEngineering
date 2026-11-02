/* Module: vidcap30.exe
   Function: FUN_00522f50
   Address: 00522f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00522f50(void)

{
  int iVar1;
  
  iVar1 = FUN_00523080();
  if (iVar1 != 0) {
    PTR_FUN_005b8660 = FUN_00522f10;
    PTR_FUN_005b8664 = FUN_00522fa0;
    PTR_FUN_005b8668 = FUN_00522fd0;
    PTR_FUN_005b866c = FUN_00522f30;
    PTR_FUN_005b8670 = FUN_00523000;
    PTR_FUN_005b8674 = FUN_00523040;
    DAT_005b8654 = 5;
  }
  return;
}


