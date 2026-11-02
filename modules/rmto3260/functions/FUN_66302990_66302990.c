/* Module: rmto3260.dll
   Function: FUN_66302990
   Address: 66302990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66302990(int param_1,char *param_2)

{
  int iVar1;
  
  FUN_662ef2f0((void *)(param_1 + 0xc),param_2);
  FUN_662ef2f0((void *)(param_1 + 0x18),s_RealShared_66311c00);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar1 = FUN_663048a0(param_2);
  *(int *)(param_1 + 0x2c) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffbfff7) + 0x80040009;
}


