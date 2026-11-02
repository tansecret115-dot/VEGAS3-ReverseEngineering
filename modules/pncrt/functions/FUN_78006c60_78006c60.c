/* Module: pncrt.dll
   Function: FUN_78006c60
   Address: 78006c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_78006c60(void *this,char *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)((int)this + 4);
  if (((uVar1 & 0xf) != 1) && ((uVar1 & 0xf) != 3)) {
    if (*(int *)this != 0) {
      FUN_78006be0(this,3);
      return;
    }
    if ((param_1 == (char *)0x0) || (param_2 == 0)) {
      *(uint *)((int)this + 4) = uVar1 & 0xfffffff1 | 1;
    }
    else {
      if (param_2 == 0) {
        *(uint *)((int)this + 4) = uVar1 & 0xfffffff3 | 3;
        return;
      }
      if (param_2 == 1) {
        pvVar2 = (void *)FUN_78006050(&DAT_78041a90,0xc,0);
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_78006ea0(pvVar2,*param_1);
        }
        *(undefined4 **)this = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
          return;
        }
      }
      else {
        pvVar2 = (void *)FUN_78006050(&DAT_78041a90,0x10,0);
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_78006ef0(pvVar2,param_1,param_2);
        }
        *(undefined4 **)this = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
          return;
        }
      }
    }
  }
  return;
}


