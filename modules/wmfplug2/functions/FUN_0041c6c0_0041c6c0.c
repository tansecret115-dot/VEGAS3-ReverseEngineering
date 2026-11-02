/* Module: wmfplug2.dll
   Function: FUN_0041c6c0
   Address: 0041c6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c6c0(HWND param_1,int param_2)

{
  WPARAM WVar1;
  LPARAM *pLVar2;
  WPARAM local_108;
  WPARAM local_104;
  uchar local_100 [256];
  
  FUN_0041c660(param_1,(uint)(param_2 != 0));
  CheckDlgButton(param_1,0x3e9,(uint)(param_2 != 0));
  SendDlgItemMessageA(param_1,2000,0x14b,0,0);
  pLVar2 = &DAT_00488860;
  local_104 = 3;
  local_108 = 0;
  do {
    FUN_00425a40(local_100,"$d");
    WVar1 = SendDlgItemMessageA(param_1,2000,0x143,0,(LPARAM)local_100);
    if (-1 < (int)WVar1) {
      SendDlgItemMessageA(param_1,2000,0x151,local_108,*pLVar2);
    }
    if (*pLVar2 == param_2) {
      local_104 = WVar1;
    }
    pLVar2 = pLVar2 + 1;
    local_108 = local_108 + 1;
  } while (pLVar2 < s_Software_Sonic_Foundry_Streaming_00488870);
  SendDlgItemMessageA(param_1,2000,0x14e,local_104,0);
  return;
}


