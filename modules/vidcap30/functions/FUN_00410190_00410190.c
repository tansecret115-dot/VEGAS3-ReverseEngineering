/* Module: vidcap30.exe
   Function: FUN_00410190
   Address: 00410190
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410190(void)

{
  int iVar1;
  
  iVar1 = _SfGetUIFontSize_4(100);
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 < 0x15) {
    iVar1 = 0x14;
  }
  return iVar1;
}


