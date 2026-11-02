/* Module: sfcdi.dll
   Function: devdes_GetScsiInfo
   Address: 5bf03ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall devdes_GetScsiInfo(struct tPARAMETERS_DEVDES *,struct _INQUIRYDATA *) */

int devdes_GetScsiInfo(tPARAMETERS_DEVDES *param_1,_INQUIRYDATA *param_2)

{
  uint uVar1;
  int iVar2;
  HCURSOR hCursor;
  HSFSCSIADAPTER__ *pHVar3;
  HSFSCSIPORT__ *pHVar4;
  ulong uVar5;
  ulong local_8c;
  HCURSOR local_88;
  tSFSCSIINQUIRYDATA local_84 [132];
  
                    /* 0x3ea0  235
                       ?devdes_GetScsiInfo@@YGHPAUtPARAMETERS_DEVDES@@PAU_INQUIRYDATA@@@Z */
  uVar1 = SfScsi_GetNumAdapters();
  if (uVar1 == 0) {
    return -1;
  }
  if (*(uint *)(param_1 + 4) < uVar1) {
    iVar2 = FUN_5bf01c20((int *)param_1);
    if (iVar2 == 0) {
      hCursor = (HCURSOR)FUN_5bf28030((undefined4 *)0x0,(LPCSTR)0x7f02);
      local_88 = SetCursor(hCursor);
      pHVar3 = SfScsi_OpenAdapter(*(uint *)(param_1 + 4),0x84,&local_8c);
      uVar5 = local_8c;
      if (pHVar3 != (HSFSCSIADAPTER__ *)0x0) {
        iVar2 = SfScsi_GetInquiryData(pHVar3,local_84);
        if (iVar2 == 0) {
          SfScsi_CloseAdapter(pHVar3);
          uVar5 = local_8c;
        }
        else {
          pHVar4 = SfScsi_Open(*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),0x84,&local_8c);
          if (pHVar4 == (HSFSCSIPORT__ *)0x0) {
            SfScsi_CloseAdapter(pHVar3);
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = SfScsi_ScanDevice(pHVar4,param_2,3000);
            SfScsi_Close(pHVar4);
            SfScsi_CloseAdapter(pHVar3);
          }
        }
      }
      SetCursor(local_88);
      return uVar5;
    }
    return -1;
  }
  return -1;
}


