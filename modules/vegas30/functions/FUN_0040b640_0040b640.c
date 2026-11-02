/* Module: vegas30.exe
   Function: FUN_0040b640
   Address: 0040b640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040b640(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  HGLOBAL pvVar4;
  undefined4 *pMem;
  bool bVar5;
  
  bVar5 = false;
  iVar3 = -0x7fffbffd;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    iVar3 = -0x7ff8fff2;
    pvVar4 = GlobalAlloc(0x40,0x34);
    pMem = GlobalLock(pvVar4);
    if (pMem == (undefined4 *)0x0) {
      pMem = (undefined4 *)0x0;
    }
    else {
      FUN_0040b850();
      *pMem = &PTR_FUN_0060ffc4;
      InterlockedIncrement((LONG *)&DAT_0064717c);
      iVar3 = 0;
    }
    if (-1 < iVar3) {
      piVar2 = param_1;
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))(param_1);
        }
        bVar5 = true;
        piVar2 = (int *)register0x00000010;
      }
      iVar3 = piVar2[1];
      iVar1 = param_1[2];
      pMem[3] = param_1[3];
      pMem[2] = iVar1;
      FUN_004066c0(pMem + 1,iVar3);
      pMem[5] = 0;
      pMem[4] = pMem[2];
      if ((bVar5) && (param_1 != (int *)0x0)) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      pMem[4] = param_1[4];
      iVar3 = FUN_0040b780(pMem,&PTR_DAT_0060ffe0,&DAT_006336d8,param_2);
      if ((iVar3 < 0) && (pMem != (undefined4 *)0x0)) {
        *pMem = &PTR_FUN_0060ffc4;
        pMem[6] = 1;
        InterlockedDecrement((LONG *)&DAT_0064717c);
        DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 7));
        FUN_0040b880();
        pvVar4 = GlobalHandle(pMem);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem);
        GlobalFree(pvVar4);
      }
    }
  }
  return iVar3;
}


