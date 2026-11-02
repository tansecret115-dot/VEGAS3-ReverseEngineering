/* Module: sftrans1.dll
   Function: FUN_00488f50
   Address: 00488f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00488f50(char param_1)

{
  ushort uVar1;
  undefined1 uStack00000005;
  uint local_4;
  
  uVar1 = GetKeyState(0x11);
  if (((uVar1 & 0x8000) == 0) &&
     (((('/' < param_1 && (param_1 < ':')) || (('`' < param_1 && (param_1 < '{')))) ||
      (('@' < param_1 && (param_1 < '[')))))) {
    uStack00000005 = 0;
    MultiByteToWideChar(0,1,&param_1,-1,(LPWSTR)&local_4,2);
    local_4 = local_4 & 0xffff;
    FUN_00487d40(&local_4,0);
    return 0;
  }
  return 1;
}


