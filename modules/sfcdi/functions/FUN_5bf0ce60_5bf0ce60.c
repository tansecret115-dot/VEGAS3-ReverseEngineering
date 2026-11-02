/* Module: sfcdi.dll
   Function: FUN_5bf0ce60
   Address: 5bf0ce60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf0ce60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) &&
     ((*(byte *)(param_1 + 8) < 0x20 || (iVar1 = 10, 0xbf < *(byte *)(param_1 + 8))))) {
    iVar1 = 6;
  }
  return iVar1;
}


