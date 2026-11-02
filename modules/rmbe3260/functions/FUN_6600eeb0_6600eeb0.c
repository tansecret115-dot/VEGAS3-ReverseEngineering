/* Module: rmbe3260.dll
   Function: FUN_6600eeb0
   Address: 6600eeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600eeb0(int param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return 0x80004003;
  }
  FUN_6605b970((void *)(param_1 + 0x54),param_2);
  return 0;
}


