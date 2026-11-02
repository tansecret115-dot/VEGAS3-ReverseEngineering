/* Module: erv23260.dll
   Function: FUN_6380cf90
   Address: 6380cf90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_6380cf90(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_637fb550(*(int *)((int)this + 0x6c4));
  if (*(int *)(*(int *)((int)this + 0x5c0) + 0x808) != 0) {
    return (bool)('\x01' - (*(uint *)((int)this + 0x80) < uVar1));
  }
  if ((*(int *)((int)this + 0x88) != 0) && (param_1 == 0)) {
    iVar2 = FUN_637fa670(*(int *)((int)this + 0x6c4));
    if (iVar2 == 1) {
      return (bool)('\x01' - (*(uint *)((int)this + 0x88) < uVar1));
    }
  }
  return (bool)('\x01' - (*(uint *)((int)this + 0x84) < uVar1));
}


