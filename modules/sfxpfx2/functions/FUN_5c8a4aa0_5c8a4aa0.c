/* Module: sfxpfx2.dll
   Function: FUN_5c8a4aa0
   Address: 5c8a4aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8a4aa0(HWND param_1,int param_2)

{
  LPCSTR lpString;
  LPCSTR lpString_00;
  
  lpString = *(LPCSTR *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,(LONG)lpString);
  SetDlgItemTextA(param_1,0x57a,lpString);
  lpString_00 = lpString + 0xb;
  if (lpString[0xb] == '\0') {
    lpString_00 = FUN_5c8a44b0(0x519);
  }
  SetDlgItemTextA(param_1,0x57b,lpString_00);
  return 1;
}


