/* Module: sfcdi.dll
   Function: SfScsi_ScanDevice
   Address: 5bf0ae90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_ScanDevice(struct HSFSCSIPORT__ *,struct _INQUIRYDATA *,unsigned long) */

int SfScsi_ScanDevice(HSFSCSIPORT__ *param_1,_INQUIRYDATA *param_2,ulong param_3)

{
  int iVar1;
  _scsicommand local_64 [8];
  undefined4 local_5c;
  undefined2 local_58;
  _INQUIRYDATA *local_1c;
  undefined4 local_18;
  
                    /* 0xae90  123  ?SfScsi_ScanDevice@@YGHPAUHSFSCSIPORT__@@PAU_INQUIRYDATA@@K@Z */
  SfScsi_InitCmdOut(param_1,local_64,0);
  local_18 = 0;
  SfScsi_ExecEx(param_1,local_64,0);
  SfScsi_InitCmdIn(param_1,local_64,0x12);
  local_5c = 0x12;
  local_58 = 0x60;
  local_1c = param_2;
  local_18 = 0x60;
  iVar1 = SfScsi_ExecEx(param_1,local_64,0);
  if (iVar1 == 0) {
    return -1;
  }
  return (byte)*param_2 & 0x1f;
}


