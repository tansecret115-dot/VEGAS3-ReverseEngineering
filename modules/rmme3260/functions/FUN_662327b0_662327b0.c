/* Module: rmme3260.dll
   Function: FUN_662327b0
   Address: 662327b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662327b0(int param_1,char *param_2)

{
  int iVar1;
  
  FUN_66250410((void *)(param_1 + 0xc),param_2);
  FUN_66250410((void *)(param_1 + 0x18),s_RealShared_6626fc90);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar1 = FUN_66265780(param_2);
  *(int *)(param_1 + 0x2c) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffbfff7) + 0x80040009;
}


