/* Module: aviplug.dll
   Function: FUN_5f931290
   Address: 5f931290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f931290(void)

{
  CHAR local_280 [127];
  undefined1 local_201;
  OLECHAR local_200 [128];
  CHAR local_100 [256];
  
  StringFromGUID2((GUID *)&DAT_5f9d9f00,local_200,0x80);
  if ((&stack0x00000000 == (undefined1 *)0x200) || (local_200[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_200,-1,local_280,0x80,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x280) {
    local_280[0] = '\0';
  }
  local_201 = 0;
  wsprintfA(local_100,"CLSID\\%s");
  FUN_5f9311e0((HKEY)0x80000000,local_100);
  return 0;
}


