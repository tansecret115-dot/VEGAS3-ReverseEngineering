/* Module: sfs4rw.dll
   Function: FUN_0040e800
   Address: 0040e800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040e800(int param_1,BYTE *param_2,int param_3,uint *param_4,uchar *param_5)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  UINT UVar4;
  uchar local_618 [260];
  uchar local_514 [260];
  CHAR local_410 [260];
  CHAR local_30c [260];
  CHAR local_208 [260];
  uchar local_104 [260];
  
  iVar1 = FUN_00404340(param_1,local_618,0x104);
  if (iVar1 < 0) {
    puVar2 = FUN_0041f970(DAT_004a811c,0x28bf);
    _mbscpy(param_5,puVar2);
    goto LAB_0040eab9;
  }
  GetPrivateProfileStringA("Error","Code","Error",local_410,0x104,(LPCSTR)local_618);
  iVar1 = lstrcmpA("Error",local_410);
  if (iVar1 != 0) {
    GetPrivateProfileStringA("Error","Description","Error",(LPSTR)local_104,0x104,(LPCSTR)local_618)
    ;
    iVar1 = FUN_0042bfb0(local_410,(undefined4 *)0x0);
    if (iVar1 < 0) {
      _mbscpy(param_5,local_104);
      goto LAB_0040eab9;
    }
    GetPrivateProfileStringA("ResponseType","Type","Error",local_208,0x104,(LPCSTR)local_618);
    iVar3 = lstrcmpA("Error",local_208);
    if (iVar3 == 0) {
      puVar2 = FUN_0041f970(DAT_004a811c,0x28bf);
      _mbscpy(param_5,puVar2);
      iVar1 = -0x7ffb1ed4;
      goto LAB_0040eab9;
    }
    iVar3 = lstrcmpA("Error",local_208);
    if (iVar3 == 0) {
      puVar2 = FUN_0041f970(DAT_004a811c,0x28bf);
      _mbscpy(param_5,puVar2);
      iVar1 = -0x7ffb1ec1;
      goto LAB_0040eab9;
    }
    GetPrivateProfileStringA("UserID","UserID","Error",(LPSTR)local_514,0x104,(LPCSTR)local_618);
    iVar3 = lstrcmpA("Error",(LPCSTR)local_514);
    if (iVar3 != 0) {
      iVar3 = lstrcmpA((LPCSTR)local_514,(LPCSTR)(param_2 + 0x39f));
      if (iVar3 != 0) {
        _mbscpy(param_2 + 0x39f,local_514);
        if (*(int *)(param_3 + 0x194) == 0) {
          FUN_00404010(param_2);
        }
      }
      GetPrivateProfileStringA
                ("UserID","NewRegistrationFlag","Error",local_30c,0x104,(LPCSTR)local_618);
      iVar3 = lstrcmpA("Error",local_30c);
      if (iVar3 == 0) {
        puVar2 = FUN_0041f970(DAT_004a811c,0x28bf);
        _mbscpy(param_5,puVar2);
        iVar1 = -0x7ffb1ed4;
      }
      else {
        iVar3 = FUN_0042bfb0(local_30c,(undefined4 *)0x0);
        *param_4 = (uint)(iVar3 != 0);
      }
      goto LAB_0040eab9;
    }
  }
  puVar2 = FUN_0041f970(DAT_004a811c,0x28bf);
  _mbscpy(param_5,puVar2);
  iVar1 = -0x7ffb1ed4;
LAB_0040eab9:
  UVar4 = GetProfileIntA("Debug","LogReg",0);
  if (UVar4 == 0) {
    DeleteFileA((LPCSTR)local_618);
  }
  return iVar1;
}


