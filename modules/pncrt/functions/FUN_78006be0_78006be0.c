/* Module: pncrt.dll
   Function: FUN_78006be0
   Address: 78006be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_78006be0(void *this,uint param_1)

{
  void *this_00;
  undefined4 *puVar1;
  uint uVar2;
  
  if ((param_1 == 1) || (param_1 == 3)) {
    uVar2 = *(uint *)((int)this + 4);
    *(undefined4 *)this = 0;
    if (((byte)uVar2 & 0xf) != 3) {
      *(uint *)((int)this + 4) = (param_1 ^ uVar2) & 0xf ^ uVar2;
    }
  }
  else {
    uVar2 = *(uint *)((int)this + 4) & 0xf;
    if ((uVar2 == 0) || (uVar2 == 2)) {
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffffff8f;
      this_00 = (void *)FUN_78006050(&DAT_78041a90,0x10,0);
      if (this_00 == (void *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_78007040(this_00,param_1);
      }
      *(undefined4 **)this = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
        return this;
      }
    }
  }
  return this;
}


