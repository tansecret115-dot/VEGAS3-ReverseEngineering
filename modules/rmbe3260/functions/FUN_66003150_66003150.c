/* Module: rmbe3260.dll
   Function: FUN_66003150
   Address: 66003150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66003150(void *this,undefined4 param_1)

{
  int iVar1;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)((int)this + 0x104) + 0xc))(*(int **)((int)this + 0x104),param_1,&local_8);
  (**(code **)(*local_8 + 0x10))(local_8,0xc,&local_c);
  iVar1 = (**(code **)*local_c)(local_c,&DAT_66065c38,&local_10);
  if (-1 < iVar1) {
    (**(code **)(*local_10 + 0x1c))(local_10,&param_1);
    FUN_66002fa0((int)this);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return;
}


