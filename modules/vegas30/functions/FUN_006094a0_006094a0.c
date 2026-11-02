/* Module: vegas30.exe
   Function: FUN_006094a0
   Address: 006094a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_006094a0(HKEY param_1)

{
  HKEY hKey;
  int iVar1;
  LSTATUS LVar2;
  int local_c;
  int local_8;
  DWORD local_4;
  
  hKey = param_1;
  local_c = 0;
  iVar1 = FUN_006073a0(param_1,&DAT_00633388,&local_c);
  if (-1 < iVar1) {
    param_1 = (HKEY)0x4;
    LVar2 = RegQueryValueExA(hKey,"Merit",(LPDWORD)0x0,&local_4,(LPBYTE)&local_8,(LPDWORD)&param_1);
    if ((LVar2 == 0) && (local_c == local_8)) {
      return 1;
    }
  }
  return 0;
}


