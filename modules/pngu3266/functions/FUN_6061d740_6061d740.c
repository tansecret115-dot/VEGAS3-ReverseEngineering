/* Module: pngu3266.dll
   Function: FUN_6061d740
   Address: 6061d740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061d740(void *this,char *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < *(int *)((int)this + 8)) {
    _close(*(int *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = _unlink(param_1);
  if (iVar1 != 0) {
    piVar2 = _errno();
    iVar1 = (-(uint)(*piVar2 != 0xd) & 0xfffd0003) + 0x80070005;
    *(int *)((int)this + 4) = iVar1;
    return iVar1;
  }
  return 0;
}


