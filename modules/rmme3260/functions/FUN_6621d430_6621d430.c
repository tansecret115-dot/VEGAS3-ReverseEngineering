/* Module: rmme3260.dll
   Function: FUN_6621d430
   Address: 6621d430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6621d430(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_c;
  int local_8;
  
  *param_1 = &PTR_FUN_6626bb80;
  local_c = 0;
  if (param_1[0x39] != 0) {
    local_8 = 0;
    do {
      if (param_1[0x3b] != 0) {
        iVar1 = *(int *)(local_8 + 4 + param_1[0x3b]);
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
          piVar2 = *(int **)(*(int *)(local_8 + param_1[0x3b]) + iVar1 * 4);
          FUN_6624ffe0((void *)(local_8 + param_1[0x3b]),iVar1,1);
          if (piVar2 != (int *)0x0) {
            if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*piVar2)(1);
              *piVar2 = 0;
            }
            operator_delete(piVar2);
          }
        }
      }
      if ((param_1[0x3b] != 0) &&
         (pvVar3 = *(void **)(local_8 + 0x36 + param_1[0x3b]), pvVar3 != (void *)0x0)) {
        operator_delete(pvVar3);
        *(undefined4 *)(local_8 + 0x36 + param_1[0x3b]) = 0;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 0x3a;
    } while (local_c < (uint)param_1[0x39]);
  }
  iVar1 = param_1[0x3b];
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + -4);
    puVar4 = (undefined4 *)(iVar1 + iVar5 * 0x3a);
    if (-1 < iVar5 + -1) {
      do {
        puVar4 = (undefined4 *)((int)puVar4 + -0x3a);
        FUN_6624fd90(puVar4);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    operator_delete((void *)(iVar1 + -4));
    param_1[0x3b] = 0;
  }
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
    param_1[0x36] = 0;
  }
  if ((undefined4 *)param_1[0x44] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x44])(1);
    param_1[0x44] = 0;
  }
  piVar2 = (int *)param_1[0x45];
  if (piVar2 != (int *)0x0) {
    FUN_662247d0(piVar2);
    operator_delete(piVar2);
    param_1[0x45] = 0;
  }
  FUN_66250ed0(param_1 + 0x3d);
  FUN_66208db0(param_1);
  return;
}


