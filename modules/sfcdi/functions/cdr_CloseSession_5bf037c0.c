/* Module: sfcdi.dll
   Function: cdr_CloseSession
   Address: 5bf037c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall cdr_CloseSession(struct HSFCD__ *,struct tCDRPARAMS_CLOSESESSION *) */

long cdr_CloseSession(HSFCD__ *param_1,tCDRPARAMS_CLOSESESSION *param_2)

{
  HSFSCSIPORT__ *pHVar1;
  DWORD DVar2;
  uint uVar3;
  HSFCD__ *pHVar4;
  int iVar5;
  undefined4 *puVar6;
  
                    /* 0x37c0  164  ?cdr_CloseSession@@YGJPAUHSFCD__@@PAUtCDRPARAMS_CLOSESESSION@@@Z
                        */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_2 == (tCDRPARAMS_CLOSESESSION *)0x0) {
    return -0x7fffbffd;
  }
  iVar5 = *(int *)param_2;
  if (iVar5 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    uVar3 = FUN_5bf01e80(param_1);
    if (uVar3 != 0) {
      return 0;
    }
    iVar5 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                      (**(undefined4 **)(param_1 + 0x150),0x16,param_1,param_2);
    pHVar4 = (HSFCD__ *)0x0;
    if (iVar5 != 0) {
      pHVar4 = (HSFCD__ *)FUN_5bf01bf0((int)param_1,iVar5);
    }
    pHVar1 = *(HSFSCSIPORT__ **)param_1;
    param_1 = pHVar4;
    if (pHVar1 != (HSFSCSIPORT__ *)0x0) {
      SfScsi_Close(pHVar1);
      return (long)pHVar4;
    }
  }
  else if (iVar5 == 1) {
    puVar6 = &DAT_5bf66000;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    DAT_5bf66020 = *(int *)(param_2 + 0x18);
    SfCD_GetProcessTime(param_1,4,(ulong *)&DAT_5bf6601c);
    _DAT_5bf66010 = param_1;
    _DAT_5bf66014 = param_2;
    DAT_5bf66000 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf03690,
                                &DAT_5bf66000,0,&DAT_5bf66004);
    if (DAT_5bf66000 == (HANDLE)0x0) {
      return -0x7ff8fff2;
    }
    *(undefined4 *)(param_2 + 0x10) = 1;
    DVar2 = WaitForSingleObject(DAT_5bf66000,2000);
    if (DVar2 == 0x102) {
      param_1 = (HSFCD__ *)0x0;
    }
    else {
      CloseHandle(DAT_5bf66000);
      DAT_5bf66000 = (HANDLE)0x0;
      param_1 = DAT_5bf66018;
    }
    if (DAT_5bf66020 != 0) {
      DAT_5bf66008 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf03720
                                  ,&DAT_5bf66000,0,(LPDWORD)&DAT_5bf6600c);
      if (DAT_5bf66008 == (HANDLE)0x0) {
        return -0x7ff8fff2;
      }
      DVar2 = WaitForSingleObject(DAT_5bf66008,2000);
      param_1 = (HSFCD__ *)0x0;
      if (DVar2 != 0x102) {
        CloseHandle(DAT_5bf66008);
        DAT_5bf66008 = (HANDLE)0x0;
        return 0;
      }
    }
  }
  else if (iVar5 == 2) {
    if (DAT_5bf66000 != (HANDLE)0x0) {
      *(undefined4 *)(param_2 + 0x10) = 1;
      DVar2 = WaitForSingleObject(DAT_5bf66000,0x32);
      if (DVar2 == 0x102) {
        return 0;
      }
      CloseHandle(DAT_5bf66000);
      DAT_5bf66000 = (HANDLE)0x0;
      return (long)DAT_5bf66018;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return (long)param_1;
}


