/* Module: aviplug.dll
   Function: FUN_5f935a00
   Address: 5f935a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_5f935a00(void *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined *puVar2;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  void *unaff_retaddr;
  
  *param_2 = 0;
  WaitForSingleObject(DAT_5f9f410c,0xffffffff);
  pvVar1 = param_1;
  if (DAT_5f9f4100 == 0) {
    AVIFileInit();
    pvVar1 = (void *)FUN_5f958f70(DAT_5f9f4130);
    if ((int)pvVar1 < 0) {
      ReleaseMutex(DAT_5f9f410c);
      return (void *)0x8007000e;
    }
    DAT_5f9f4100 = 1;
  }
  ReleaseMutex(DAT_5f9f410c);
  puVar2 = FUN_5f936c60((int)param_1);
  pvVar5 = param_1;
  if (puVar2 != (undefined *)0x0) {
    if ((*(int *)((int)param_1 + 0x24) != 0) || (*(int *)((int)param_1 + 0x2c) != 0)) {
      pvVar1 = (void *)FUN_5f936b10((int)param_1);
    }
    if ((int)pvVar1 < 0) goto LAB_5f935b67;
    hMem = GlobalAlloc(0x40,0x450);
    this = GlobalLock(hMem);
    if ((this == (LPVOID)0x0) || (piVar3 = FUN_5f937050(this,param_1,puVar2), piVar3 == (int *)0x0))
    {
      pvVar1 = (void *)0x8007000e;
      goto LAB_5f935b67;
    }
    iVar4 = 0;
    pvVar1 = (void *)(**(code **)(*piVar3 + 0x54))(piVar3);
    if ((-1 < (int)pvVar1) &&
       ((param_2 == (undefined4 *)0x0 ||
        (pvVar1 = (void *)(**(code **)(*piVar3 + 0x1c))(piVar3,param_2), -1 < (int)pvVar1)))) {
      if (param_4 == (undefined4 *)0x0) {
LAB_5f935b21:
        pvVar1 = (void *)(**(code **)*piVar3)(piVar3,&DAT_5f9d9c30,param_1);
      }
      else if (-1 < (int)pvVar1) {
        for (; pvVar5 = unaff_retaddr, iVar4 < param_3; iVar4 = iVar4 + 1) {
          pvVar1 = (void *)(**(code **)(*piVar3 + 0x3c))(piVar3,*param_4,iVar4);
          if ((int)pvVar1 < 0) goto LAB_5f935b59;
          param_4 = param_4 + 1;
        }
        if (-1 < (int)pvVar1) goto LAB_5f935b21;
      }
    }
LAB_5f935b59:
    (**(code **)(*piVar3 + 8))(piVar3);
    puVar2 = (undefined *)0x0;
  }
  param_1 = pvVar5;
  if (-1 < (int)pvVar1) {
    return pvVar1;
  }
LAB_5f935b67:
  if (puVar2 != (undefined *)0x0) {
    FUN_5f936cb0(param_1,(int)puVar2);
  }
  return pvVar1;
}


