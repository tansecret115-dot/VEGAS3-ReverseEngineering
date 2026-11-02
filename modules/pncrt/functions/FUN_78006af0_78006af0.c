/* Module: pncrt.dll
   Function: FUN_78006af0
   Address: 78006af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_78006af0(void *this,DName *param_1)

{
  int iVar1;
  
  if (((byte)*(undefined4 *)((int)this + 4) & 0xf) != 3) {
    iVar1 = DName::isValid(param_1);
    if (iVar1 == 0) {
      *(uint *)((int)this + 4) =
           ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ *(uint *)((int)this + 4)) & 0xf ^
           *(uint *)((int)this + 4);
    }
  }
  return (int)this;
}


