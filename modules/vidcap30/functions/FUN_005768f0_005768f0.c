/* Module: vidcap30.exe
   Function: FUN_005768f0
   Address: 005768f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LSTATUS FUN_005768f0(HKEY param_1,LPCSTR param_2,undefined4 *param_3)

{
  DWORD DVar1;
  LSTATUS LVar2;
  undefined4 uVar3;
  LSTATUS LVar4;
  HGLOBAL pvVar5;
  LPSTR pCVar6;
  LPBYTE lpData;
  int iVar7;
  code *pcVar8;
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
  
  LVar2 = RegOpenKeyExA(param_1,param_2,0,0x20019,&local_140);
  if (LVar2 != 0) {
    return -0x7ff8fffb;
  }
  local_11c = 0x104;
  uVar3 = FUN_00575f80(param_2,*param_3,1);
  *param_3 = uVar3;
  LVar4 = RegQueryInfoKeyA(local_140,local_104,&local_11c,(LPDWORD)0x0,&local_118,&local_134,
                           &local_110,&local_120,&local_130,&local_138,&local_114,&local_10c);
  LVar2 = -0x7ff8fffb;
  if (LVar4 == 0) {
    pcVar8 = GlobalHandle_exref;
    local_12c = LVar4;
    if (local_120 != 0) {
      local_130 = local_130 + 10;
      local_138 = local_138 + 10;
      pvVar5 = GlobalAlloc(2,local_130);
      pCVar6 = GlobalLock(pvVar5);
      pvVar5 = GlobalAlloc(2,local_138);
      lpData = GlobalLock(pvVar5);
      local_13c = local_130;
      local_128 = local_138;
      iVar7 = RegEnumValueA(local_140,0,pCVar6,&local_13c,(LPDWORD)0x0,&local_124,lpData,&local_128)
      ;
      DVar1 = 1;
      pcVar8 = GlobalHandle_exref;
      while (GlobalHandle_exref = pcVar8, iVar7 != 0x103) {
        if (local_124 == 4) {
          uVar3 = FUN_00575f80(pCVar6,*param_3,1);
          *param_3 = uVar3;
          uVar3 = FUN_00576000(*lpData,uVar3);
LAB_00576a4c:
          *param_3 = uVar3;
        }
        else if (local_124 == 1) {
          uVar3 = FUN_00575f80(pCVar6,*param_3,1);
          *param_3 = uVar3;
          uVar3 = FUN_00575f80(lpData,uVar3,1);
          goto LAB_00576a4c;
        }
        local_13c = local_130;
        local_128 = local_138;
        iVar7 = RegEnumValueA(local_140,DVar1,pCVar6,&local_13c,(LPDWORD)0x0,&local_124,lpData,
                              &local_128);
        DVar1 = DVar1 + 1;
        pcVar8 = GlobalHandle_exref;
      }
      pvVar5 = GlobalHandle(pCVar6);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(pCVar6);
      GlobalFree(pvVar5);
      pvVar5 = GlobalHandle(lpData);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(lpData);
      GlobalFree(pvVar5);
    }
    LVar2 = local_12c;
    if (local_118 != 0) {
      local_134 = local_134 + 10;
      pvVar5 = GlobalAlloc(2,local_134);
      pCVar6 = GlobalLock(pvVar5);
      local_13c = local_134;
      iVar7 = RegEnumKeyExA(local_140,0,pCVar6,&local_13c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      DVar1 = 1;
      while (iVar7 != 0x103) {
        uVar3 = FUN_00575f80(pCVar6,*param_3,1);
        *param_3 = uVar3;
        local_12c = FUN_005768f0(local_140,pCVar6,param_3);
        if (local_12c != 0) {
          local_12c = -0x7ff8fffb;
          break;
        }
        local_13c = local_134;
        iVar7 = RegEnumKeyExA(local_140,DVar1,pCVar6,&local_13c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                              ,(PFILETIME)0x0);
        DVar1 = DVar1 + 1;
      }
      pvVar5 = (HGLOBAL)(*pcVar8)(pCVar6);
      GlobalUnlock(pvVar5);
      pvVar5 = (HGLOBAL)(*pcVar8)(pCVar6);
      GlobalFree(pvVar5);
      LVar2 = local_12c;
    }
  }
  RegCloseKey(local_140);
  return LVar2;
}


