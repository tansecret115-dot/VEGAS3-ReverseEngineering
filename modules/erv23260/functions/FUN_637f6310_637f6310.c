/* Module: erv23260.dll
   Function: FUN_637f6310
   Address: 637f6310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f6310(void *this,uint param_1)

{
  byte bVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + *(int *)((int)this + 0x24));
  if (((bVar1 & 0x1f) == 0) || ((bVar1 & 0x1f) == 1)) {
    iVar3 = (param_1 / *(uint *)((int)this + 0x34)) * 0x10 * *(int *)((int)this + 0x1c) +
            (param_1 % *(uint *)((int)this + 0x34)) * 0x10;
    bVar2 = FUN_637f6390(this,**(int **)((int)this + 8) + iVar3,
                         (byte *)(**(int **)((int)this + 0xc) + iVar3));
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + *(int *)((int)this + 0x24)) = 3;
  }
  return 0;
}


