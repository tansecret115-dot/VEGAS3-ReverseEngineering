/* Module: encn3260.dll
   Function: FUN_66486150
   Address: 66486150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66486150(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  iVar2 = 0x40042;
  puVar1 = FUN_664bbe00(*(void **)(param_1 + 0x102),(uint)param_2 & 0xffff);
  if ((void *)*puVar1 != (void *)0x0) {
    iVar2 = FUN_6648d590((void *)*puVar1,param_2,param_3);
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return iVar2;
}


