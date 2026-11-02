/* Module: pncrt.dll
   Function: FUN_78006240
   Address: 78006240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_78006240(void *this,int param_1)

{
  uint uVar1;
  void *this_00;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    this_00 = (void *)FUN_78006050(&DAT_78041a90,0xc,0);
    if (this_00 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_78006fc0(this_00,param_1);
    }
    uVar1 = *(uint *)((int)this + 4);
    *(undefined4 **)this = puVar2;
    uVar3 = ((-(puVar2 != (undefined4 *)0x0) & 0xfd) + 3 ^ uVar1) & 0xf ^ uVar1;
    *(uint *)((int)this + 4) = uVar3;
    *(uint *)((int)this + 4) = CONCAT31((int3)(uVar1 >> 8),(char)uVar3) & 0xffffff8f;
    return this;
  }
  uVar1 = *(uint *)((int)this + 4);
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = uVar1 & 0xfffffff0;
  *(uint *)((int)this + 4) = uVar1 & 0xffffff80;
  return this;
}


