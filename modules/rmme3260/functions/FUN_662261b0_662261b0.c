/* Module: rmme3260.dll
   Function: FUN_662261b0
   Address: 662261b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662261b0(void *this,int param_1,int param_2)

{
  void *this_00;
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_2 < 0) || (param_1 < 0)) || (*(int *)((int)this + 0x2a) <= param_2)) ||
     (*(int *)((int)this + 0x2a) <= param_1)) {
    local_8 = 0x80070057;
  }
  else {
    this_00 = *(void **)(*(int *)((int)this + 0x26) + param_2 * 4);
    if (this_00 == (void *)0x0) {
      return 0x80004005;
    }
    pvVar1 = *(void **)(*(int *)((int)this + 0x26) + param_1 * 4);
    if (pvVar1 == (void *)0x0) {
      return 0x80004005;
    }
    iVar2 = FUN_662198c0(this_00,(short)param_1);
    if (iVar2 == 0) {
      uVar3 = FUN_66218fa0(this_00,pvVar1);
      return uVar3;
    }
  }
  return local_8;
}


