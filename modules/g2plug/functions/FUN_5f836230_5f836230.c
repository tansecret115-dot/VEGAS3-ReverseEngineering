/* Module: g2plug.dll
   Function: FUN_5f836230
   Address: 5f836230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f836230(undefined4 param_1,int param_2,uint param_3)

{
  char *pcVar1;
  LSTATUS LVar2;
  uint uVar3;
  uchar *puVar4;
  DWORD local_220;
  DWORD local_21c;
  HKEY local_218;
  undefined4 local_214;
  int local_210;
  int local_20c;
  BYTE local_208 [260];
  CHAR local_104 [260];
  
  local_214 = 0;
  pcVar1 = FUN_5f8358d0(param_2);
  wsprintfA(local_104,"%s\\%s",pcVar1,param_1);
  local_218 = (HKEY)0x0;
  LVar2 = RegOpenKeyExA((HKEY)0x80000001,local_104,0,0x20019,&local_218);
  if (LVar2 != 0) {
    return 0;
  }
  uVar3 = FUN_5f82b2b0((LPCSTR)(param_2 + 0x120));
  *(uint *)(param_2 + 0x248) = uVar3;
  local_20c = 0;
  local_21c = 4;
  local_220 = 4;
  LVar2 = RegQueryValueExA(local_218,"ModTime",(LPDWORD)0x0,&local_220,(LPBYTE)&local_20c,&local_21c
                          );
  if ((((LVar2 == 0) && (local_220 == 4)) && (local_21c == 4)) &&
     (local_20c == *(int *)(param_2 + 0x248))) {
    local_210 = 0;
    local_21c = 4;
    local_220 = 4;
    *(undefined4 *)(param_2 + 0x228) = 0;
    LVar2 = RegQueryValueExA(local_218,"LangID",(LPDWORD)0x0,&local_220,(LPBYTE)&local_210,
                             &local_21c);
    if (((LVar2 == 0) && (local_220 == 4)) && (local_21c == 4)) {
      *(int *)(param_2 + 0x228) = local_210;
      local_210 = FUN_5f8178e0(DAT_5f877520);
      if (local_210 == *(int *)(param_2 + 0x228)) {
        local_21c = 0x104;
        local_220 = 1;
        local_208[0] = '\0';
        LVar2 = RegQueryValueExA(local_218,"DialogName",(LPDWORD)0x0,&local_220,local_208,&local_21c
                                );
        if ((LVar2 == 0) && (local_220 == 1)) {
          puVar4 = FUN_5f8348e0(local_208);
          *(uchar **)(param_2 + 0x224) = puVar4;
          local_214 = 1;
        }
        if ((*(byte *)(param_2 + 0x238) & 0x10) != 0) {
          uVar3 = FUN_5f833f00(0x10,*(uint *)(param_2 + 0x23c),param_3);
          if (uVar3 != 0) {
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"ExtReader",(LPDWORD)0x0,&local_220,local_208,
                                     &local_21c);
            if ((LVar2 == 0) && (local_220 == 1)) {
              puVar4 = FUN_5f8348e0(local_208);
              *(uchar **)(param_2 + 0x26c) = puVar4;
            }
            else {
              local_214 = 0;
            }
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"Reader",(LPDWORD)0x0,&local_220,local_208,&local_21c
                                    );
            if ((LVar2 == 0) && (local_220 == 1)) {
              FUN_5f8361f0((LPCSTR)local_208,(LPCLSID)(param_2 + 0x250));
            }
          }
        }
        if ((*(byte *)(param_2 + 0x238) & 0x20) != 0) {
          uVar3 = FUN_5f833f00(0x20,*(uint *)(param_2 + 0x23c),param_3);
          if (uVar3 != 0) {
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"ExtRenderer",(LPDWORD)0x0,&local_220,local_208,
                                     &local_21c);
            if ((LVar2 == 0) && (local_220 == 1)) {
              puVar4 = FUN_5f8348e0(local_208);
              *(uchar **)(param_2 + 0x2a8) = puVar4;
            }
            else {
              local_214 = 0;
            }
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"Renderer",(LPDWORD)0x0,&local_220,local_208,
                                     &local_21c);
            if ((LVar2 == 0) && (local_220 == 1)) {
              FUN_5f8361f0((LPCSTR)local_208,(LPCLSID)(param_2 + 0x28c));
            }
          }
        }
        if ((*(byte *)(param_2 + 0x238) & 0x40) != 0) {
          uVar3 = FUN_5f833f00(0x40,*(uint *)(param_2 + 0x23c),param_3);
          if (uVar3 != 0) {
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"ExtEditor",(LPDWORD)0x0,&local_220,local_208,
                                     &local_21c);
            if ((LVar2 == 0) && (local_220 == 1)) {
              puVar4 = FUN_5f8348e0(local_208);
              *(uchar **)(param_2 + 0x2e4) = puVar4;
            }
            else {
              local_214 = 0;
            }
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"Editor",(LPDWORD)0x0,&local_220,local_208,&local_21c
                                    );
            if ((LVar2 == 0) && (local_220 == 1)) {
              FUN_5f8361f0((LPCSTR)local_208,(LPCLSID)(param_2 + 0x2c8));
            }
          }
        }
        if ((*(uint *)(param_2 + 0x238) & 0x100) != 0) {
          uVar3 = FUN_5f833f00(0x100,*(uint *)(param_2 + 0x23c),param_3);
          if (uVar3 != 0) {
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"ExtNetReader",(LPDWORD)0x0,&local_220,local_208,
                                     &local_21c);
            if ((LVar2 == 0) && (local_220 == 1)) {
              puVar4 = FUN_5f8348e0(local_208);
              *(uchar **)(param_2 + 800) = puVar4;
            }
            else {
              local_214 = 0;
            }
            local_21c = 0x104;
            local_220 = 1;
            local_208[0] = '\0';
            LVar2 = RegQueryValueExA(local_218,"NetReader",(LPDWORD)0x0,&local_220,local_208,
                                     &local_21c);
            if ((LVar2 == 0) && (local_220 == 1)) {
              FUN_5f8361f0((LPCSTR)local_208,(LPCLSID)(param_2 + 0x304));
            }
          }
        }
      }
    }
  }
  RegCloseKey(local_218);
  return local_214;
}


