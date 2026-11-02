/* Module: sfcdi.dll
   Function: SfScsi_EnumDevices
   Address: 5bf0b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfScsi_EnumDevices(char *,struct _INQUIRYDATA *,unsigned int,unsigned int) */

long SfScsi_EnumDevices(char *param_1,_INQUIRYDATA *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  HSFSCSIPORT__ *pHVar2;
  uchar *_Source;
  int iVar3;
  _INQUIRYDATA *p_Var4;
  ulong local_64;
  _INQUIRYDATA local_60 [96];
  
                    /* 0xb3b0  97  ?SfScsi_EnumDevices@@YGJPADPAU_INQUIRYDATA@@II@Z */
  uVar1 = SfScsi_GetNumAdapters();
  if (uVar1 <= param_3) {
    return -0x7fffbffb;
  }
  if (param_4 < 8) {
    pHVar2 = SfScsi_Open(param_3,param_4,0x60,&local_64);
    uVar1 = param_3;
    if (pHVar2 != (HSFSCSIPORT__ *)0x0) {
      uVar1 = SfScsi_ScanDevice(pHVar2,local_60,DAT_5bf630e8);
      SfScsi_Close(pHVar2);
    }
    if (param_1 != (char *)0x0) {
      if ((int)uVar1 < 0) {
        _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4e);
        _mbscpy((uchar *)param_1,_Source);
        param_3 = 0x80040037;
      }
      else {
        SfScsi_FormatInquiryName(param_1,local_60);
        param_3 = 0;
      }
    }
    if (param_2 != (_INQUIRYDATA *)0x0) {
      p_Var4 = local_60;
      for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)param_2 = *(undefined4 *)p_Var4;
        p_Var4 = p_Var4 + 4;
        param_2 = param_2 + 4;
      }
    }
    return param_3;
  }
  return -0x7fffbffb;
}


