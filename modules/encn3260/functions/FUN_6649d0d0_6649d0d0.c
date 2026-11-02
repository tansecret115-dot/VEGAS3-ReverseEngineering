/* Module: encn3260.dll
   Function: FUN_6649d0d0
   Address: 6649d0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6649d0d0(int param_1,char *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  FUN_664bb5e0((void *)(param_1 + 0xc),param_2);
  FUN_664bb5e0((void *)(param_1 + 0x18),(char *)param_3);
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  iVar1 = FUN_664d53d0(param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 0x2c) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffbfff7) + 0x80040009;
}


