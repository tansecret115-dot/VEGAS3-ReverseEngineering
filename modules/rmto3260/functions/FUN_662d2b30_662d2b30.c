/* Module: rmto3260.dll
   Function: FUN_662d2b30
   Address: 662d2b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d2b30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  puVar1 = operator_new(0x26);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_662d69b0(puVar1);
  }
  *(int **)(param_1 + 0x34) = piVar2;
  if (piVar2 == (int *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    iVar4 = (**(code **)(*piVar2 + 4))(piVar2,*(undefined4 *)(param_1 + 0x1c));
    if (-1 < iVar4) {
      if (*(void **)(param_1 + 0x50) != (void *)0x0) {
        operator_delete(*(void **)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
                        (*(int **)(param_1 + 0x34),param_1 + 0x58);
      if (-1 < iVar4) {
        pvVar3 = operator_new(*(uint *)(param_1 + 0x58));
        *(void **)(param_1 + 0x50) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          iVar4 = -0x7ff8fff2;
        }
      }
    }
  }
  return iVar4;
}


