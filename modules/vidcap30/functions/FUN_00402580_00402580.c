/* Module: vidcap30.exe
   Function: FUN_00402580
   Address: 00402580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402580(HWND param_1)

{
  LPSTR lpString;
  int iVar1;
  uint iMaxLength;
  undefined4 local_10;
  uint local_c;
  undefined1 *local_8;
  
  lpString = GetCommandLineA();
  local_10 = 0x63c;
  if (lpString == (LPSTR)0x0) {
    iMaxLength = 0;
  }
  else {
    iVar1 = lstrlenA(lpString);
    iMaxLength = iVar1 + 1;
    if (0x7fff < iMaxLength) {
      iMaxLength = 0x8000;
    }
  }
  local_c = iMaxLength;
  FUN_00579db0();
  local_8 = &stack0xffffffe4;
  lstrcpynA(&stack0xffffffe4,lpString,iMaxLength);
  (&stack0xffffffe3)[iMaxLength] = 0;
  SendMessageA(param_1,0x4a,0,(LPARAM)&local_10);
  return;
}


