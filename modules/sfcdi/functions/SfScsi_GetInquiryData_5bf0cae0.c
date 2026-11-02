/* Module: sfcdi.dll
   Function: SfScsi_GetInquiryData
   Address: 5bf0cae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_GetInquiryData(struct HSFSCSIADAPTER__ *,struct tSFSCSIINQUIRYDATA *) */

int SfScsi_GetInquiryData(HSFSCSIADAPTER__ *param_1,tSFSCSIINQUIRYDATA *param_2)

{
  int iVar1;
  
                    /* 0xcae0  110
                       ?SfScsi_GetInquiryData@@YGHPAUHSFSCSIADAPTER__@@PAUtSFSCSIINQUIRYDATA@@@Z */
  iVar1 = FUN_5bf0c390((byte *)param_1,(uint *)param_2);
  return (uint)(-1 < iVar1);
}


