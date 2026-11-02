/* Module: pncrt.dll
   Function: FUN_78006050
   Address: 78006050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_78006050(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7U & 0xfffffff8;
  if (param_2 != 0) {
    iVar1 = (**(code **)this)(uVar3);
    return iVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (uVar3 <= *(uint *)((int)this + 0x10)) {
    iVar1 = *(uint *)((int)this + 0x10) - uVar3;
    *(int *)((int)this + 0x10) = iVar1;
    return *(int *)((int)this + 0xc) + 4 + iVar1;
  }
  if (0x1fc < uVar3) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_78006050(&DAT_78041a90,0x200,1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 0xc) = puVar2;
      *(undefined4 **)((int)this + 0xc) = puVar2;
      *(uint *)((int)this + 0x10) = -uVar3 + 0x1fc;
      return (int)puVar2 + -uVar3 + 0x200;
    }
    *(undefined4 **)((int)this + 0xc) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(uint *)((int)this + 0x10) = -uVar3 + 0x1fc;
    return (int)puVar2 + -uVar3 + 0x200;
  }
  return 0;
}


