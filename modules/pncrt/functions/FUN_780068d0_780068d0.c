/* Module: pncrt.dll
   Function: FUN_780068d0
   Address: 780068d0
   Source: Ghidra pseudocode (Stage 10 batch) */


DName * __thiscall FUN_780068d0(void *this,char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  
  if (param_1 != '\0') {
    iVar1 = DName::isEmpty(this);
    if (iVar1 != 0) {
      FUN_78006b30(this);
      return this;
    }
    puVar2 = FUN_78006e10(*(undefined4 *)this);
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      this_00 = (void *)FUN_78006050(&DAT_78041a90,0xc,0);
      if (this_00 != (void *)0x0) {
        puVar2 = FUN_78006ea0(this_00,param_1);
        FUN_78006e70(*(void **)this,(int)puVar2);
        return this;
      }
      FUN_78006e70(*(void **)this,0);
      return this;
    }
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
  }
  return this;
}


