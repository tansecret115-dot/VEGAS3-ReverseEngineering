/* Module: vegas30k.dll
   Function: FUN_011b6df0
   Address: 011b6df0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_011b6df0(HKEY param_1,DWORD param_2,LPCLSID param_3)

{
  LSTATUS LVar1;
  HRESULT HVar2;
  HFILE HVar3;
  int iVar4;
  HRESULT HVar5;
  _OFSTRUCT *p_Var6;
  HKEY local_4e8;
  DWORD local_4e4 [2];
  HKEY local_4dc;
  HKEY local_4d8;
  char local_4d4 [4];
  char local_4d0 [4];
  char local_4cc [4];
  char local_4c8 [4];
  char local_4c4 [4];
  char local_4c0 [2];
  char local_4be;
  BYTE local_4bc [44];
  _OFSTRUCT local_490;
  WCHAR local_408 [127];
  undefined2 local_30a;
  CHAR local_308 [260];
  BYTE local_204 [256];
  CHAR local_104 [260];
  
  local_4d0._0_2_ = s_CLSID_011db9f4._4_2_;
  local_4cc = (char  [4])s_InProcServer32_011e35f8._0_4_;
  local_4d4 = (char  [4])s_CLSID_011db9f4._0_4_;
  local_4c4 = (char  [4])s_InProcServer32_011e35f8._8_4_;
  local_4c0 = (char  [2])s_InProcServer32_011e35f8._12_2_;
  local_4c8 = (char  [4])s_InProcServer32_011e35f8._4_4_;
  HVar5 = 1;
  local_4be = s_InProcServer32_011e35f8[0xe];
  LVar1 = RegEnumKeyA(param_1,param_2,local_308,0x104);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(param_1,local_308,0,0x20019,&local_4e8);
    if (LVar1 == 0) {
      local_4e4[0] = 1;
      local_4e4[1] = 0x2a;
      LVar1 = RegQueryValueExA(local_4e8,local_4d4,(LPDWORD)0x0,local_4e4,local_4bc,local_4e4 + 1);
      if (LVar1 == 0) {
        MultiByteToWideChar(0,1,(LPCSTR)local_4bc,-1,local_408,0x80);
        local_30a = 0;
        HVar2 = CLSIDFromString(local_408,param_3);
        if (HVar2 < 0) {
          RegCloseKey(local_4e8);
          return HVar2;
        }
        SfPrintF(local_104,"%s\\%s",local_4d4,local_4bc);
        LVar1 = RegOpenKeyA((HKEY)&DAT_80000000,local_104,&local_4d8);
        if (LVar1 == 0) {
          LVar1 = RegOpenKeyExA(local_4d8,local_4cc,0,0x20019,&local_4dc);
          if (LVar1 == 0) {
            local_4e4[0] = 1;
            local_4e4[1] = 0x100;
            LVar1 = RegQueryValueExA(local_4dc,(LPCSTR)0x0,(LPDWORD)0x0,local_4e4,local_204,
                                     local_4e4 + 1);
            if (LVar1 == 0) {
              p_Var6 = &local_490;
              for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
                p_Var6->cBytes = '\0';
                p_Var6->fFixedDisk = '\0';
                p_Var6->nErrCode = 0;
                p_Var6 = (_OFSTRUCT *)&p_Var6->Reserved1;
              }
              local_490.cBytes = 0x88;
              HVar3 = OpenFile((LPCSTR)local_204,&local_490,0x4000);
              if (HVar3 != 0) {
                HVar5 = 0;
              }
            }
            RegCloseKey(local_4dc);
          }
          RegCloseKey(local_4d8);
        }
      }
      RegCloseKey(local_4e8);
      return HVar5;
    }
  }
  else if (LVar1 == 0x103) {
    HVar5 = 0x4e001;
  }
  return HVar5;
}


