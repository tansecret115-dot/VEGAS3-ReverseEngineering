/* Module: sfpublish.dll
   Function: FUN_00413920
   Address: 00413920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413920(void *this,uchar *param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  HGLOBAL hMem;
  uchar *puVar4;
  
  uVar1 = 0x80070057;
  if ((((*(int *)((int)this + 0x1c) == 0) && (param_1 != (uchar *)0x0)) && (param_2 != (uchar *)0x0)
      ) && (param_3 != 0)) {
    iVar2 = lstrlenA((LPCSTR)param_1);
    iVar3 = lstrlenA((LPCSTR)param_2);
    hMem = GlobalAlloc(0x40,iVar3 + 2 + iVar2);
    puVar4 = GlobalLock(hMem);
    *(uchar **)((int)this + 0x20) = puVar4;
    if (puVar4 != (uchar *)0x0) {
      *(uchar **)((int)this + 0x24) = puVar4;
      _mbscpy(puVar4,param_1);
      puVar4 = (uchar *)(*(int *)((int)this + 0x20) + 1 + iVar2);
      *(uchar **)((int)this + 0x28) = puVar4;
      _mbscpy(puVar4,param_2);
      *(int *)((int)this + 0x2c) = param_3;
      *(undefined4 *)((int)this + 0x1c) = 1;
      return 0;
    }
    uVar1 = 0x8007000e;
  }
  return uVar1;
}


