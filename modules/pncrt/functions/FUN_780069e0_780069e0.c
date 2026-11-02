/* Module: pncrt.dll
   Function: FUN_780069e0
   Address: 780069e0
   Source: Ghidra pseudocode (Stage 10 batch) */


DName * __thiscall FUN_780069e0(void *this,DName *param_1)

{
  int iVar1;
  undefined4 *this_00;
  
  iVar1 = DName::isEmpty(param_1);
  if (iVar1 != 0) {
    FUN_78006a60(this,(*(int *)(param_1 + 4) << 0x1c) >> 0x1c);
    return this;
  }
  iVar1 = DName::isEmpty(this);
  if (iVar1 != 0) {
    FUN_78006b80(this,(undefined4 *)param_1);
    return this;
  }
  this_00 = FUN_78006e10(*(undefined4 *)this);
  *(undefined4 **)this = this_00;
  if (this_00 != (undefined4 *)0x0) {
    FUN_78006e70(this_00,*(int *)param_1);
    return this;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
  return this;
}


