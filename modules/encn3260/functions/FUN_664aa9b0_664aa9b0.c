/* Module: encn3260.dll
   Function: FUN_664aa9b0
   Address: 664aa9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664aa9b0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_2c [2];
  void *local_24;
  int local_20 [4];
  void *local_10;
  void *local_c;
  int local_8;
  
  piVar2 = *(int **)((int)this + 0x140);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x140) = 0;
  }
  *(int **)((int)this + 0x140) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  local_2c[0] = -(uint)(*(int *)((int)this + 0x3c) != 0);
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = (void *)0x0;
  local_c = (void *)0x0;
  local_8 = 0;
  local_2c[1] = local_2c[0];
  local_24 = (void *)((int)this + 0x30);
  local_20[0] = 0;
  local_20[1] = 0;
  if (local_2c[0] != 0) {
    FUN_664c4010((void *)((int)this + 0x30),local_2c + 1,local_20 + 1,local_20);
  }
  piVar2 = local_2c;
  piVar3 = local_20 + 2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  while (local_20[2] != 0) {
    FUN_664aa9b0(local_c,param_1);
    local_20[2] = local_20[3];
    if (local_20[3] != 0) {
      FUN_664c4010(local_10,local_20 + 3,&local_8,(int *)&local_c);
    }
  }
  return;
}


