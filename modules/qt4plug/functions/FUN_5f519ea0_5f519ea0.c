/* Module: qt4plug.dll
   Function: FUN_5f519ea0
   Address: 5f519ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f519ea0(int param_1,undefined4 *param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  int *pMem;
  HANDLE unaff_EDI;
  int unaff_retaddr;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = FUN_5f5196a0(1);
    if (iVar1 < 0) {
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  pvVar2 = GlobalAlloc(0x40,0x358);
  this = GlobalLock(pvVar2);
  if ((this == (LPVOID)0x0) || (pMem = (int *)FUN_5f51a1f0(this,param_1), pMem == (int *)0x0)) {
    iVar1 = -0x7ff8fff2;
  }
  else {
    pMem[0x4f] = *(int *)(param_1 + 0x10);
    iVar1 = (**(code **)*pMem)(pMem,&DAT_5f595b20,param_2);
    if (iVar1 < 0) {
      FUN_5f51a230(pMem);
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      return iVar1;
    }
    (**(code **)(*(int *)*param_2 + 0x30))((int *)*param_2,param_1);
    if ((unaff_retaddr != 0) &&
       (iVar1 = (**(code **)(*(int *)*param_2 + 0x2c))((int *)*param_2,0,0x20), iVar1 < 0)) {
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
      return iVar1;
    }
    if (unaff_EDI != (HANDLE)0xffffffff) {
      CloseHandle(unaff_EDI);
      return iVar1;
    }
  }
  return iVar1;
}


