/* Module: erv33260.dll
   Function: FUN_6707f820
   Address: 6707f820
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_6707f820(void *this,char param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_6707b220(*(int *)((int)this + 4));
  if ((*(int *)(*(int *)((int)this + 8) + 0x74) != 0) && (param_1 == '\0')) {
    iVar2 = FUN_6707ad10(*(int *)((int)this + 4));
    if (iVar2 == 1) {
      return (bool)('\x01' - (*(uint *)(*(int *)((int)this + 8) + 0x74) < uVar1));
    }
  }
  return (bool)('\x01' - (*(uint *)(*(int *)((int)this + 8) + 0x70) < uVar1));
}


