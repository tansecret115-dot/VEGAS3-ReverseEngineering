/* Module: vegas30.exe
   Function: FUN_005d8490
   Address: 005d8490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d8490(HWND param_1,int param_2)

{
  HWND pHVar1;
  undefined1 *puVar2;
  undefined1 local_104 [260];
  
  SfPrintF(local_104,&DAT_00619ba4,*(undefined4 *)(param_2 + 0xd18),*(undefined4 *)(param_2 + 0xd1c)
          );
  puVar2 = local_104;
  pHVar1 = GetDlgItem(param_1,0x471);
  SfSetWindowText(pHVar1,puVar2);
  return;
}


