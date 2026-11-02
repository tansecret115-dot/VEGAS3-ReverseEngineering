/* Module: rmme3260.dll
   Function: FUN_6625f350
   Address: 6625f350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625f350(void *this,int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  void *pvVar3;
  void *local_8;
  
  local_8 = (void *)0x0;
  if (*(void **)((int)this + 0x14) == (void *)0x0) {
    return 1;
  }
  iVar2 = FUN_66251030(*(void **)((int)this + 0x14),(uint)param_1,(int *)&local_8);
  if (iVar2 != 0) {
    *(undefined4 *)((int)local_8 + 0x32) = 0;
    FUN_66259da0(local_8,(uint)(param_2 >> 0x10 == 0));
    bVar1 = FUN_66251160(*(void **)((int)this + 0x14),param_1);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    }
  }
  if (DAT_6627f240 != 0) {
    pvVar3 = (void *)FUN_66250ae0(&DAT_6627f244);
    if (pvVar3 != (void *)0x0) {
      FUN_6625f580((int)pvVar3);
      operator_delete(pvVar3);
    }
  }
  FUN_6625f300(this);
  return 1;
}


