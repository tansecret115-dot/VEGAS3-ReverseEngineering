/* Module: pncrt.dll
   Function: FUN_78006450
   Address: 78006450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_78006450(void *this,uint param_1)

{
  void *this_00;
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 != 1) && (param_1 != 3)) {
    uVar2 = 0;
  }
  *(uint *)((int)this + 4) = (*(uint *)((int)this + 4) ^ uVar2) & 0xf ^ *(uint *)((int)this + 4);
  this_00 = (void *)FUN_78006050(&DAT_78041a90,0x10,0);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_78007040(this_00,param_1);
  }
  uVar2 = *(uint *)((int)this + 4);
  *(undefined4 **)this = puVar1;
  *(uint *)((int)this + 4) = uVar2 & 0xffffff8f;
  if (puVar1 == (undefined4 *)0x0) {
    *(uint *)((int)this + 4) = uVar2 & 0xffffff83 | 3;
  }
  return this;
}


