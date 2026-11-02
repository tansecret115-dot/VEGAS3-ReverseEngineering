/* Module: vegas30.exe
   Function: FUN_005d8620
   Address: 005d8620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d8620(HWND param_1,int param_2)

{
  HWND pHVar1;
  undefined1 *puVar2;
  undefined1 local_104 [260];
  
  SfPrintF(local_104,&DAT_00619b24,*(undefined2 *)(param_2 + 0xd2a));
  puVar2 = local_104;
  pHVar1 = GetDlgItem(param_1,0x438);
  SfSetWindowText(pHVar1,puVar2);
  return;
}


