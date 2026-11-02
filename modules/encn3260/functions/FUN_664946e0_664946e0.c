/* Module: encn3260.dll
   Function: FUN_664946e0
   Address: 664946e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664946e0(void *this,uint param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_66494890(this,(uint)*(ushort *)((int)this + 0x14),param_1);
  if (*(uint *)((int)*(void **)this + 0xc) <= uVar2) {
    if (param_2 != 0) {
      FUN_66494780((int)this);
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    }
    return 0;
  }
  puVar3 = (undefined4 *)FUN_664c04a0(*(void **)this,uVar2);
  uVar1 = *puVar3;
  if (param_2 != 0) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  return uVar1;
}


