/* Module: encn3260.dll
   Function: FUN_664877d0
   Address: 664877d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66487841) */

undefined4 FUN_664877d0(int param_1,int param_2)

{
  bool bVar1;
  int *this;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char local_70 [64];
  int local_30 [3];
  int local_24 [3];
  char *local_18 [3];
  int local_c;
  int local_8;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  this = operator_new(0x40);
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_664bd560(this);
    FUN_664bb2c0(this + 0xd);
    *this = (int)&PTR_FUN_664de0d0;
  }
  FUN_664bb5e0(this + 0xd,*(char **)(param_1 + 0x6c));
  FUN_664bb2c0(local_18);
  bVar1 = true;
  local_c = *(int *)(param_2 + 4);
  local_8 = param_2;
  while (local_c != 0) {
    puVar2 = (undefined4 *)FUN_664bab80(local_c);
    sprintf(local_70,s_stream__d_rule__ld_664e2590,(uint)((ushort *)*puVar2)[1],
            (uint)*(ushort *)*puVar2);
    if (bVar1) {
      FUN_664bb810(local_18,local_70);
    }
    else {
      puVar2 = FUN_664bb450(local_30,local_70);
      puVar2 = FUN_664bb720(local_24,&DAT_664e258c,puVar2);
      FUN_664bb870(local_18,puVar2);
      FUN_664bb3e0(local_24);
      FUN_664bb3e0(local_30);
    }
    bVar1 = false;
    FUN_664bab40(&local_c);
  }
  FUN_664bd620(this,s_Subscribe_664e2580,local_18[0],0);
  FUN_664bd620(this,s_Session_664e23cc,*(char **)(param_1 + 0xb6),0);
  iVar3 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
  uVar4 = FUN_6648c6d0((void *)(param_1 + -0x30),this,iVar3);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  FUN_664bb3e0((int *)local_18);
  return uVar4;
}


