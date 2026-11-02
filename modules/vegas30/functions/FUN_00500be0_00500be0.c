/* Module: vegas30.exe
   Function: FUN_00500be0
   Address: 00500be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00500be0(undefined4 *param_1)

{
  HWND pHVar1;
  undefined1 *puVar2;
  undefined1 local_14 [20];
  
  SfPrintF(local_14,&DAT_0061052c,*param_1);
  puVar2 = local_14;
  pHVar1 = GetDlgItem((HWND)param_1[6],0x469);
  SfSetWindowText(pHVar1,puVar2);
  return;
}


