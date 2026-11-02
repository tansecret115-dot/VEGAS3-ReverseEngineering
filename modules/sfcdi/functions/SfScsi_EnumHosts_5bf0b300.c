/* Module: sfcdi.dll
   Function: SfScsi_EnumHosts
   Address: 5bf0b300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfScsi_EnumHosts(char *,unsigned int) */

long SfScsi_EnumHosts(char *param_1,uint param_2)

{
  uint uVar1;
  HSFSCSIADAPTER__ *pHVar2;
  int iVar3;
  uchar *_Source;
  long lVar4;
  ulong local_88;
  tSFSCSIINQUIRYDATA local_84 [68];
  uchar local_40 [64];
  
                    /* 0xb300  98  ?SfScsi_EnumHosts@@YGJPADI@Z */
  uVar1 = SfScsi_GetNumAdapters();
  if (uVar1 <= param_2) {
    return -0x7fffbffb;
  }
  pHVar2 = SfScsi_OpenAdapter(param_2,0x84,&local_88);
  if (pHVar2 != (HSFSCSIADAPTER__ *)0x0) {
    iVar3 = SfScsi_GetInquiryData(pHVar2,local_84);
    if (iVar3 != 0) {
      _mbscpy((uchar *)param_1,local_40);
      lVar4 = 0;
      goto LAB_5bf0b38d;
    }
  }
  _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4e);
  _mbscpy((uchar *)param_1,_Source);
  lVar4 = -0x7ffbffc9;
LAB_5bf0b38d:
  if (pHVar2 != (HSFSCSIADAPTER__ *)0x0) {
    SfScsi_CloseAdapter(pHVar2);
  }
  return lVar4;
}


