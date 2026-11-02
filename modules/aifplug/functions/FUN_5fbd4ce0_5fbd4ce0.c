/* Module: aifplug.dll
   Function: FUN_5fbd4ce0
   Address: 5fbd4ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd4ce0(void *param_1,int param_2,undefined4 *param_3)

{
  undefined *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  
  iVar4 = -0x7ff8fff2;
  puVar1 = FUN_5fbd5890((int)param_1);
  if (puVar1 != (undefined *)0x0) {
    if ((*(int *)((int)param_1 + 0x1c) == 0) && (*(int *)((int)param_1 + 0x24) == 0)) {
      FUN_5fbd58e0(param_1,(int)puVar1);
      iVar4 = 0;
      puVar1 = (undefined *)0x0;
    }
    else {
      iVar4 = FUN_5fbd5840((int)param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    hMem = GlobalAlloc(0x40,0x22c);
    this = GlobalLock(hMem);
    if ((((this != (LPVOID)0x0) &&
         (piVar2 = (int *)FUN_5fbd5920(this,param_1,puVar1), piVar2 != (int *)0x0)) &&
        (iVar4 = FUN_5fbd59b0((int)piVar2), -1 < iVar4)) &&
       (iVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,param_3), -1 < iVar4)) {
      iVar3 = 0;
      while (iVar3 < param_2) {
        iVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2,*param_3,iVar3);
        iVar3 = iVar3 + 1;
        param_3 = param_3 + 1;
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      if (-1 < iVar4) {
        iVar4 = (**(code **)*piVar2)(piVar2,&DAT_5fbfea40,unaff_retaddr);
      }
    }
  }
  return iVar4;
}


