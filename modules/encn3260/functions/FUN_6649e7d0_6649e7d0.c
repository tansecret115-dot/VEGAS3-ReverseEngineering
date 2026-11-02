/* Module: encn3260.dll
   Function: FUN_6649e7d0
   Address: 6649e7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6649e835) */

undefined4 FUN_6649e7d0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_c;
  int *local_8;
  
  puVar4 = param_2;
  piVar2 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    if (*(void **)((int)param_1 + 0x4d) != (void *)0x0) {
      operator_delete(*(void **)((int)param_1 + 0x4d));
      *(undefined4 *)((int)piVar2 + 0x4d) = 0;
    }
    puVar1 = operator_new(0x34);
    *(undefined4 **)((int)piVar2 + 0x4d) = puVar1;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    local_c = piVar2[5];
    local_8 = piVar2 + 4;
    uVar5 = 0x80004005;
    while (local_c != 0) {
      piVar2 = (int *)FUN_664bab80(local_c);
      piVar2 = *(int **)(*piVar2 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         (iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,&param_1), iVar3 == 0)) {
        iVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
      }
      FUN_664bab40(&local_c);
    }
    return uVar5;
  }
  return 0x80004005;
}


