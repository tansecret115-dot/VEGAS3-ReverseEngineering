/* Module: pncrt.dll
   Function: FUN_78006a60
   Address: 78006a60
   Source: Ghidra pseudocode (Stage 10 batch) */


DName * __thiscall FUN_78006a60(void *this,uint param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 *this_01;
  
  iVar1 = DName::isEmpty(this);
  if (((iVar1 == 0) && (param_1 != 1)) && (param_1 != 3)) {
    this_00 = (void *)FUN_78006050(&DAT_78041a90,0x10,0);
    if (this_00 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_78007040(this_00,param_1);
    }
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)this = 0;
    }
    else {
      this_01 = FUN_78006e10(*(undefined4 *)this);
      *(undefined4 **)this = this_01;
      if (this_01 != (undefined4 *)0x0) {
        FUN_78006e70(this_01,(int)puVar2);
      }
    }
    if (*(int *)this == 0) {
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
      return this;
    }
  }
  else {
    FUN_78006be0(this,param_1);
  }
  return this;
}


