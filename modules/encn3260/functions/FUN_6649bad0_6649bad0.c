/* Module: encn3260.dll
   Function: FUN_6649bad0
   Address: 6649bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6649bad0(void *this,char param_1)

{
  int iVar1;
  
  if (param_1 == '\0') {
    *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) & 0xf3 | 0x20;
    return 0;
  }
  if (param_1 != '\x02') {
    if (param_1 != '\x03') {
      return -0x7ffbff33;
    }
    if (*(void **)((int)this + 0x68) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x68));
      *(undefined4 *)((int)this + 0x68) = 0;
    }
    FUN_6649b7d0((int)this);
    iVar1 = FUN_6649a960((int)this);
    return iVar1;
  }
  *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) | 0x3c;
  return 0;
}


