/* Module: sctplug.dll
   Function: FUN_0040a690
   Address: 0040a690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a690(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(char *)(iVar1 + param_1) != ' ') {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 1;
}


