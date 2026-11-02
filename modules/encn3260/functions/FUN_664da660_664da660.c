/* Module: encn3260.dll
   Function: FUN_664da660
   Address: 664da660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664da660(int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int local_4c [5];
  int local_38 [5];
  int local_24 [2];
  void *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_8 = param_1;
  if ((param_1[4] != 0) && (local_10 = param_1[1], local_c = param_1, local_10 != 0)) {
    if (local_10 != 0) goto LAB_664da692;
    pvVar4 = (void *)0x0;
    while( true ) {
      if (pvVar4 != (void *)0x0) {
        if (*(void **)((int)pvVar4 + 0x1e) != (void *)0x0) {
          operator_delete(*(void **)((int)pvVar4 + 0x1e));
        }
        if (*(void **)((int)pvVar4 + 0x26) != (void *)0x0) {
          operator_delete(*(void **)((int)pvVar4 + 0x26));
        }
        if (*(void **)((int)pvVar4 + 0x2a) != (void *)0x0) {
          operator_delete(*(void **)((int)pvVar4 + 0x2a));
        }
        if (*(void **)((int)pvVar4 + 0x2e) != (void *)0x0) {
          operator_delete(*(void **)((int)pvVar4 + 0x2e));
        }
        if (*(void **)((int)pvVar4 + 0x3a) != (void *)0x0) {
          operator_delete(*(void **)((int)pvVar4 + 0x3a));
        }
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (void *)0x0;
        local_18 = (int *)0x0;
        local_14 = 0;
        FUN_6648f710(local_4c,(void *)((int)pvVar4 + 0x3e),
                     -(uint)(*(int *)((int)pvVar4 + 0x46) != 0));
        piVar5 = local_4c;
        piVar6 = local_24;
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        FUN_6648f710(local_38,(void *)((int)pvVar4 + 0x3e),0);
        if (local_24[0] != local_38[0]) {
          do {
            piVar6 = local_18;
            piVar5 = local_18 + 4;
            iVar3 = local_18[4];
            while (iVar3 != 0) {
              pvVar2 = (void *)FUN_664ba9f0(piVar6);
              operator_delete(pvVar2);
              iVar3 = *piVar5;
            }
            if (piVar6 != (int *)0x0) {
              (**(code **)*piVar6)(1);
            }
            local_24[0] = local_24[1];
            if (local_24[1] != 0) {
              FUN_664bbeb0(local_1c,local_24 + 1,&local_14,(int *)&local_18);
            }
            FUN_6648f710(local_38,(void *)((int)pvVar4 + 0x3e),0);
          } while (local_24[0] != local_38[0]);
        }
        if (*(void **)((int)pvVar4 + 0x56) != (void *)0x0) {
          operator_delete(*(void **)((int)pvVar4 + 0x56));
        }
        thunk_FUN_664bbcb0((undefined4 *)((int)pvVar4 + 0x3e));
        operator_delete(pvVar4);
      }
      FUN_664bab40(&local_10);
      if (local_10 == 0) break;
LAB_664da692:
      puVar1 = (undefined4 *)FUN_664bab80(local_10);
      pvVar4 = (void *)*puVar1;
    }
  }
  FUN_664ba950(local_8);
  return;
}


