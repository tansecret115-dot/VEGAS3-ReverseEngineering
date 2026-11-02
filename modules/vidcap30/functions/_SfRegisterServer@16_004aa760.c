/* Module: vidcap30.exe
   Function: _SfRegisterServer@16
   Address: 004aa760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfRegisterServer_16(HMODULE param_1,GUID *param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  LSTATUS LVar2;
  DWORD DVar3;
  HKEY local_268;
  HKEY local_264;
  HKEY local_260;
  undefined4 local_25c;
  undefined1 local_258;
  LONG local_254;
  char local_250 [4];
  char local_24c [4];
  char local_248 [4];
  char local_244 [2];
  char local_242;
  char local_240 [4];
  char local_23c [4];
  char local_238 [4];
  char local_234 [2];
  char local_232;
  CHAR local_230 [41];
  undefined1 local_207;
  OLECHAR local_204 [128];
  CHAR local_104 [260];
  
                    /* 0xaa760  603  _SfRegisterServer@16 */
  local_250 = (char  [4])s_InProcServer32_00599bfc._0_4_;
  local_24c = (char  [4])s_InProcServer32_00599bfc._4_4_;
  local_244 = (char  [2])s_InProcServer32_00599bfc._12_2_;
  local_242 = s_InProcServer32_00599bfc[0xe];
  local_248 = (char  [4])s_InProcServer32_00599bfc._8_4_;
  local_23c = (char  [4])s_ThreadingModel_00599bec._4_4_;
  local_238 = (char  [4])s_ThreadingModel_00599bec._8_4_;
  local_240 = (char  [4])s_ThreadingModel_00599bec._0_4_;
  local_232 = s_ThreadingModel_00599bec[0xe];
  local_25c = DAT_00599be4;
  local_234 = (char  [2])s_ThreadingModel_00599bec._12_2_;
  local_258 = DAT_00599be8;
  iVar1 = StringFromGUID2(param_2,local_204,0x80);
  if (iVar1 != 0) {
    if ((&stack0x00000000 == (undefined1 *)0x204) || (local_204[0] != L'\0')) {
      iVar1 = WideCharToMultiByte(0,0,local_204,-1,local_230,0x2a,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 == (undefined1 *)0x230) {
      iVar1 = 0;
    }
    else {
      local_230[0] = '\0';
      iVar1 = 1;
    }
    local_207 = 0;
    if ((0 < iVar1) && (iVar1 != 1)) {
      LVar2 = RegOpenKeyA((HKEY)0x80000000,"CLSID",&local_268);
      if (LVar2 != 0) {
        return 0x80004005;
      }
      local_254 = 0x104;
      RegQueryValueA(local_268,local_230,local_104,&local_254);
      if (param_4 == 0) {
        _SfRegDeleteKey_8(local_268,local_230);
        RegCloseKey(local_268);
        return 0;
      }
      LVar2 = RegCreateKeyA(local_268,local_230,&local_264);
      if (LVar2 != 0) {
        RegCloseKey(local_268);
        return 0x80004005;
      }
      DVar3 = lstrlenA(param_3);
      RegSetValueA(local_264,(LPCSTR)0x0,1,param_3,DVar3);
      DVar3 = GetModuleFileNameA(param_1,local_104,0x104);
      RegSetValueA(local_264,local_250,1,local_104,DVar3);
      RegOpenKeyA(local_264,local_250,&local_260);
      RegSetValueExA(local_260,local_240,0,1,(BYTE *)&local_25c,5);
      RegCloseKey(local_260);
      RegCloseKey(local_264);
      RegCloseKey(local_268);
      return 0;
    }
  }
  return 0x80004005;
}


