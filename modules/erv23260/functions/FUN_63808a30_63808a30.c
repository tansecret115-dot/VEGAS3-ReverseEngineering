/* Module: erv23260.dll
   Function: FUN_63808a30
   Address: 63808a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63808a30(void *this,uint param_1)

{
  int iVar1;
  
  param_1 = *(uint *)((int)this + param_1 * 4 + 0xc0);
  if ((*(int *)((int)this + 0x20) == 1) &&
     (iVar1 = *(int *)((int)this + 0x6c8) + -1, *(int *)((int)this + 0x6c8) = iVar1, iVar1 == 0)) {
    *(undefined1 *)((int)this + 0x742) = 1;
  }
  if ((*(uint *)(*(int *)((int)this + 0x5c0) + 0x834) < 0x15) && (param_1 != 7)) {
    param_1 = -(uint)(*(int *)this != 0) & 4;
  }
  if (*(int *)(*(int *)((int)this + 0x5c0) + 0x80) == 1) {
    FUN_63808ae0(this,(int *)&param_1);
  }
  else {
    FUN_63808c20(this,&param_1);
  }
  if ((param_1 == 0) || (param_1 == 4)) {
    if (*(int *)((int)this + 0x20) == 1) {
      *(undefined4 *)((int)this + 0x6c8) = *(undefined4 *)((int)this + 0x24);
    }
    *(undefined1 *)((int)this + 0x740) = 0;
    *(undefined1 *)((int)this + 0x742) = 0;
  }
  return;
}


