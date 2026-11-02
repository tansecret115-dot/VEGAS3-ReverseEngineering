/* Module: g2plug.dll
   Function: FUN_5f8111c0
   Address: 5f8111c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8111c0(int param_1,undefined4 param_2)

{
  char *pcVar1;
  HWND pHVar2;
  uchar *puVar3;
  uchar local_104 [260];
  
  GetModuleFileNameA(DAT_5f877460,(LPSTR)local_104,0x104);
  pcVar1 = FUN_5f82a500((LPCSTR)local_104);
  *pcVar1 = '\0';
  if (param_1 == 1) {
    param_1 = 0xf;
  }
  else if (param_1 == 0xb) {
    param_1 = 0;
  }
  _mbscat(local_104,(uchar *)"sfrealg2.chm");
  puVar3 = local_104;
  pHVar2 = GetDesktopWindow();
  FUN_5f811240(pHVar2,puVar3,param_1,param_2);
  return;
}


