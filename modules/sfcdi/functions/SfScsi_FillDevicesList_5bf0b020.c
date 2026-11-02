/* Module: sfcdi.dll
   Function: SfScsi_FillDevicesList
   Address: 5bf0b020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_FillDevicesList(struct HWND__ *,unsigned int,int) */

int SfScsi_FillDevicesList(HWND__ *param_1,uint param_2,int param_3)

{
  LPSTR lParam;
  WPARAM WVar1;
  uint uVar2;
  HCURSOR pHVar3;
  HSFSCSIPORT__ *pHVar4;
  int iVar5;
  BYTE *pBVar6;
  ulong local_b4;
  uchar local_b0 [80];
  _INQUIRYDATA local_60 [96];
  
                    /* 0xb020  102  ?SfScsi_FillDevicesList@@YGHPAUHWND__@@IH@Z */
  SendMessageA(param_1,0xb,0,0);
  SendMessageA(param_1,0x14b,0,0);
  lParam = FUN_5bf283e0(DAT_5bf65fc4,0x9c4e);
  WVar1 = SendMessageA(param_1,0x143,0,(LPARAM)lParam);
  SendMessageA(param_1,0x151,WVar1,-1);
  uVar2 = SfScsi_GetNumAdapters();
  if (param_2 < uVar2) {
    pHVar3 = (HCURSOR)FUN_5bf28030((undefined4 *)0x0,(LPCSTR)0x7f02);
    pHVar3 = SetCursor(pHVar3);
    uVar2 = 0;
    do {
      pHVar4 = SfScsi_Open(param_2,uVar2,0x60,&local_b4);
      if (pHVar4 == (HSFSCSIPORT__ *)0x0) {
LAB_5bf0b0de:
        FUN_5bf283e0(DAT_5bf65fc4,0x9c4e);
        pBVar6 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4d);
        FUN_5bf25750(local_b0,pBVar6);
      }
      else {
        iVar5 = SfScsi_ScanDevice(pHVar4,local_60,DAT_5bf630e8);
        SfScsi_Close(pHVar4);
        if (iVar5 < 0) goto LAB_5bf0b0de;
        pBVar6 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4c);
        iVar5 = FUN_5bf25750(local_b0,pBVar6);
        SfScsi_FormatInquiryName((char *)(local_b0 + iVar5),local_60);
      }
      WVar1 = SendMessageA(param_1,0x143,0,(LPARAM)local_b0);
      SendMessageA(param_1,0x151,WVar1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    SetCursor(pHVar3);
  }
  else {
    param_3 = 0;
  }
  SendMessageA(param_1,0xb,1,0);
  if (param_3 < 0) {
    param_3 = 0;
  }
  SendMessageA(param_1,0x14e,param_3,0);
  return 1;
}


