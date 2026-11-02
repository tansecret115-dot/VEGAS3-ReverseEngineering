/* Module: rmme3260.dll
   Function: FUN_66247ce0
   Address: 66247ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66247ce0(void *this,int param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  tagRECT local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14 [2];
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x4a2) == 1) {
    iVar1 = FUN_6623f970(*(int *)((int)this + 0x3a));
    if (((iVar1 == 0) || (*(int *)(iVar1 + 0xfc) == 0)) &&
       ((*(int *)((int)this + 0x4ba) != 0 ||
        (((*(int *)((int)this + 0x4c2) != 0 || (*(int *)((int)this + 0x4be) != 0)) ||
         (*(int *)((int)this + 0x4c6) != 0)))))) {
      FUN_6623f390(*(void **)((int)this + 0x3a),&local_34);
      (**(code **)(**(int **)((int)this + 0x3a) + 0x2c))(*(int **)((int)this + 0x3a),&local_c);
      this_00 = *(void **)((int)this + 0x3a);
      local_24 = local_c + *(int *)((int)this_00 + 0xd4);
      local_20 = *(int *)((int)this_00 + 0xd8) + local_8;
      local_1c = local_24 + (local_34.right - local_34.left);
      local_18 = local_20 + (local_34.bottom - local_34.top);
      piVar2 = FUN_6623db00(this_00,local_14);
      local_24 = local_24 + *piVar2;
      local_1c = local_1c + *piVar2;
      local_18 = local_18 + piVar2[1];
      local_20 = local_20 + piVar2[1];
      FUN_662478c0(this,&local_24,(int *)((int)this + 0x4ba),param_1,param_2);
    }
  }
  return;
}


