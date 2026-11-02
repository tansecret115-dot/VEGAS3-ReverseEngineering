/* Module: rmbe3260.dll
   Function: FUN_6600de80
   Address: 6600de80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600de80(int param_1,char *param_2)

{
  if ((*(int *)(param_1 + 4) != 1) && (*(int *)(param_1 + 4) != 2)) {
    return 0x80040007;
  }
  if (param_2 == (char *)0x0) {
    return 0x80004003;
  }
  FUN_6605b970((void *)(param_1 + 0xb),param_2);
  return 0;
}


