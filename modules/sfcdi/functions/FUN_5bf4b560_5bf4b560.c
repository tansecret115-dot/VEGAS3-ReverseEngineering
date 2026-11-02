/* Module: sfcdi.dll
   Function: FUN_5bf4b560
   Address: 5bf4b560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4b560(uint param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  UINT UVar7;
  int local_4;
  
  pMem = (LPCVOID)*param_2;
  uVar4 = *param_3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)((int)pMem + 0x84) = 0;
    *(uint *)((int)pMem + 0x80) = uVar4 - 1;
    uVar6 = ((uint)((uVar4 & 0x7ff) != 0) + (uVar4 >> 0xb)) * 0x800;
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    UVar7 = 0x42;
    uVar4 = uVar6;
    pvVar1 = GlobalHandle(pMem);
    pvVar1 = GlobalReAlloc(pvVar1,uVar4,UVar7);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 != (LPVOID)0x0) {
      *param_2 = pvVar2;
      *param_3 = uVar6;
      return 0;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x20);
    FUN_5bf52810(uVar6,(int *)&param_1);
    *(uint *)((int)pMem + 0x84) = uVar4;
    uVar4 = uVar4 + param_1;
    *(uint *)((int)pMem + 0x80) = uVar4 - 1;
    uVar5 = ((uint)((uVar4 & 0x7ff) != 0) + (uVar4 >> 0xb)) * 0x800;
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    UVar7 = 0x42;
    uVar4 = uVar5;
    pvVar1 = GlobalHandle(pMem);
    pvVar1 = GlobalReAlloc(pvVar1,uVar4,UVar7);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 != (LPVOID)0x0) {
      local_4 = *(int *)((int)pvVar2 + 0x84) + (int)pvVar2;
      iVar3 = FUN_5bf528d0(uVar6,&local_4,&param_1);
      if (iVar3 < 0) {
        return iVar3;
      }
      *param_2 = pvVar2;
      *param_3 = uVar5;
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


