/* Module: sfcdi.dll
   Function: SfScsi_FillHostList
   Address: 5bf0b1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_FillHostList(struct HWND__ *) */

int SfScsi_FillHostList(HWND__ *param_1)

{
  BYTE *pBVar1;
  LPSTR lParam;
  WPARAM WVar2;
  uint uVar3;
  HCURSOR pHVar4;
  HSFSCSIADAPTER__ *pHVar5;
  int iVar6;
  uint lParam_00;
  ulong local_d8;
  uchar local_d4 [80];
  tSFSCSIINQUIRYDATA local_84 [132];
  
                    /* 0xb1b0  103  ?SfScsi_FillHostList@@YGHPAUHWND__@@@Z */
  pBVar1 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4d);
  lParam_00 = 0;
  SendMessageA(param_1,0xb,0,0);
  SendMessageA(param_1,0x14b,0,0);
  lParam = FUN_5bf283e0(DAT_5bf65fc4,0x9c4e);
  WVar2 = SendMessageA(param_1,0x143,0,(LPARAM)lParam);
  SendMessageA(param_1,0x151,WVar2,-1);
  uVar3 = SfScsi_GetNumAdapters();
  if (uVar3 != 0) {
    pHVar4 = (HCURSOR)FUN_5bf28030((undefined4 *)0x0,(LPCSTR)0x7f02);
    pHVar4 = SetCursor(pHVar4);
    if (uVar3 != 0) {
      do {
        pHVar5 = SfScsi_OpenAdapter(lParam_00,0x84,&local_d8);
        if ((pHVar5 == (HSFSCSIADAPTER__ *)0x0) ||
           (iVar6 = SfScsi_GetInquiryData(pHVar5,local_84), iVar6 == 0)) {
          FUN_5bf283e0(DAT_5bf65fc4,0x9c4e);
        }
        FUN_5bf25750(local_d4,pBVar1);
        WVar2 = SendMessageA(param_1,0x143,0,(LPARAM)local_d4);
        SendMessageA(param_1,0x151,WVar2,lParam_00);
        if (pHVar5 != (HSFSCSIADAPTER__ *)0x0) {
          SfScsi_CloseAdapter(pHVar5);
        }
        lParam_00 = lParam_00 + 1;
      } while (lParam_00 < uVar3);
    }
    SetCursor(pHVar4);
    lParam_00 = 1;
  }
  SendMessageA(param_1,0xb,1,0);
  SendMessageA(param_1,0x14e,0,0);
  return lParam_00;
}


