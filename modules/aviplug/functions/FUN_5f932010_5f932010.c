/* Module: aviplug.dll
   Function: FUN_5f932010
   Address: 5f932010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f932010(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar3;
  int iVar4;
  
  piVar2 = param_2;
  *param_2 = 0;
  iVar4 = -0x7ff8fff2;
  param_2 = (int *)0x0;
  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 != (undefined4 *)0x0) {
    iVar4 = (**(code **)*puVar1)(puVar1,&DAT_5f9d9e00,&param_2);
    if (iVar4 < 0) {
      param_2 = (int *)0x0;
    }
  }
  WaitForSingleObject(DAT_5f9f410c,0xffffffff);
  if (DAT_5f9f4100 == 0) {
    AVIFileInit();
    iVar4 = FUN_5f958f70(DAT_5f9f4130);
    if (iVar4 < 0) {
      ReleaseMutex(DAT_5f9f410c);
      iVar4 = -0x7ff8fff2;
      goto LAB_5f932110;
    }
    DAT_5f9f4100 = 1;
  }
  ReleaseMutex(DAT_5f9f410c);
  hMem = GlobalAlloc(0x40,0x268);
  this = GlobalLock(hMem);
  if (this == (LPVOID)0x0) goto LAB_5f932110;
  piVar3 = FUN_5f932300(this,param_1,param_2);
  if (piVar3 == (int *)0x0) goto LAB_5f932110;
  (**(code **)(*piVar3 + 0x30))(piVar3,param_4);
  if (param_3 == 0) {
LAB_5f9320e9:
    iVar4 = (**(code **)*piVar3)(piVar3,&DAT_5f9d9c70,piVar2);
    if ((-1 < iVar4) && (param_1 != (int *)0xffffffff)) {
      CloseHandle(param_1);
    }
  }
  else {
    iVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3,0,0x20);
    if (-1 < iVar4) goto LAB_5f9320e9;
  }
  (**(code **)(*piVar3 + 8))(piVar3);
LAB_5f932110:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar4;
}


