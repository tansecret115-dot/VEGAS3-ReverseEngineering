/* Module: sfcdi.dll
   Function: cdr_UpdateFirmware
   Address: 5bf04f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall cdr_UpdateFirmware(struct HSFCD__ *,struct tCDRPARAMS_UPDATEFIRMWARE *) */

long cdr_UpdateFirmware(HSFCD__ *param_1,tCDRPARAMS_UPDATEFIRMWARE *param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0x4f90  207
                       ?cdr_UpdateFirmware@@YGJPAUHSFCD__@@PAUtCDRPARAMS_UPDATEFIRMWARE@@@Z */
  if (param_2 == (tCDRPARAMS_UPDATEFIRMWARE *)0x0) {
    return -0x7fffbffd;
  }
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar3 = *(int *)param_2;
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    uVar2 = FUN_5bf01e80(param_1);
    if (uVar2 != 0) {
      return 0;
    }
    iVar3 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                      (**(undefined4 **)(param_1 + 0x150),0x18,param_1,param_2);
    param_2 = (tCDRPARAMS_UPDATEFIRMWARE *)0x0;
    if (iVar3 != 0) {
      param_2 = (tCDRPARAMS_UPDATEFIRMWARE *)FUN_5bf01bf0((int)param_1,iVar3);
    }
    if (*(HSFSCSIPORT__ **)param_1 != (HSFSCSIPORT__ *)0x0) {
      SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
      return (long)param_2;
    }
  }
  else {
    if (iVar3 == 1) {
      _DAT_5bf66048 = param_1;
      _DAT_5bf6604c = param_2;
      DAT_5bf66040 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf04f20
                                  ,&DAT_5bf66040,0,(LPDWORD)&DAT_5bf66044);
      if (DAT_5bf66040 == (HANDLE)0x0) {
        return -0x7ff8fff2;
      }
      *(undefined4 *)(param_2 + 0x14) = 1;
      DVar1 = WaitForSingleObject(DAT_5bf66040,2000);
joined_r0x5bf05067:
      if (DVar1 != 0x102) {
        CloseHandle(DAT_5bf66040);
        DAT_5bf66040 = (HANDLE)0x0;
        return DAT_5bf66050;
      }
      return 0;
    }
    if (iVar3 == 2) {
      if (DAT_5bf66040 != (HANDLE)0x0) {
        *(undefined4 *)(param_2 + 0x14) = 1;
        DVar1 = WaitForSingleObject(DAT_5bf66040,0x32);
        goto joined_r0x5bf05067;
      }
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
  }
  return (long)param_2;
}


