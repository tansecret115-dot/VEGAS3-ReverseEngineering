/* Module: vegas30k.dll
   Function: FUN_0102bff0
   Address: 0102bff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0102bff0(HKEY param_1,LPCSTR param_2,int *param_3)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD dwIndex;
  HKEY local_8c;
  CLSID local_88;
  CHAR local_78 [40];
  WCHAR local_50 [39];
  undefined2 local_2;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  LVar1 = RegOpenKeyExA(param_1,param_2,0,0x20019,&local_8c);
  if (LVar1 == 0) {
    dwIndex = 0;
    iVar2 = RegEnumKeyA(local_8c,0,local_78,0x28);
    while (iVar2 == 0) {
      MultiByteToWideChar(0,1,local_78,-1,local_50,0x28);
      local_2 = 0;
      CLSIDFromString(local_50,&local_88);
      *param_3 = *param_3 + local_88.Data1;
      param_3[1] = param_3[1] + local_88._4_4_;
      param_3[2] = param_3[2] + local_88.Data4._0_4_;
      dwIndex = dwIndex + 1;
      param_3[3] = param_3[3] + local_88.Data4._4_4_;
      iVar2 = RegEnumKeyA(local_8c,dwIndex,local_78,0x28);
    }
    RegCloseKey(local_8c);
  }
  return;
}


