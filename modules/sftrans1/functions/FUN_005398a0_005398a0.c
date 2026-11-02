/* Module: sftrans1.dll
   Function: FUN_005398a0
   Address: 005398a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005398a0(HKEY param_1,uchar *param_2,DWORD param_3,BYTE *param_4,DWORD param_5)

{
  LSTATUS LVar1;
  undefined4 local_84;
  uchar local_80 [128];
  
  if ((param_3 != 1) && (param_3 != 4)) {
    return 0x80070057;
  }
  LVar1 = RegSetValueExA(param_1,(LPCSTR)param_2,0,param_3,param_4,param_5);
  if (LVar1 != 0) {
    return 0x80070005;
  }
  _mbscpy(local_80,param_2);
  _mbscat(local_80,"C");
  if (param_3 == 1) {
    local_84 = FUN_00537010(param_4,0xdfd7b6a4,1);
  }
  else {
    local_84 = FUN_00537090(*param_4,0xdfd7b6a4);
  }
  LVar1 = RegSetValueExA(param_1,(LPCSTR)local_80,0,4,(BYTE *)&local_84,4);
  return -(uint)(LVar1 != 0) & 0x80070005;
}


