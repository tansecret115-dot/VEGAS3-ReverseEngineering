/* Module: vidcap30.exe
   Function: FUN_0045c0e0
   Address: 0045c0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0045c0e0(int param_1,undefined4 param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5)

{
  HGLOBAL pvVar1;
  undefined4 *pMem;
  int iVar2;
  
  pvVar1 = GlobalAlloc(0x40,0x108);
  pMem = GlobalLock(pvVar1);
  if (pMem != (undefined4 *)0x0) {
    lstrcpynA((LPSTR)(pMem + 1),param_3,0x104);
    *(undefined1 *)((int)pMem + 0x107) = 0;
    _SfAddSlashToPathName_8(pMem + 1,0x104);
    *pMem = param_4;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    param_3 = (LPCSTR)pMem;
    iVar2 = _SfList_InsertList_16(param_2,param_5,&param_3,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    if (iVar2 < 0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    return iVar2;
  }
  return -0x7ff8fff2;
}


