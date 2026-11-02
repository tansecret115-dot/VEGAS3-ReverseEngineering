/* Module: rmme3260.dll
   Function: FUN_66242010
   Address: 66242010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66242010(void *this,HDC param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (((*(void **)((int)this + 0x6c) == this) && (DAT_6627cfec == 0)) &&
     (*(int *)((int)this + 0x1d0) == 0)) {
    bVar4 = param_1 == (HDC)0x0;
    if (bVar4) {
      param_1 = GetDC((HWND)0x0);
    }
    iVar1 = GetDeviceCaps(param_1,0xc);
    iVar2 = GetDeviceCaps(param_1,8);
    iVar3 = GetDeviceCaps(param_1,10);
    if (((*(int *)((int)this + 0x1b4) != iVar1) || (iVar2 != *(int *)((int)this + 0x1b8))) ||
       (iVar3 != *(int *)((int)this + 0x1bc))) {
      *(int *)((int)this + 0x1b4) = iVar1;
      *(int *)((int)this + 0x1b8) = iVar2;
      *(int *)((int)this + 0x1bc) = iVar3;
      FUN_66242170((int)this);
    }
    if (bVar4) {
      ReleaseDC((HWND)0x0,param_1);
    }
  }
  return;
}


