/* Module: stl2plg.dll
   Function: FUN_00407bf0
   Address: 00407bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407bf0(undefined4 param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  LPVOID this;
  int *pMem;
  int iVar2;
  HANDLE unaff_ESI;
  int unaff_retaddr;
  undefined4 *hObject;
  
  pvVar1 = GlobalAlloc(0x40,0x350);
  this = GlobalLock(pvVar1);
  if (this != (LPVOID)0x0) {
    pMem = (int *)FUN_00407ce0(this,param_1);
    if (pMem != (int *)0x0) {
      hObject = &DAT_004650c8;
      iVar2 = (**(code **)*pMem)(pMem,&DAT_004650c8,param_2);
      if (iVar2 < 0) {
        FUN_00407d30(pMem);
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        return iVar2;
      }
      (**(code **)(*(int *)*param_2 + 0x30))((int *)*param_2,param_1);
      if (unaff_retaddr != 0) {
        iVar2 = (**(code **)(*(int *)*param_2 + 0x2c))((int *)*param_2,0,0x20);
        if (-1 < iVar2) {
          if (hObject != (undefined4 *)0xffffffff) {
            CloseHandle(hObject);
          }
          return iVar2;
        }
        (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
        *param_2 = 0;
        return iVar2;
      }
      if (unaff_ESI != (HANDLE)0xffffffff) {
        CloseHandle(unaff_ESI);
      }
      return iVar2;
    }
  }
  return -0x7ff8fff2;
}


