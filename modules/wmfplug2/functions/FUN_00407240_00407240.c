/* Module: wmfplug2.dll
   Function: FUN_00407240
   Address: 00407240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407240(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  int *pMem;
  uint uVar3;
  uint dwBytes;
  int **ppiVar4;
  undefined1 **ppuVar5;
  int *piVar6;
  uint uStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  int local_10 [2];
  undefined1 local_8 [8];
  
  puStack_24 = local_8;
  piStack_28 = local_10 + 1;
  uStack_2c = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  piVar6 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_3,0);
  if (-1 < iVar1) {
    dwBytes = ((int)piStack_28 + uStack_2c) * 2 + 0x1c & 0xffff;
    pvVar2 = GlobalAlloc(0x42,dwBytes);
    pMem = GlobalLock(pvVar2);
    if (pMem == (int *)0x0) {
      return -0x7ff8fff2;
    }
    ppuVar5 = &puStack_24;
    uVar3 = uStack_2c & 0xffff;
    ppiVar4 = &piStack_28;
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_10[0],pMem + 7,&uStack_2c);
    if (-1 < iVar1) {
      *pMem = 0x1c;
      pMem[1] = (int)ppuVar5;
      pMem[3] = 0;
      pMem[2] = (int)piVar6;
      pMem[4] = 0;
      pMem[5] = ((int)(pMem + 7) + uVar3 * 2 & 0xffff) << 1;
      pMem[6] = ((uint)ppiVar4 & 0xffff) << 1;
      iVar1 = FUN_0042bd50(local_10,pMem,dwBytes,-1,(int *)0x0);
    }
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  return iVar1;
}


