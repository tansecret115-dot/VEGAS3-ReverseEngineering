/* Module: rmbe3260.dll
   Function: FUN_66050f10
   Address: 66050f10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_66050f10(void *this,int param_1,undefined4 param_2)

{
  int *this_00;
  uint uVar1;
  int *local_10;
  int *local_c;
  int *local_8;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0x80004005;
  }
  if ((*(uint *)((int)this + 0x18) <= *(uint *)((int)this + 0x10)) &&
     (*(uint *)((int)this + 0x1c) <= *(uint *)((int)this + 0x14))) {
    return 0x80004005;
  }
  this_00 = (int *)FUN_66050b40();
  (**(code **)(*this_00 + 4))(this_00);
  uVar1 = FUN_66050c80(this_00,*(HANDLE *)((int)this + 8),*(DWORD *)((int)this + 0x10),
                       *(uint *)((int)this + 0x14),param_1);
  if (-1 < (int)uVar1) {
    (**(code **)*this_00)(this_00,&DAT_66064f48,&local_10);
    FUN_6605f930(&local_8);
    (**(code **)*local_8)(local_8,&DAT_660657e8,&local_c);
    (**(code **)(*local_c + 0x14))(local_c,local_10,0,param_1);
    (**(code **)*local_8)(local_8,&DAT_66064f48,param_2);
    (**(code **)(*(int *)this + 0x20))(param_1,1);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
  }
  if (this_00 != (int *)0x0) {
    (**(code **)(*this_00 + 8))(this_00);
  }
  return uVar1;
}


