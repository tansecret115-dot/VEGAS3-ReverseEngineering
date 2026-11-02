/* Module: sfpublish.dll
   Function: FUN_0040ac90
   Address: 0040ac90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ac90(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *pMem;
  bool bVar4;
  
  bVar4 = false;
  iVar2 = -0x7fffbffd;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    iVar2 = -0x7ff8fff2;
    pvVar3 = GlobalAlloc(0x40,0x1c);
    pMem = GlobalLock(pvVar3);
    if (pMem == (undefined4 *)0x0) {
      pMem = (undefined4 *)0x0;
    }
    else {
      FUN_0040ae90((int)pMem);
      *pMem = &PTR_FUN_00435d24;
      InterlockedIncrement(&DAT_0044176c);
      iVar2 = 0;
    }
    if (-1 < iVar2) {
      piVar1 = param_1;
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))(param_1);
        }
        bVar4 = true;
        piVar1 = (int *)register0x00000010;
      }
      piVar1 = (int *)piVar1[1];
      iVar2 = param_1[2];
      pMem[3] = param_1[3];
      pMem[2] = iVar2;
      FUN_004025d0(pMem + 1,piVar1);
      pMem[5] = 0;
      pMem[4] = pMem[2];
      if ((bVar4) && (param_1 != (int *)0x0)) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      pMem[4] = param_1[4];
      iVar2 = FUN_0040adc0((int)pMem,(int *)&PTR_DAT_00435d40,&DAT_0043cb20,param_2);
      if ((iVar2 < 0) && (pMem != (undefined4 *)0x0)) {
        *pMem = &PTR_FUN_00435d24;
        pMem[6] = 1;
        InterlockedDecrement(&DAT_0044176c);
        FUN_0040aeb0((int)pMem);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
    }
  }
  return iVar2;
}


