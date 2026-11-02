/* Module: rmbe3260.dll
   Function: FUN_66061040
   Address: 66061040
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66061040(int param_1,char *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  FUN_6605b970((void *)(param_1 + 0xc),param_2);
  FUN_6605b970((void *)(param_1 + 0x18),(char *)param_3);
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  iVar1 = FUN_66061e00(param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 0x2c) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffbfff7) + 0x80040009;
}


