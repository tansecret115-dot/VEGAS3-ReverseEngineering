/* Module: wmfplug2.dll
   Function: FUN_0040b680
   Address: 0040b680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040b680(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID this;
  int *pMem;
  int iVar4;
  
  puVar1 = FUN_0040c890(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    return -0x7ff8fff2;
  }
  iVar2 = FUN_0040c840(param_1);
  if (iVar2 < 0) {
    return iVar2;
  }
  pvVar3 = GlobalAlloc(0x40,0x254);
  this = GlobalLock(pvVar3);
  if (this == (LPVOID)0x0) {
    return iVar2;
  }
  pMem = (int *)FUN_0040cb20(this,param_1,puVar1);
  if (pMem == (int *)0x0) {
    return iVar2;
  }
  iVar2 = 0;
  pMem[0x87] = *(int *)(param_1 + 0x38);
  if ((param_3 == 0) || (iVar2 = (**(code **)(*pMem + 0x1c))(pMem,param_3), -1 < iVar2)) {
    if (param_5 == (undefined4 *)0x0) {
LAB_0040b742:
      if ((-1 < iVar2) && (iVar2 = (**(code **)*pMem)(pMem,&DAT_0047ab90,param_2), -1 < iVar2)) {
        return iVar2;
      }
    }
    else {
      iVar4 = 0;
      while (-1 < iVar2) {
        if (param_4 <= iVar4) goto LAB_0040b742;
        iVar2 = (**(code **)(*pMem + 0x3c))(pMem,*param_5,iVar4);
        iVar4 = iVar4 + 1;
        param_5 = param_5 + 1;
      }
    }
  }
  FUN_0040cbc0(pMem);
  pvVar3 = GlobalHandle(pMem);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pMem);
  GlobalFree(pvVar3);
  return iVar2;
}


