/* Module: rmbe3260.dll
   Function: FUN_6603ed00
   Address: 6603ed00
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_6603ed00(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  void *this;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  bVar2 = FUN_66041600(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    iVar4 = FUN_6603f6e0(param_1);
    if (iVar4 == 0) {
      iVar4 = FUN_6603f360();
      if (iVar4 == 0) goto LAB_6603ed88;
      puVar3 = operator_new(0xa6);
      if (puVar3 != (undefined4 *)0x0) {
        piVar5 = FUN_6603f300(puVar3);
        goto LAB_6603ed88;
      }
    }
    else {
      puVar3 = operator_new(0x288);
      if (puVar3 != (undefined4 *)0x0) {
        piVar5 = FUN_6603f3e0(puVar3);
        goto LAB_6603ed88;
      }
    }
  }
  else {
    puVar3 = operator_new(0x148);
    if (puVar3 != (undefined4 *)0x0) {
      piVar5 = FUN_66041480(puVar3);
      goto LAB_6603ed88;
    }
  }
  piVar5 = (int *)0x0;
LAB_6603ed88:
  if (piVar5 != (int *)0x0) {
    this = operator_new(0x6d);
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_66056230(this,*(char **)(param_1 + 0x14),1,0);
    }
    *(undefined4 **)((int)piVar5 + 0x56) = puVar3;
    uVar1 = *(undefined2 *)(param_2 + 0x14);
    *(int *)((int)piVar5 + 0x42) = param_2;
    *(undefined2 *)(piVar5 + 0x10) = uVar1;
    FUN_6605b970((void *)((int)piVar5 + 0x46),*(char **)(param_1 + 0x14));
    *(undefined4 *)((int)piVar5 + 0x52) = *(undefined4 *)(param_2 + 0xc);
    iVar4 = (**(code **)(*piVar5 + 0x3c))(param_1,param_3);
    *(int *)(param_2 + 0x24) = iVar4;
    if (iVar4 == 0) {
      *(uint *)((int)piVar5 + 0x6a) = (uint)piVar5[4] >> 3;
      *(int **)(param_2 + 8) = piVar5;
      FUN_6603e2f0(*(void **)((int)piVar5 + 0x52),*(int *)(param_2 + 0x14),
                   *(undefined4 *)((int)piVar5 + 0x56));
      return piVar5;
    }
    puVar3 = *(undefined4 **)((int)piVar5 + 0x56);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_66056360(puVar3);
      operator_delete(puVar3);
    }
    (**(code **)*piVar5)(1);
  }
  return (int *)0x0;
}


