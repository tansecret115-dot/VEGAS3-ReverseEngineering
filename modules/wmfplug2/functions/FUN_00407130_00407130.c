/* Module: wmfplug2.dll
   Function: FUN_00407130
   Address: 00407130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407130(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  int *pMem;
  uint dwBytes;
  undefined1 *puVar3;
  int *piVar4;
  int *piStack_20;
  undefined4 local_c;
  int local_8 [2];
  
  piStack_20 = local_8;
  local_c = 0;
  piVar4 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,0,&local_c);
  if (-1 < iVar1) {
    dwBytes = (int)piStack_20 * 2 + 0x1cU & 0xffff;
    pvVar2 = GlobalAlloc(0x42,dwBytes);
    pMem = GlobalLock(pvVar2);
    if (pMem == (int *)0x0) {
      return -0x7ff8fff2;
    }
    puVar3 = &stack0xffffffe4;
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_8[0],pMem + 7,&piStack_20);
    if (iVar1 < 0) {
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      return iVar1;
    }
    *pMem = 0x1c;
    pMem[1] = (int)piVar4;
    pMem[3] = 0;
    pMem[2] = param_3;
    pMem[4] = 0;
    pMem[5] = 0;
    pMem[6] = ((uint)puVar3 & 0xffff) << 1;
    iVar1 = FUN_0042bd50(piStack_20,pMem,dwBytes,-1,(int *)0x0);
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  return iVar1;
}


