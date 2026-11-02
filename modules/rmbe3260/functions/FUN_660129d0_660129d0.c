/* Module: rmbe3260.dll
   Function: FUN_660129d0
   Address: 660129d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660129d0(int param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return 0x80004003;
  }
  FUN_6605b970((void *)(param_1 + 0x10),param_2);
  return 0;
}


