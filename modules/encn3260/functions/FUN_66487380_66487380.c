/* Module: encn3260.dll
   Function: FUN_66487380
   Address: 66487380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66487380(int param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  *param_5 = 0;
  *param_6 = 0;
  if (*(int *)(param_1 + 0x102) == 0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  puVar1 = FUN_664bbe00(*(void **)(param_1 + 0x102),param_2 & 0xffff);
  if ((void *)*puVar1 != (void *)0x0) {
    uVar2 = FUN_6648da00((void *)*puVar1,param_2,param_3,param_4,param_5,param_6);
    (**(code **)(**(int **)(param_1 + 0x170) + 8))();
    return uVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return 0;
}


