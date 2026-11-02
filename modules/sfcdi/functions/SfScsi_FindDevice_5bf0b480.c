/* Module: sfcdi.dll
   Function: SfScsi_FindDevice
   Address: 5bf0b480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_FindDevice(unsigned int,char *,unsigned int) */

int SfScsi_FindDevice(uint param_1,char *param_2,uint param_3)

{
  uint uVar1;
  HSFSCSIPORT__ *pHVar2;
  int iVar3;
  ulong local_b4;
  char local_b0 [80];
  _INQUIRYDATA local_60 [96];
  
                    /* 0xb480  104  ?SfScsi_FindDevice@@YGHIPADI@Z */
  uVar1 = SfScsi_GetNumAdapters();
  if (param_1 < uVar1) {
    pHVar2 = SfScsi_Open(param_1,param_3,0x60,&local_b4);
    if (pHVar2 != (HSFSCSIPORT__ *)0x0) {
      iVar3 = SfScsi_ScanDevice(pHVar2,local_60,DAT_5bf630e8);
      SfScsi_Close(pHVar2);
      if (-1 < iVar3) {
        SfScsi_FormatInquiryName(local_b0,local_60);
        iVar3 = lstrcmpA(param_2,local_b0);
        if (iVar3 == 0) {
          return param_3;
        }
      }
    }
  }
  return -1;
}


