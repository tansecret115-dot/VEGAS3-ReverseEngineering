/* Module: sftrkfx1.dll
   Function: FUN_5cc00770
   Address: 5cc00770
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc00770(HKEY param_1,uchar *param_2,LPDWORD param_3,byte *param_4,LPDWORD param_5)

{
  LSTATUS LVar1;
  uint uVar2;
  DWORD local_8c;
  uint local_88;
  DWORD local_84;
  uchar local_80 [128];
  
  LVar1 = RegQueryValueExA(param_1,(LPCSTR)param_2,(LPDWORD)0x0,param_3,param_4,param_5);
  if (LVar1 != 0) {
    return 0x80070005;
  }
  _mbscpy(local_80,param_2);
  _mbscat(local_80,"C");
  local_84 = 4;
  LVar1 = RegQueryValueExA(param_1,(LPCSTR)local_80,(LPDWORD)0x0,&local_8c,(LPBYTE)&local_88,
                           &local_84);
  if (LVar1 != 0) {
    return 0x80070057;
  }
  if (local_8c != 4) {
    return 0x80070057;
  }
  if (*param_3 == 1) {
    uVar2 = FUN_5cbfdff0((char *)param_4,-0x2028495c,(LPSTR)0x1);
  }
  else {
    uVar2 = FUN_5cbfe070((uint)*param_4,-0x2028495c);
  }
  return -(uint)(local_88 != uVar2) & 0x80070057;
}


