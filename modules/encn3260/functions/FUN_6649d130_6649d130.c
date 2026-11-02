/* Module: encn3260.dll
   Function: FUN_6649d130
   Address: 6649d130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6649d130(int param_1,char *param_2)

{
  int iVar1;
  
  FUN_664bb5e0((void *)(param_1 + 0xc),param_2);
  FUN_664bb5e0((void *)(param_1 + 0x18),s_RealShared_664e31dc);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar1 = FUN_664d5420(param_2);
  *(int *)(param_1 + 0x2c) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffbfff7) + 0x80040009;
}


