/* Module: encn3260.dll
   Function: FUN_66498c60
   Address: 66498c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66498c60(void *this,int *param_1)

{
  if (((*(byte *)((int)this + 0x10) & 1) != 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x14))(param_1,*(undefined4 *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) & 0xfe;
  }
  return;
}


