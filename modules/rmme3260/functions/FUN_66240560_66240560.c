/* Module: rmme3260.dll
   Function: FUN_66240560
   Address: 66240560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66240560(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_2c [2];
  void *local_24;
  int local_20 [4];
  void *local_10;
  void *local_c;
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((int)this + 0x110);
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    puVar2 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x110);
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = (void *)0x0;
  local_c = (void *)0x0;
  local_8 = 0;
  local_24 = (void *)((int)this + 0x30);
  local_2c[0] = -(uint)(*(int *)((int)this + 0x3c) != 0);
  local_2c[1] = local_2c[0];
  local_20[0] = 0;
  local_20[1] = 0;
  if (local_2c[0] != 0) {
    FUN_66251190((void *)((int)this + 0x30),local_2c + 1,local_20 + 1,local_20);
  }
  piVar3 = local_2c;
  piVar5 = local_20 + 2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  while (local_20[2] != 0) {
    FUN_66240560(local_c,param_1);
    local_20[2] = local_20[3];
    if (local_20[3] != 0) {
      FUN_66251190(local_10,local_20 + 3,&local_8,(int *)&local_c);
    }
  }
  return;
}


