/* Module: sfcdi.dll
   Function: cdr_Erase
   Address: 5bf03540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall cdr_Erase(struct HSFCD__ *,struct tCDRPARAMS_ERASE *) */

long cdr_Erase(HSFCD__ *param_1,tCDRPARAMS_ERASE *param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
                    /* 0x3540  167  ?cdr_Erase@@YGJPAUHSFCD__@@PAUtCDRPARAMS_ERASE@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_2 == (tCDRPARAMS_ERASE *)0x0) {
    return -0x7fffbffd;
  }
  iVar3 = *(int *)param_2;
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      _DAT_5bf66030 = param_1;
      _DAT_5bf66034 = param_2;
      DAT_5bf66028 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf034b0
                                  ,&DAT_5bf66028,0,(LPDWORD)&DAT_5bf6602c);
      if (DAT_5bf66028 == (HANDLE)0x0) {
        return -0x7ff8fff2;
      }
      *(undefined4 *)(param_2 + 0x14) = 1;
      DVar1 = WaitForSingleObject(DAT_5bf66028,2000);
    }
    else {
      if (iVar3 != 2) {
        return (long)param_1;
      }
      if (DAT_5bf66028 == (HANDLE)0x0) {
        *(undefined4 *)(param_2 + 0x14) = 0;
        return 0;
      }
      *(undefined4 *)(param_2 + 0x14) = 1;
      DVar1 = WaitForSingleObject(DAT_5bf66028,0x32);
    }
    if (DVar1 == 0x102) {
      return 0;
    }
    CloseHandle(DAT_5bf66028);
    DAT_5bf66028 = (HANDLE)0x0;
    return DAT_5bf66038;
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  uVar2 = FUN_5bf01e80(param_1);
  if (uVar2 != 0) {
    return 0;
  }
  iVar3 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                    (**(undefined4 **)(param_1 + 0x150),0x14,param_1,param_2);
  lVar4 = 0;
  if (iVar3 != 0) {
    lVar4 = FUN_5bf01bf0((int)param_1,iVar3);
  }
  if (*(HSFSCSIPORT__ **)param_1 == (HSFSCSIPORT__ *)0x0) {
    return lVar4;
  }
  SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
  return lVar4;
}


