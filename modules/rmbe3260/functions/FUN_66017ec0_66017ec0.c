/* Module: rmbe3260.dll
   Function: FUN_66017ec0
   Address: 66017ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66017ec0(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_66017d60((void *)(param_1 + -0x14),param_2);
  if (iVar1 < 0) {
    return 0x80070057;
  }
  *(undefined2 *)(param_2 + 8) = param_3;
  return 0;
}


