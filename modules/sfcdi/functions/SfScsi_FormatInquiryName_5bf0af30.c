/* Module: sfcdi.dll
   Function: SfScsi_FormatInquiryName
   Address: 5bf0af30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_FormatInquiryName(char *,struct _INQUIRYDATA *) */

int SfScsi_FormatInquiryName(char *param_1,_INQUIRYDATA *param_2)

{
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40;
  uchar local_28 [40];
  
                    /* 0xaf30  106  ?SfScsi_FormatInquiryName@@YGHPADPAU_INQUIRYDATA@@@Z */
  local_48 = local_48 & 0xffffff00;
  local_50 = *(undefined4 *)(param_2 + 8);
  local_4c = *(uint *)(param_2 + 0xc);
  _mbscpy(local_28,(uchar *)&local_50);
  FUN_5bf0c090(local_28);
  _mbscpy((uchar *)param_1,local_28);
  local_40 = 0;
  local_50 = *(undefined4 *)(param_2 + 0x10);
  local_4c = *(uint *)(param_2 + 0x14);
  local_48 = *(uint *)(param_2 + 0x18);
  local_44 = *(undefined4 *)(param_2 + 0x1c);
  _mbscpy(local_28,(uchar *)&local_50);
  FUN_5bf0c090(local_28);
  _mbscat((uchar *)param_1," ");
  _mbscat((uchar *)param_1,local_28);
  local_50 = *(undefined4 *)(param_2 + 0x20);
  local_4c = local_4c & 0xffffff00;
  _mbscpy(local_28,(uchar *)&local_50);
  FUN_5bf0c090(local_28);
  _mbscat((uchar *)param_1," ");
  _mbscat((uchar *)param_1,local_28);
  return 1;
}


