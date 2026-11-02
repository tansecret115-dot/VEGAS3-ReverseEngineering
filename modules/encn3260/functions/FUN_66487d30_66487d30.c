/* Module: encn3260.dll
   Function: FUN_66487d30
   Address: 66487d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66487d30(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  piVar1 = FUN_664bbe00(*(void **)(param_1 + 0x102),param_2 & 0xffff);
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 0x58))(param_2,param_3);
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return 0;
}


