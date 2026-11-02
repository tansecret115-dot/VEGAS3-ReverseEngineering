/* Module: pncrt.dll
   Function: FUN_78006950
   Address: 78006950
   Source: Ghidra pseudocode (Stage 10 batch) */


DName * __thiscall FUN_78006950(void *this,char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = DName::isEmpty(this);
    if (iVar1 != 0) {
      FUN_78006b50(this,param_1);
      return this;
    }
    puVar2 = FUN_78006e10(*(undefined4 *)this);
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      this_00 = (void *)FUN_78006050(&DAT_78041a90,0x10,0);
      if (this_00 != (void *)0x0) {
        puVar2 = FUN_78006ef0(this_00,param_1,0);
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


