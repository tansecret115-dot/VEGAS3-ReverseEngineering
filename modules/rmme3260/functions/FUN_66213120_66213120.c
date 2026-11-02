/* Module: rmme3260.dll
   Function: FUN_66213120
   Address: 66213120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66213120(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x108) != 0) {
        pvVar1 = *(void **)(iVar4 + 4 + *(int *)(param_1 + 0x108));
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          *(undefined4 *)(iVar4 + 4 + *(int *)(param_1 + 0x108)) = 0;
        }
        if ((*(int *)(iVar4 + 0xc + *(int *)(param_1 + 0x108)) != 0) &&
           (iVar3 = *(int *)(iVar4 + *(int *)(param_1 + 0x108) + 8), iVar3 != 0)) {
          FUN_662687a0(iVar3);
          piVar2 = *(int **)(iVar4 + 8 + *(int *)(param_1 + 0x108));
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *(undefined4 *)(iVar4 + 8 + *(int *)(param_1 + 0x108)) = 0;
          }
        }
        pvVar1 = *(void **)(iVar4 + 0x10 + *(int *)(param_1 + 0x108));
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          *(undefined4 *)(iVar4 + 0x10 + *(int *)(param_1 + 0x108)) = 0;
        }
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x18;
    } while (local_8 < *(uint *)(param_1 + 0xfc));
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x110) != 0) {
        pvVar1 = *(void **)(iVar4 + *(int *)(param_1 + 0x110));
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x110)) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x110) + iVar4;
        if ((*(int *)(iVar3 + 8) != 0) && (iVar3 = *(int *)(iVar3 + 4), iVar3 != 0)) {
          FUN_662687a0(iVar3);
          piVar2 = *(int **)(iVar4 + 4 + *(int *)(param_1 + 0x110));
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *(undefined4 *)(iVar4 + 4 + *(int *)(param_1 + 0x110)) = 0;
          }
        }
        pvVar1 = *(void **)(iVar4 + 0xc + *(int *)(param_1 + 0x110));
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          *(undefined4 *)(iVar4 + 0xc + *(int *)(param_1 + 0x110)) = 0;
        }
        piVar2 = *(int **)(iVar4 + 0x1e + *(int *)(param_1 + 0x110));
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(iVar4 + 0x1e + *(int *)(param_1 + 0x110)) = 0;
        }
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x2a;
    } while (local_8 < *(uint *)(param_1 + 0x10c));
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return 0;
}


