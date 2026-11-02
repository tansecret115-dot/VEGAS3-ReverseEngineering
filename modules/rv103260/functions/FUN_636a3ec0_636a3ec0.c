/* Module: rv103260.dll
   Function: FUN_636a3ec0
   Address: 636a3ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a3ec0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  undefined1 local_10 [8];
  undefined4 local_8;
  
  *(undefined4 *)((int)this + 0xd4) = 0;
  iVar1 = FUN_636a34f0(this,7,&local_28);
  if (iVar1 == 0) {
    if (local_28 != 0) {
      *(uint *)((int)this + 0xd4) = *(uint *)((int)this + 0xd4) | 1;
    }
    if (local_24 != 0) {
      *(uint *)((int)this + 0xd4) = *(uint *)((int)this + 0xd4) | 4;
    }
  }
  iVar1 = FUN_636a34f0(this,5,local_10);
  if (iVar1 == 0) {
    *(uint *)((int)this + 0xd4) = *(uint *)((int)this + 0xd4) | 8;
  }
  local_8 = 0;
  FUN_636a34f0(this,8,&local_8);
  *param_1 = *(int *)((int)this + 0x32) + 8;
  param_1[1] = *(int *)((int)this + 0x36);
  param_1[2] = *(int *)((int)this + 0x3a);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 0x3e);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)this + 0x40);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)this + 0x44);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)this + 0x46);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)((int)this + 0x42);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)this + 0x48);
  puVar2 = (undefined4 *)((int)param_1 + *(int *)((int)this + 0x32));
  uVar3 = FUN_636a5c00(*(undefined4 *)((int)this + 0xd4));
  *puVar2 = uVar3;
  uVar3 = FUN_636a5c00(local_8);
  puVar2[1] = uVar3;
  return 0;
}


