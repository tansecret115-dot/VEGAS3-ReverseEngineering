/* Module: rmto3260.dll
   Function: FUN_662d2be0
   Address: 662d2be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d2be0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar1 = operator_new(0x26);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_662d5060(puVar1);
  }
  *(int **)(param_1 + 0x30) = piVar2;
  if (piVar2 == (int *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    iVar4 = (**(code **)(*piVar2 + 4))(piVar2,*(undefined4 *)(param_1 + 0x20));
    if (-1 < iVar4) {
      if (*(void **)(param_1 + 0x54) != (void *)0x0) {
        operator_delete(*(void **)(param_1 + 0x54));
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x10))
                        (*(int **)(param_1 + 0x30),param_1 + 0x5c);
      if (-1 < iVar4) {
        pvVar3 = operator_new(*(uint *)(param_1 + 0x5c));
        *(void **)(param_1 + 0x54) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          iVar4 = -0x7ff8fff2;
        }
      }
    }
  }
  return iVar4;
}


