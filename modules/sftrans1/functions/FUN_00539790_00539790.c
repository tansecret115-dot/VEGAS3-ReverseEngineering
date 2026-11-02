/* Module: sftrans1.dll
   Function: FUN_00539790
   Address: 00539790
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00539790(HKEY param_1,uchar *param_2,LPDWORD param_3,LPBYTE param_4,LPDWORD param_5)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD local_8c;
  int local_88 [2];
  uchar local_80 [128];
  
  LVar1 = RegQueryValueExA(param_1,(LPCSTR)param_2,(LPDWORD)0x0,param_3,param_4,param_5);
  if (LVar1 != 0) {
    return 0x80070005;
  }
  _mbscpy(local_80,param_2);
  _mbscat(local_80,"C");
  local_88[1] = 4;
  LVar1 = RegQueryValueExA(param_1,(LPCSTR)local_80,(LPDWORD)0x0,&local_8c,(LPBYTE)local_88,
                           (LPDWORD)(local_88 + 1));
  if (LVar1 != 0) {
    return 0x80070057;
  }
  if (local_8c != 4) {
    return 0x80070057;
  }
  if (*param_3 == 1) {
    iVar2 = FUN_00537010(param_4,0xdfd7b6a4,1);
  }
  else {
    iVar2 = FUN_00537090(*param_4,0xdfd7b6a4);
  }
  return -(uint)(local_88[0] != iVar2) & 0x80070057;
}


