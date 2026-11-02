/* Module: rmme3260.dll
   Function: FUN_6625f670
   Address: 6625f670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6625f670(void *this,undefined4 param_1)

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
  if (DAT_6627f260 == 0) {
    DAT_6627f260 = RegisterWindowMessageA(s_RN_DestroyInternalNetThreadAsync_6627c910);
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
  bVar1 = FUN_6625f6f0(this);
  *(uint *)((int)this + 8) = CONCAT31(extraout_var,bVar1);
  iVar4 = FUN_662589b0();
  *(undefined4 *)((int)this + 0x1e) = *(undefined4 *)(iVar4 + 8);
  return this;
}


