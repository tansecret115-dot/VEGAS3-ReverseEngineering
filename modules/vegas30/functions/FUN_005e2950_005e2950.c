/* Module: vegas30.exe
   Function: FUN_005e2950
   Address: 005e2950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e2950(HWND param_1,int *param_2)

{
  int iVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  undefined1 local_104 [260];
  
  GetDlgItem(param_1,0x436);
  iVar1 = *param_2;
  pHVar2 = GetDlgItem(param_1,0x45b);
  if (pHVar2 != (HWND)0x0) {
    if (iVar1 == 1) {
      SfPrintF(local_104,&DAT_00619b24,param_2[0x45]);
      puVar3 = local_104;
    }
    else {
      puVar3 = &DAT_0060f98c;
    }
    SfSetWindowText(pHVar2,puVar3);
  }
  _SfDlgEnableControls_16(param_1,&DAT_00646ce8,3,iVar1 == 1);
  return;
}


