/* Module: encn3260.dll
   Function: FUN_66497d80
   Address: 66497d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66497d80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_2 == (int *)0x0) {
    return -0x7ffbfff7;
  }
  *(int **)(param_1 + 0x10) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)**(undefined4 **)(param_1 + 0x10))
            (*(undefined4 **)(param_1 + 0x10),&DAT_664dc770,param_1 + 0x5c);
  piVar1 = operator_new(0x1a);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_664be6e0(piVar1,0x200,1);
    *piVar1 = (int)&PTR_LAB_664de168;
  }
  *(int **)(param_1 + 0x22) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 != 0) {
      FUN_664be8a0(*(void **)(param_1 + 0x22),0x7fa6);
      piVar1 = operator_new(0x1a);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        FUN_664be6e0(piVar1,0x200,1);
        *piVar1 = (int)&PTR_LAB_664de168;
      }
      *(int **)(param_1 + 0x26) = piVar1;
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 8))();
        if (iVar2 != 0) {
          FUN_664be8a0(*(void **)(param_1 + 0x26),0x7fa6);
          pvVar3 = operator_new(0x7fa6);
          *(void **)(param_1 + 0x3e) = pvVar3;
          return (-(uint)(pvVar3 != (void *)0x0) & 0x7ff8fff2) + 0x8007000e;
        }
      }
    }
  }
  return -0x7ff8fff2;
}


