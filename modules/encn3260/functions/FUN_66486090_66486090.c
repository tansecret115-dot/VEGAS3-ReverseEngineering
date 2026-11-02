/* Module: encn3260.dll
   Function: FUN_66486090
   Address: 66486090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66486090(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  uVar3 = 0x80040009;
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  piVar2 = FUN_664bbe00(*(void **)(param_1 + 0x102),uVar1 & 0xffff);
  if ((int *)*piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*(int *)*piVar2 + 0x2c))(param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar3;
}


