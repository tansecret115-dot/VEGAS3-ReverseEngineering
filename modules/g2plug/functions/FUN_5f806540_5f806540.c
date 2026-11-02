/* Module: g2plug.dll
   Function: FUN_5f806540
   Address: 5f806540
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f806540(void *this,int *param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    *param_1 = *(int *)((int)this + 0x20);
    return 0;
  }
  pvVar1 = GlobalAlloc(0x42,0x428);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)((int)this + 0x20) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    puVar4 = (undefined4 *)0x0;
    iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0x38))
                      (*(int **)((int)this + 0x10),pvVar2,0x428,0,0,0,0);
    if (-1 < iVar3) {
      *puVar4 = *(undefined4 *)((int)this + 0x20);
      return iVar3;
    }
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x20));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x20));
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 0x20) = 0;
    return iVar3;
  }
  return -0x7ff8fff2;
}


