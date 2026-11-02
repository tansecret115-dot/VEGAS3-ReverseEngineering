/* Module: vidcap30.exe
   Function: FUN_0042e290
   Address: 0042e290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e290(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1c8) == 0) {
      iVar1 = _SfDoesFileExist_4((uchar *)(param_1 + 0xbc));
      if (iVar1 != 0) {
        _mbscpy(&DAT_005ba580,(uchar *)(param_1 + 0xbc));
        return;
      }
    }
    DAT_005ba580 = 0;
  }
  return;
}


