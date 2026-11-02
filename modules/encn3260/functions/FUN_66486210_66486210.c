/* Module: encn3260.dll
   Function: FUN_66486210
   Address: 66486210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66486210(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  uVar2 = 0x80004005;
  piVar1 = FUN_664bbe00(*(void **)(param_1 + 0x102),param_2 & 0xffff);
  if ((int *)*piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)*piVar1 + 0x60))(param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar2;
}


