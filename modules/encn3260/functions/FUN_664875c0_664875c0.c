/* Module: encn3260.dll
   Function: FUN_664875c0
   Address: 664875c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66487648) */

undefined4 FUN_664875c0(int *param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  char local_98 [64];
  int local_58 [3];
  int local_4c [3];
  int local_40 [3];
  int local_34 [3];
  char *local_28 [3];
  char *local_1c [3];
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  (**(code **)(*(int *)param_1[0x5c] + 4))();
  param_1 = operator_new(0x40);
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    FUN_664bd560(param_1);
    FUN_664bb2c0(param_1 + 0xd);
    *param_1 = (int)&PTR_FUN_664de0d0;
  }
  FUN_664bb5e0(param_1 + 0xd,(char *)piVar2[0x1b]);
  FUN_664bb2c0(local_28);
  FUN_664bb2c0(local_1c);
  bVar6 = true;
  local_8 = 1;
  local_10 = *(int *)(param_2 + 4);
  local_c = param_2;
  while (local_10 != 0) {
    puVar3 = (undefined4 *)FUN_664bab80(local_10);
    puVar1 = (ushort *)*puVar3;
    sprintf(local_98,s_stream__d_rule__ld_664e2590,(uint)puVar1[1],(uint)*puVar1);
    if (*(int *)(puVar1 + 2) == 0) {
      if (local_8 == 0) {
        puVar3 = FUN_664bb450(local_4c,local_98);
        puVar3 = FUN_664bb720(local_40,&DAT_664e258c,puVar3);
        FUN_664bb870(local_1c,puVar3);
        FUN_664bb3e0(local_40);
        FUN_664bb3e0(local_4c);
      }
      else {
        FUN_664bb810(local_1c,local_98);
        local_8 = 0;
      }
    }
    else if (bVar6) {
      FUN_664bb810(local_28,local_98);
      bVar6 = false;
    }
    else {
      puVar3 = FUN_664bb450(local_58,local_98);
      puVar3 = FUN_664bb720(local_34,&DAT_664e258c,puVar3);
      FUN_664bb870(local_28,puVar3);
      FUN_664bb3e0(local_34);
      FUN_664bb3e0(local_58);
    }
    FUN_664bab40(&local_10);
  }
  if (!bVar6) {
    FUN_664bd620(param_1,s_Subscribe_664e2580,local_28[0],0);
  }
  if (local_8 == 0) {
    FUN_664bd620(param_1,s_UnSubscribe_664e2574,local_1c[0],0);
  }
  FUN_664bd620(param_1,s_Session_664e23cc,*(char **)((int)piVar2 + 0xb6),0);
  iVar4 = FUN_6648bad0((void *)piVar2[0x10],(int)(piVar2 + -0xc));
  uVar5 = FUN_6648c6d0(piVar2 + -0xc,param_1,iVar4);
  (**(code **)(*(int *)piVar2[0x5c] + 8))();
  FUN_664bb3e0((int *)local_1c);
  FUN_664bb3e0((int *)local_28);
  return uVar5;
}


