/* Module: vegas30.exe
   Function: FUN_0043f4f0
   Address: 0043f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043f4f0(HWND param_1,undefined4 *param_2,int param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  UINT Msg;
  uint bEnable;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  CHAR local_8c [20];
  CHAR local_78 [20];
  undefined4 local_64 [15];
  uint local_28;
  
  switch(param_3) {
  case 0x3fe:
    SfPrintF(local_8c,&DAT_00611f6c,param_2[0x1e]);
    SetDlgItemTextA(param_1,param_3,local_8c);
    lParam = param_2[0x1e];
    wParam = 1;
    Msg = 0x610;
    pHVar1 = GetDlgItem(param_1,0x3ff);
    SendMessageA(pHVar1,Msg,wParam,lParam);
    return 1;
  default:
    return 0;
  case 0x400:
  case 0x401:
  case 0x402:
    local_64[0] = 100;
    cdr_GetDeviceCaps((HSFCD__ *)*param_2,(cdrcaps_tag *)local_64);
    uVar4 = local_28 >> 0x16 & 1;
    if ((uVar4 == 0) || (param_2[0x20] == 0)) {
      iVar3 = 0x400;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
    }
    else {
      iVar3 = 0x402 - (uint)(param_2[0x21] != 0);
    }
    break;
  case 0x403:
    pHVar1 = GetDlgItem(param_1,param_3);
    SendMessageA(pHVar1,0xf1,param_2[0x22],0);
    return 1;
  case 0x405:
    uVar5 = FUN_0043e210();
    local_a4 = 0;
    _SfNanoTimeToHMSF_20(uVar5,&local_a4,0,0x4052c000);
    SfPrintF(local_78,"%02d:%02d:%02d:%02d",local_a0,local_9c,local_98,local_94);
    SetDlgItemTextA(param_1,param_3,local_78);
    return 1;
  case 0x406:
    pHVar1 = GetDlgItem(param_1,0x408);
    LVar2 = SendMessageA(pHVar1,0x146,0,0);
    iVar3 = FUN_0043f440(param_2[0x1f],LVar2);
    if (param_2[0x1f] == 0xffff) {
      iVar3 = iVar3 + -1;
    }
    uVar4 = FUN_0043f490(*param_2,(&DAT_0063dd60)[iVar3]);
    SfPrintF(local_8c,"%02d:%02d",(uVar4 / 1000) / 0x3c,(uVar4 / 1000) % 0x3c);
    SetDlgItemTextA(param_1,param_3,local_8c);
    return 1;
  case 0x408:
    pHVar1 = GetDlgItem(param_1,param_3);
    FUN_00429640(pHVar1,param_2[0x1f]);
    return 1;
  }
  CheckRadioButton(param_1,0x400,0x402,iVar3);
  bEnable = uVar4;
  pHVar1 = GetDlgItem(param_1,0x401);
  EnableWindow(pHVar1,bEnable);
  pHVar1 = GetDlgItem(param_1,0x402);
  EnableWindow(pHVar1,uVar4);
  return 1;
}


