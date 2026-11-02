/* Module: dsetup.dll
   Function: DirectXSetupGetFileVersion
   Address: 00402040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DirectXSetupGetFileVersion(HMMIO param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  MMRESULT MVar5;
  LONG LVar6;
  BOOL BVar7;
  undefined4 uVar8;
  _MMIOINFO *p_Var9;
  _MMIOINFO local_80;
  _MMCKINFO local_38;
  _MMCKINFO local_24;
  DWORD local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = param_3;
                    /* 0x2040  13  DirectXSetupGetFileVersion */
  puVar1 = param_2;
  *param_2 = 0;
  local_8 = 0;
  *param_3 = 0;
  pcVar3 = FUN_00401c14((char *)param_1);
  pcVar3 = FUN_00401c43(pcVar3);
  iVar4 = lstrcmpiA(pcVar3,"DLS");
  if (iVar4 != 0) {
    param_2 = (undefined4 *)GetFileVersionInfoSizeA((LPCSTR)param_1,&local_10);
    if (param_2 == (undefined4 *)0x0) {
      return local_8;
    }
    param_3 = LocalAlloc(0x40,(SIZE_T)param_2);
    if (param_3 == (undefined4 *)0x0) {
      return local_8;
    }
    BVar7 = GetFileVersionInfoA((LPCSTR)param_1,local_10,(DWORD)param_2,param_3);
    if (BVar7 != 0) {
      param_1 = (HMMIO)0x34;
      BVar7 = VerQueryValueA(param_3,"\\",&param_2,(PUINT)&param_1);
      if ((BVar7 != 0) && (param_2 != (undefined4 *)0x0)) {
        *puVar1 = param_2[2];
        *puVar2 = param_2[3];
        local_8 = 1;
      }
    }
    LocalFree(param_3);
    return local_8;
  }
  p_Var9 = &local_80;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    p_Var9->dwFlags = 0;
    p_Var9 = (_MMIOINFO *)&p_Var9->fccIOProc;
  }
  param_1 = mmioOpenA((LPSTR)param_1,&local_80,0);
  if (param_1 == (HMMIO)0x0) {
    return 0;
  }
  local_24.ckid = 0;
  local_24.cksize = 0;
  local_24.fccType = 0;
  local_24.dwDataOffset = 0;
  local_24.dwFlags = 0;
  MVar5 = mmioDescend(param_1,&local_24,(MMCKINFO *)0x0,0x20);
  if (MVar5 == 0) {
    local_38.cksize = 0;
    local_38.fccType = 0;
    local_38.dwDataOffset = 0;
    local_38.dwFlags = 0;
    local_38.ckid = 0x73726576;
    MVar5 = mmioDescend(param_1,&local_38,&local_24,0x10);
    if (MVar5 == 0) {
      LVar6 = mmioRead(param_1,(HPSTR)&local_c,8);
      uVar8 = 0;
      if (LVar6 == 8) {
        *puVar1 = local_c;
        *param_3 = local_8;
        uVar8 = 1;
      }
      goto LAB_0040210a;
    }
  }
  uVar8 = 0;
LAB_0040210a:
  mmioClose(param_1,0);
  return uVar8;
}


