/* Module: vegas30.exe
   Function: FUN_00538450
   Address: 00538450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00538450(int param_1)

{
  GUID *rguid;
  OLECHAR local_d0 [40];
  uchar local_80 [39];
  undefined1 local_59;
  
  if (*(int *)(param_1 + 0xe8c) == 400) {
    _mbscpy(&DAT_006574c4,(uchar *)"Sonic Foundry Vegas Video FX Keyframes ");
    rguid = (GUID *)FUN_00445d30();
    StringFromGUID2(rguid,local_d0,0x80);
    if ((&stack0x00000000 == (undefined1 *)0xd0) || (local_d0[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d0,-1,(LPSTR)local_80,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x80) {
      local_80[0] = '\0';
    }
    local_59 = 0;
    _mbscat(&DAT_006574c4,local_80);
    return &DAT_006574c4;
  }
  if (*(int *)(param_1 + 0xe8c) == 0x191) {
    FUN_0050c130();
    SfPrintF();
  }
  return &DAT_006574c4;
}


