/* Module: mcplugrw.dll
   Function: FUN_0040ed60
   Address: 0040ed60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ed60(int param_1,int param_2,undefined4 param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  UINT UVar5;
  int local_92c;
  uchar local_924 [260];
  uchar local_820 [260];
  CHAR local_71c [260];
  CHAR local_618 [260];
  CHAR local_514 [260];
  CHAR local_410 [260];
  CHAR local_30c [260];
  uchar local_208 [260];
  CHAR local_104 [260];
  
  local_92c = FUN_004043a0(param_1,local_924,0x104);
  if (local_92c < 0) {
    puVar1 = FUN_0041f9f0(DAT_004a811c,0x28bf);
    _mbscpy(param_4,puVar1);
    goto LAB_0040f0da;
  }
  GetPrivateProfileStringA("Error","Code","Error",local_618,0x104,(LPCSTR)local_924);
  iVar2 = lstrcmpA("Error",local_618);
  if (iVar2 == 0) {
LAB_0040edf3:
    puVar1 = FUN_0041f9f0(DAT_004a811c,0x28bf);
LAB_0040f0c9:
    _mbscpy(param_4,puVar1);
  }
  else {
    GetPrivateProfileStringA("Error","Description","Error",(LPSTR)local_208,0x104,(LPCSTR)local_924)
    ;
    local_92c = FUN_0042c030(local_618,(undefined4 *)0x0);
    if (local_92c < 0) {
      _mbscpy(param_4,local_208);
      goto LAB_0040f0da;
    }
    if (local_92c == 0x4e133) goto LAB_0040f0da;
    GetPrivateProfileStringA("ResponseType","Type","Error",local_410,0x104,(LPCSTR)local_924);
    iVar2 = lstrcmpA("Error",local_410);
    if (iVar2 == 0) {
LAB_0040f0af:
      puVar1 = FUN_0041f9f0(DAT_004a811c,0x28bf);
      goto LAB_0040f0c9;
    }
    iVar2 = lstrcmpA("Activation",local_410);
    if (iVar2 != 0) {
      puVar1 = FUN_0041f9f0(DAT_004a811c,0x28bf);
      _mbscpy(param_4,puVar1);
      local_92c = -0x7ffb1ec1;
      goto LAB_0040f0da;
    }
    if (param_2 != 0) goto LAB_0040f0da;
    _mbscpy(local_820,"");
    iVar2 = 0;
    DVar3 = GetPrivateProfileStringA
                      ("Activation",(LPCSTR)0x0,"Error",(LPSTR)local_820,0x104,(LPCSTR)local_924);
    iVar4 = lstrcmpA("Error",(LPCSTR)local_820);
    if (iVar4 != 0) {
      if (0 < (int)DVar3) {
        do {
          puVar1 = local_820 + iVar2;
          iVar4 = lstrlenA((LPCSTR)puVar1);
          iVar2 = iVar4 + 1 + iVar2;
          GetPrivateProfileStringA
                    ("Activation",(LPCSTR)puVar1,"Error",local_71c,0x104,(LPCSTR)local_924);
          iVar4 = lstrcmpA("Error",local_30c);
          if (iVar4 == 0) goto LAB_0040f0af;
          GetPrivateProfileStringA(local_71c,"RegRoot","Error",local_30c,0x104,(LPCSTR)local_924);
          iVar4 = lstrcmpA("Error",local_30c);
          if (iVar4 == 0) goto LAB_0040edf3;
          GetPrivateProfileStringA(local_71c,"RegKey","Error",local_104,0x104,(LPCSTR)local_924);
          iVar4 = lstrcmpA("Error",local_104);
          if (iVar4 == 0) {
            puVar1 = FUN_0041f9f0(DAT_004a811c,0x28bf);
            goto LAB_0040f0c9;
          }
          GetPrivateProfileStringA(local_71c,"RegData","Error",local_514,0x104,(LPCSTR)local_924);
          iVar4 = lstrcmpA("Error",local_514);
          if (iVar4 == 0) goto LAB_0040f0af;
          FUN_004120c0(DAT_004a8128,local_514);
        } while (iVar2 < (int)DVar3);
      }
      goto LAB_0040f0da;
    }
    puVar1 = FUN_0041f9f0(DAT_004a811c,0x28bf);
    _mbscpy(param_4,puVar1);
  }
  local_92c = -0x7ffb1ed4;
LAB_0040f0da:
  UVar5 = GetProfileIntA("Debug","LogReg",0);
  if (UVar5 == 0) {
    DeleteFileA((LPCSTR)local_924);
  }
  return local_92c;
}


