/* Module: rmbe3260.dll
   Function: FUN_660610a0
   Address: 660610a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660610a0(int param_1,char *param_2)

{
  int iVar1;
  
  FUN_6605b970((void *)(param_1 + 0xc),param_2);
  FUN_6605b970((void *)(param_1 + 0x18),s_RealShared_6606f26c);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar1 = FUN_66051b80(param_2);
  *(int *)(param_1 + 0x2c) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffbfff7) + 0x80040009;
}


