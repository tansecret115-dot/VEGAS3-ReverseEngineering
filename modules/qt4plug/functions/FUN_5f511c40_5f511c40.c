/* Module: qt4plug.dll
   Function: FUN_5f511c40
   Address: 5f511c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f511c40(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  int *pMem;
  int iVar3;
  int iVar4;
  
  iVar4 = -0x7ff8fff2;
  puVar1 = FUN_5f5139f0(param_1);
  if (puVar1 != (undefined *)0x0) {
    if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x28) == 0)) {
      return -0x7ff8fff2;
    }
    iVar4 = FUN_5f5139a0(param_1);
    if (-1 < iVar4) {
      pvVar2 = GlobalAlloc(0x40,0x130);
      this = GlobalLock(pvVar2);
      if ((this != (LPVOID)0x0) &&
         (pMem = (int *)FUN_5f513b10(this,param_1,puVar1), pMem != (int *)0x0)) {
        if (param_3 != 0) {
          iVar4 = (**(code **)(*pMem + 0x1c))(pMem,param_3);
        }
        if (-1 < iVar4) {
          if (param_5 == (undefined4 *)0x0) {
LAB_5f511cef:
            if ((-1 < iVar4) && (iVar4 = (**(code **)*pMem)(pMem,&DAT_5f595ae0,param_2), -1 < iVar4)
               ) {
              return iVar4;
            }
          }
          else {
            iVar3 = 0;
            do {
              if (param_4 <= iVar3) goto LAB_5f511cef;
              iVar4 = (**(code **)(*pMem + 0x3c))(pMem,*param_5,iVar3);
              iVar3 = iVar3 + 1;
              param_5 = param_5 + 1;
            } while (-1 < iVar4);
          }
        }
        FUN_5f513b70(pMem);
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
    }
  }
  return iVar4;
}


