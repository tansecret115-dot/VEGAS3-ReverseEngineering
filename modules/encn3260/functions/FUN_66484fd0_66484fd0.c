/* Module: encn3260.dll
   Function: FUN_66484fd0
   Address: 66484fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66484fd0(int param_1,undefined4 *param_2,ushort param_3,int *param_4)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  if (((param_2 != (undefined4 *)0x0) && (param_3 != 0)) && (uVar3 = (uint)param_3, param_3 != 0)) {
    do {
      this = operator_new(0x25);
      if (this == (void *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_66483700(this,*param_2,*(undefined2 *)(param_2 + 1));
      }
      FUN_664baab0((void *)(param_1 + 0xda),puVar1);
      param_2 = param_2 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar2 = FUN_66485060((void *)(param_1 + -0x30),param_4);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar2;
}


