/* Module: vidcap30.exe
   Function: SfMEditPrintF
   Address: 0047a020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 SfMEditPrintF(HWND param_1,char *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 local_800 [2048];
  
                    /* 0x7a020  536  SfMEditPrintF */
  bVar1 = true;
  if (param_2 == (char *)0x0) {
    SetWindowTextA(param_1,"");
    return 0;
  }
  if (*param_2 == '~') {
    bVar1 = false;
    do {
      param_2 = param_2 + 1;
    } while (*param_2 == '~');
  }
  uVar2 = _SfVPrintF_12(local_800,param_2,&stack0x0000000c);
  SendMessageA(param_1,0xb1,0xffffffff,-1);
  SendMessageA(param_1,0xc2,0,(LPARAM)local_800);
  if (bVar1) {
    SendMessageA(param_1,0xb1,0xffffffff,-1);
    SendMessageA(param_1,0xc2,0,0x5b6718);
  }
  return uVar2;
}


