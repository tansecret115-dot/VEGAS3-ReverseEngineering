/* Module: encn3260.dll
   Function: FUN_664d00b0
   Address: 664d00b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664d0126) */

undefined4 FUN_664d00b0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar2 = param_1;
  piVar1 = *(int **)(param_1[4] + 0x30);
  local_10 = 0;
  local_c = 0;
  param_1[3] = 0;
  iVar3 = FUN_664cf460(piVar1);
  if (iVar3 != 0) {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_664c3a90(puVar4);
    }
    piVar2[2] = (int)pvVar5;
    FUN_664c3ab0(pvVar5,1,0xffffffff);
    local_c = *piVar1;
    local_10 = *(int *)(local_c + 4);
    while (local_10 != 0) {
      puVar4 = (undefined4 *)FUN_664bab80(local_10);
      pvVar5 = (void *)*puVar4;
      FUN_664cf5e0(pvVar5,&param_1);
      if (param_1 != (int *)0x0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,&local_8);
        if (iVar3 == 0) {
          FUN_664c3c20((void *)piVar2[2],piVar2[3],pvVar5);
          (**(code **)(*local_8 + 8))(local_8);
          piVar2[3] = piVar2[3] + 1;
        }
        (**(code **)(*param_1 + 8))(param_1);
        FUN_66494490();
      }
      FUN_664bab40(&local_10);
    }
    return 0;
  }
  return 0x80004005;
}


