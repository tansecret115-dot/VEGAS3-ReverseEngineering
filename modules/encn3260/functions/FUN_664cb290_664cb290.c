/* Module: encn3260.dll
   Function: FUN_664cb290
   Address: 664cb290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664cb290(void *this,undefined4 param_1)

{
  bool bVar1;
  void *this_00;
  undefined4 uVar2;
  DWORD DVar3;
  undefined3 extraout_var;
  int iVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  if (DAT_664f2a50 == 0) {
    DAT_664f2a50 = RegisterWindowMessageA(s_RN_DestroyInternalNetThreadAsync_664eff68);
  }
  this_00 = operator_new(0x1c);
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMap<>(this_00,10);
  }
  *(undefined4 *)((int)this + 0x14) = uVar2;
  DVar3 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0xc) = DVar3;
  bVar1 = FUN_664cb310(this);
  *(uint *)((int)this + 8) = CONCAT31(extraout_var,bVar1);
  iVar4 = FUN_664c52e0();
  *(undefined4 *)((int)this + 0x1e) = *(undefined4 *)(iVar4 + 8);
  return this;
}


