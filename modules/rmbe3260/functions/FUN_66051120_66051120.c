/* Module: rmbe3260.dll
   Function: FUN_66051120
   Address: 66051120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66051120(void *this,char *param_1,uint param_2)

{
  int iVar1;
  
  if (-1 < *(int *)((int)this + 8)) {
    _close(*(int *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = _creat(param_1,param_2 & 0xffff);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)((int)this + 4) = 0x80040008;
    return 0x80040008;
  }
  return 0;
}


