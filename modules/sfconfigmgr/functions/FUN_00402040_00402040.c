/* Module: sfconfigmgr.dll
   Function: FUN_00402040
   Address: 00402040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00402040(wchar_t *param_1,int *param_2,LPCSTR param_3)

{
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  wchar_t *_Format;
  code *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  DWORD local_b24 [2];
  HKEY local_b1c;
  HKEY local_b18;
  HKEY local_b14;
  HKEY local_b10;
  DWORD local_b0c;
  HKEY local_b08;
  CHAR local_b04 [2];
  undefined1 local_b02;
  DWORD local_b00;
  undefined4 local_afc;
  uint local_af0;
  int local_aec;
  int local_ae8 [8];
  wchar_t local_ac8 [6];
  wchar_t local_abc [14];
  WCHAR local_aa0 [6];
  wchar_t local_a94 [33];
  undefined2 local_a52;
  BYTE local_a50 [64];
  BYTE local_a10 [100];
  WCHAR local_9ac [6];
  wchar_t local_9a0 [93];
  undefined2 local_8e6;
  BYTE local_8e4 [112];
  wchar_t local_874 [40];
  wchar_t local_824 [64];
  wchar_t local_7a4 [64];
  uint local_724 [2];
  undefined4 local_71c;
  CHAR local_61c [2];
  CHAR local_61a [258];
  CHAR local_518 [264];
  uchar local_410 [1040];
  
  pcVar6 = RegOpenKeyA_exref;
  local_afc = 0;
  local_b08 = (HKEY)0x0;
  LVar1 = RegOpenKeyA((HKEY)0x80000002,param_3,&local_b08);
  if (LVar1 != 0) {
    return 0;
  }
  local_b0c = 0;
  do {
    local_724[0] = local_724[0] & 0xffffff00;
    LVar1 = RegEnumKeyA(local_b08,local_b0c,(LPSTR)local_724,0x105);
    if (LVar1 != 0) {
      RegCloseKey(local_b08);
      return local_afc;
    }
    local_b10 = (HKEY)0x0;
    FUN_00406090(local_410,(BYTE *)"%s\\%s");
    iVar2 = (*pcVar6)(0x80000002,local_410,&local_b10);
    if (iVar2 == 0) {
      local_b00 = 0;
      while( true ) {
        local_518[0] = '\0';
        LVar1 = RegEnumKeyA(local_b10,local_b00,local_518,0x105);
        if (LVar1 != 0) break;
        local_b18 = (HKEY)0x0;
        FUN_00406090(local_410,(BYTE *)"%s\\%s\\%s");
        iVar2 = (*pcVar6)(0x80000002,local_410,&local_b18);
        pcVar4 = RegQueryValueExA_exref;
        if (iVar2 == 0) {
          local_af0 = local_af0 & 0xffffff00;
          local_aa0[0] = L'\0';
          local_b24[0] = 0;
          local_b24[1] = 0x28;
          LVar1 = RegQueryValueExA(local_b18,"ProductCodeGUID",(LPDWORD)0x0,local_b24,
                                   (LPBYTE)&local_af0,local_b24 + 1);
          if ((LVar1 == 0) && (local_b24[0] == 1)) {
            MultiByteToWideChar(0,1,(LPCSTR)&local_af0,-1,local_aa0,0x28);
            local_a52 = 0;
          }
          local_a50[0] = '\0';
          _Format = (wchar_t *)0x0;
          local_b24[1] = 0x40;
          LVar1 = RegQueryValueExA(local_b18,"ProductCode",(LPDWORD)0x0,local_b24,local_a50,
                                   local_b24 + 1);
          if ((LVar1 == 0) && (local_b24[0] == 1)) {
            _Format = (wchar_t *)FUN_0040d640((LPCSTR)local_a50,(undefined4 *)0x0);
          }
          local_9ac[0] = L'\0';
          local_b1c = (HKEY)0x0;
          FUN_00406090(local_410,(BYTE *)"%s\\%s\\%s\\License");
          iVar2 = (*pcVar6)(0x80000002,local_410,&local_b1c);
          if (iVar2 == 0) {
            local_a10[0] = '\0';
            local_b24[0] = 0;
            local_b24[1] = 100;
            LVar1 = RegQueryValueExA(local_b1c,"CurrentKey",(LPDWORD)0x0,local_b24,local_a10,
                                     local_b24 + 1);
            if ((LVar1 == 0) && (local_b24[0] == 1)) {
              local_b14 = (HKEY)0x0;
              iVar2 = (*pcVar6)(0x80000001,local_410,&local_b14);
              if (iVar2 == 0) {
                local_b24[1] = 100;
                LVar1 = RegQueryValueExA(local_b14,"AppGrade",(LPDWORD)0x0,local_b24,local_8e4,
                                         local_b24 + 1);
                RegCloseKey(local_b14);
                local_b14 = (HKEY)0x0;
                pcVar4 = RegQueryValueExA_exref;
                if (LVar1 != 0) goto LAB_0040230a;
LAB_00402335:
                if (local_b24[0] == 1) {
                  MultiByteToWideChar(0,1,(LPCSTR)local_8e4,-1,local_9ac,100);
                  local_8e6 = 0;
                }
              }
              else {
LAB_0040230a:
                local_b24[1] = 100;
                iVar2 = (*pcVar4)(local_b1c,"AppGrade",0,local_b24,local_8e4,local_b24 + 1);
                if (iVar2 == 0) goto LAB_00402335;
              }
              lstrcpynA(local_b04,(LPCSTR)local_a10,3);
              local_b02 = 0;
              _Format = (wchar_t *)FUN_004039b0(local_b04);
            }
            local_61c[0] = '\0';
            uVar5 = 0;
            local_b24[0] = 0;
            local_b24[1] = 0x104;
            iVar2 = (*pcVar4)(local_b1c,"AppGradeDemo",0,local_b24,local_61c,local_b24 + 1);
            if ((iVar2 == 0) && (local_b24[0] == 1)) {
              uVar3 = lstrlenA(local_61c);
              if (2 < uVar3) {
                iVar2 = FUN_0040d640(local_61a,(undefined4 *)0x0);
                if (0 < iVar2) {
                  uVar5 = 1;
                  MultiByteToWideChar(0,1,local_61c,-1,local_9ac,100);
                  local_8e6 = 0;
                }
              }
            }
            uVar3 = 0;
            if ((*param_2 == 0) && (param_1 == _Format)) {
              *param_2 = 1;
              uVar3 = 1;
            }
            if (_Format != (wchar_t *)0x0) {
              swprintf(local_ac8,0x41a45c,_Format);
              local_724[0] = uVar3;
              local_71c = uVar5;
              wcscpy(local_7a4,local_9a0);
              wcscpy(local_824,local_abc);
              wcscpy(local_874,local_a94);
              local_af0 = FUN_0040c330(*(int **)(local_aec + 0xc),(int *)local_874,0x15c,-1,
                                       local_ae8);
            }
            RegCloseKey(local_b1c);
            local_b1c = (HKEY)0x0;
            pcVar6 = RegOpenKeyA_exref;
          }
          RegCloseKey(local_b18);
        }
        local_b00 = local_b00 + 1;
      }
      RegCloseKey(local_b10);
    }
    local_b0c = local_b0c + 1;
  } while( true );
}


