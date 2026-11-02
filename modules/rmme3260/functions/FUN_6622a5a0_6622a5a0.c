/* Module: rmme3260.dll
   Function: FUN_6622a5a0
   Address: 6622a5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6622a72b) */
/* WARNING: Removing unreachable block (ram,0x6622a77c) */

int FUN_6622a5a0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_40 [5];
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  int local_18 [3];
  void *local_c;
  int local_8;
  
  local_8 = 0;
  FUN_662500f0(local_18);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
    piVar1 = operator_new(0x6c);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = (int)&PTR_LAB_6626b730;
      piVar1[1] = 0;
      FUN_66252680(piVar1 + 2,10);
      FUN_66252680(piVar1 + 9,10);
      FUN_66252680(piVar1 + 0x10,10);
      piVar1[0x17] = 0;
      piVar1[0x18] = 0;
      piVar1[0x19] = 0;
      piVar1[0x1a] = 0;
      *piVar1 = (int)&PTR_FUN_6626b6f0;
    }
    FUN_66252010(piVar1,param_1);
    (**(code **)(*param_1 + 8))();
    puVar2 = (undefined4 *)FUN_66265040(local_40);
    local_2c = (undefined2)*puVar2;
    uStack_2a = (undefined2)((uint)*puVar2 >> 0x10);
    local_28 = (undefined2)puVar2[1];
    uStack_26 = (undefined2)((uint)puVar2[1] >> 0x10);
    local_20 = (undefined2)puVar2[3];
    uStack_1e = (undefined2)((uint)puVar2[3] >> 0x10);
    local_1c = *(undefined2 *)(puVar2 + 4);
    FUN_662508c0(local_18,s__d__d__d__d___2d___2d_6626fa80);
    puVar2 = operator_new(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_662522d0(puVar2);
    }
    iVar4 = -0x7ff8fff2;
    if (piVar3 != (int *)0x0) {
      iVar4 = local_8;
    }
    if (-1 < iVar4) {
      (**(code **)(*piVar3 + 4))();
      (**(code **)(*piVar3 + 0x10))();
      iVar4 = (**(code **)(*piVar1 + 0x2c))();
      if (-1 < iVar4) {
        (**(code **)(*piVar1 + 0x30))();
        iVar4 = (**(code **)(*piVar1 + 0x2c))();
        if (-1 < iVar4) {
          iVar4 = FUN_6622cf90(piVar1,0);
        }
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    if (-1 < iVar4) {
      FUN_66250280(&stack0xffffff98,s_fileinfo_6626f8c8);
      FUN_66225f40(local_c);
      (**(code **)(*(int *)**(undefined4 **)((int)local_c + 0x26) + 0x34))();
    }
    FUN_66250210(local_18);
    return iVar4;
  }
  FUN_66250210(local_18);
  return -0x7fffbffd;
}


