/* Module: rmme3260.dll
   Function: FUN_66232150
   Address: 66232150
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66232150(void *this,char param_1)

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
    FUN_66231e50((int)this);
    iVar1 = FUN_66230fe0((int)this);
    return iVar1;
  }
  *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) | 0x3c;
  return 0;
}


