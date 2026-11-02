/* Module: rmto3260.dll
   Function: FUN_662feb00
   Address: 662feb00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662feb00(void *this,int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_EDI;
  
  if (*(int *)((int)this + 0x210) != 0) {
    return 0;
  }
  if ((*(int *)((int)this + 0x208) == 0) || (*(int *)(*(int *)((int)this + 0x208) + 0xc) == 0)) {
    FUN_662fe860(this);
    if (*(int *)((int)this + 0x20c) != 0) {
      return *(int *)((int)this + 0x20c);
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar2 = FUN_662fecb0((int)this);
  if (uVar1 < (ushort)uVar2) {
    iVar3 = FUN_662fedf0(this,CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar1));
    *(int *)((int)this + 0x20c) = iVar3;
  }
  else {
    *(undefined4 *)((int)this + 0x20c) = 0x80040004;
  }
  iVar3 = *(int *)((int)this + 0x20c);
  if (iVar3 == 0) {
    if ((*(int *)((int)this + 0x227) != 0) && (*(code **)((int)this + 0x243) != (code *)0x0)) {
      iVar3 = (**(code **)((int)this + 0x243))(*(int *)((int)this + 0x227),param_1);
      *(int *)((int)this + 0x20c) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 0x210) = 1;
        return *(int *)((int)this + 0x20c);
      }
      FUN_662fec20((int)this);
      return *(int *)((int)this + 0x20c);
    }
    iVar3 = -0x7ffbfff9;
    *(undefined4 *)((int)this + 0x20c) = 0x80040007;
  }
  return iVar3;
}


