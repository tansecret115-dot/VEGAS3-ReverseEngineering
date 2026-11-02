/* Module: vfplugs.dll
   Function: FUN_0047e170
   Address: 0047e170
   Source: Ghidra pseudocode (Stage 10 batch) */


LSTATUS FUN_0047e170(HKEY param_1,LPSTR param_2,uint *param_3)

{
  DWORD DVar1;
  void *pvVar2;
  LSTATUS LVar3;
  uint uVar4;
  LSTATUS LVar5;
  HGLOBAL pvVar6;
  LPSTR pCVar7;
  byte *lpData;
  int iVar8;
  void *this;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  code *pcVar9;
  HKEY local_140;
  SIZE_T local_13c;
  SIZE_T local_138;
  SIZE_T local_134;
  SIZE_T local_130;
  LSTATUS local_12c;
  SIZE_T local_128;
  DWORD local_124;
  DWORD local_120;
  DWORD local_11c;
  DWORD local_118;
  DWORD local_114;
  DWORD local_110;
  _FILETIME local_10c;
  CHAR local_104 [260];
  
  LVar3 = RegOpenKeyExA(param_1,param_2,0,0x20019,&local_140);
  if (LVar3 != 0) {
    return -0x7ff8fffb;
  }
  local_11c = 0x104;
  uVar4 = FUN_0047d800(this,param_2,*param_3,1);
  *param_3 = uVar4;
  LVar5 = RegQueryInfoKeyA(local_140,local_104,&local_11c,(LPDWORD)0x0,&local_118,&local_134,
                           &local_110,&local_120,&local_130,&local_138,&local_114,&local_10c);
  LVar3 = -0x7ff8fffb;
  if (LVar5 == 0) {
    pcVar9 = GlobalHandle_exref;
    local_12c = LVar5;
    if (local_120 != 0) {
      local_130 = local_130 + 10;
      local_138 = local_138 + 10;
      pvVar6 = GlobalAlloc(2,local_130);
      pCVar7 = GlobalLock(pvVar6);
      pvVar6 = GlobalAlloc(2,local_138);
      lpData = GlobalLock(pvVar6);
      local_13c = local_130;
      local_128 = local_138;
      iVar8 = RegEnumValueA(local_140,0,pCVar7,&local_13c,(LPDWORD)0x0,&local_124,lpData,&local_128)
      ;
      DVar1 = 1;
      pvVar2 = extraout_ECX;
      pcVar9 = GlobalHandle_exref;
      while (GlobalHandle_exref = pcVar9, iVar8 != 0x103) {
        if (local_124 == 4) {
          uVar4 = FUN_0047d800(pvVar2,pCVar7,*param_3,1);
          *param_3 = uVar4;
          uVar4 = FUN_0047d880((uint)*lpData,uVar4);
LAB_0047e2cc:
          *param_3 = uVar4;
        }
        else if (local_124 == 1) {
          uVar4 = FUN_0047d800((void *)*param_3,pCVar7,*param_3,1);
          *param_3 = uVar4;
          uVar4 = FUN_0047d800(this_00,(LPSTR)lpData,uVar4,1);
          goto LAB_0047e2cc;
        }
        local_13c = local_130;
        local_128 = local_138;
        iVar8 = RegEnumValueA(local_140,DVar1,pCVar7,&local_13c,(LPDWORD)0x0,&local_124,lpData,
                              &local_128);
        DVar1 = DVar1 + 1;
        pvVar2 = extraout_ECX_00;
        pcVar9 = GlobalHandle_exref;
      }
      pvVar6 = GlobalHandle(pCVar7);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pCVar7);
      GlobalFree(pvVar6);
      pvVar6 = GlobalHandle(lpData);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(lpData);
      GlobalFree(pvVar6);
    }
    LVar3 = local_12c;
    if (local_118 != 0) {
      local_134 = local_134 + 10;
      pvVar6 = GlobalAlloc(2,local_134);
      pCVar7 = GlobalLock(pvVar6);
      local_13c = local_134;
      iVar8 = RegEnumKeyExA(local_140,0,pCVar7,&local_13c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      DVar1 = 1;
      pvVar2 = extraout_ECX_01;
      while (iVar8 != 0x103) {
        uVar4 = FUN_0047d800(pvVar2,pCVar7,*param_3,1);
        *param_3 = uVar4;
        local_12c = FUN_0047e170(local_140,pCVar7,param_3);
        if (local_12c != 0) {
          local_12c = -0x7ff8fffb;
          break;
        }
        local_13c = local_134;
        iVar8 = RegEnumKeyExA(local_140,DVar1,pCVar7,&local_13c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                              ,(PFILETIME)0x0);
        DVar1 = DVar1 + 1;
        pvVar2 = extraout_ECX_02;
      }
      pvVar6 = (HGLOBAL)(*pcVar9)(pCVar7);
      GlobalUnlock(pvVar6);
      pvVar6 = (HGLOBAL)(*pcVar9)(pCVar7);
      GlobalFree(pvVar6);
      LVar3 = local_12c;
    }
  }
  RegCloseKey(local_140);
  return LVar3;
}


