/* Module: oggplug.dll
   Function: FUN_00404380
   Address: 00404380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00404380(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID this;
  int *pMem;
  int iVar4;
  
  puVar1 = FUN_00404b60(param_1);
  if ((puVar1 == (undefined *)0x0) ||
     ((*(int *)(param_1 + 0x10) == 0 && (*(int *)(param_1 + 0x18) == 0)))) {
    return -0x7ff8fff2;
  }
  iVar2 = FUN_00404ac0(param_1);
  if (-1 < iVar2) {
    pvVar3 = GlobalAlloc(0x40,0x140);
    this = GlobalLock(pvVar3);
    if ((this != (LPVOID)0x0) &&
       (pMem = (int *)FUN_00405120(this,param_1,puVar1), pMem != (int *)0x0)) {
      if (param_3 != 0) {
        iVar2 = (**(code **)(*pMem + 0x1c))(pMem,param_3);
      }
      if (-1 < iVar2) {
        if (param_5 == (undefined4 *)0x0) {
LAB_00404425:
          if ((-1 < iVar2) && (iVar2 = (**(code **)*pMem)(pMem,&DAT_00446ab0,param_2), -1 < iVar2))
          {
            return iVar2;
          }
        }
        else {
          iVar4 = 0;
          do {
            if (param_4 <= iVar4) goto LAB_00404425;
            iVar2 = (**(code **)(*pMem + 0x3c))(pMem,*param_5,iVar4);
            iVar4 = iVar4 + 1;
            param_5 = param_5 + 1;
          } while (-1 < iVar2);
        }
      }
      FUN_00405160(pMem);
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
  }
  return iVar2;
}


