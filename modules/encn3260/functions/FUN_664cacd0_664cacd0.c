/* Module: encn3260.dll
   Function: FUN_664cacd0
   Address: 664cacd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664cacd0(void *this,undefined4 param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined4 uVar3;
  DWORD DVar4;
  undefined3 extraout_var;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  if (this != (void *)0x0) {
    pvVar2 = operator_new(0x1c);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CMap<>(pvVar2,10);
    }
    *(undefined4 *)((int)this + 0x14) = uVar3;
    pvVar2 = operator_new(0x1c);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CMap<>(pvVar2,10);
    }
    *(undefined4 *)((int)this + 0x1c) = uVar3;
    DVar4 = GetCurrentThreadId();
    *(DWORD *)((int)this + 0xc) = DVar4;
    bVar1 = FUN_664cad50(this);
    *(uint *)((int)this + 8) = CONCAT31(extraout_var,bVar1);
  }
  return this;
}


