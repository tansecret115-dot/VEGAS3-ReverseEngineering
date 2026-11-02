/* Module: encn3260.dll
   Function: FUN_664aaf90
   Address: 664aaf90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664aaf90(void *this,int param_1,int param_2)

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
  
  iVar1 = FUN_664b14e0(*(void **)((int)this + 0x74),1);
  if (iVar1 == 0) {
    FUN_664b2840(*(void **)((int)this + 0x74),param_1,param_2);
  }
  local_24 = (void *)((int)this + 0x30);
  local_2c[0] = -(uint)(*(int *)((int)this + 0x3c) != 0);
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = (void *)0x0;
  local_c = (void *)0x0;
  local_8 = 0;
  local_2c[1] = local_2c[0];
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
    FUN_664aaf90(local_c,param_1,param_2);
    local_20[2] = local_20[3];
    if (local_20[3] != 0) {
      FUN_664c4010(local_10,local_20 + 3,&local_8,(int *)&local_c);
    }
  }
  return;
}


