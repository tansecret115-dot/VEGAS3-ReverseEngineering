/* Module: sfppack3.dll
   Function: FUN_5cc4b070
   Address: 5cc4b070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc4b070(HWND param_1,int param_2)

{
  LPCSTR lpString;
  LPCSTR lpString_00;
  
  lpString = *(LPCSTR *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,(LONG)lpString);
  SetDlgItemTextA(param_1,0x57a,lpString);
  lpString_00 = lpString + 0xb;
  if (lpString[0xb] == '\0') {
    lpString_00 = FUN_5cc4aa80(0x519);
  }
  SetDlgItemTextA(param_1,0x57b,lpString_00);
  return 1;
}


