/* Module: g2plug.dll
   Function: G2SaveRegistryTemplate
   Address: 5f80eb10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall G2SaveRegistryTemplate(struct _GUID *,struct SFG2_PARAMS *,struct
   SFG2TEMPLATE_DESCRIPTION *) */

long G2SaveRegistryTemplate(_GUID *param_1,SFG2_PARAMS *param_2,SFG2TEMPLATE_DESCRIPTION *param_3)

{
  LSTATUS LVar1;
  size_t sVar2;
  long lVar3;
  HGLOBAL pvVar4;
  undefined4 local_254;
  HKEY local_250;
  BYTE *local_24c;
  HKEY local_248;
  DWORD local_244;
  GUID local_240;
  CHAR local_230 [40];
  WCHAR local_208 [260];
  
                    /* 0xeb10  10
                       ?G2SaveRegistryTemplate@@YGJPAU_GUID@@PAUSFG2_PARAMS@@PAUSFG2TEMPLATE_DESCRIPTION@@@Z
                        */
  local_240.Data1 = param_1->Data1;
  local_240.Data2 = param_1->Data2;
  local_240.Data3 = param_1->Data3;
  local_240.Data4._0_4_ = *(undefined4 *)param_1->Data4;
  local_240.Data4._4_4_ = *(undefined4 *)(param_1->Data4 + 4);
  LVar1 = RegCreateKeyA((HKEY)0x80000002,
                        "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom",
                        &local_248);
  if (LVar1 == 0) {
    FUN_5f80e9d0(&local_240,local_230,0x28,1);
    LVar1 = RegCreateKeyA(local_248,local_230,&local_250);
    if (LVar1 == 0) {
      local_254 = 0x3eb;
      LVar1 = RegSetValueExA(local_250,"Version",0,4,(BYTE *)&local_254,4);
      if (LVar1 == 0) {
        local_254 = *(undefined4 *)param_2;
        LVar1 = RegSetValueExA(local_250,"System",0,4,(BYTE *)&local_254,4);
        if (LVar1 == 0) {
          MultiByteToWideChar(0,0,(LPCSTR)param_3,-1,local_208,0x104);
          sVar2 = wcslen(local_208);
          LVar1 = RegSetValueExA(local_250,"Template Name",0,3,(BYTE *)local_208,sVar2 * 2 + 2);
          if (LVar1 == 0) {
            MultiByteToWideChar(0,0,(LPCSTR)(param_3 + 0x104),-1,local_208,0x104);
            sVar2 = wcslen(local_208);
            LVar1 = RegSetValueExA(local_250,"Template Description",0,3,(BYTE *)local_208,
                                   sVar2 * 2 + 2);
            if (LVar1 == 0) {
              local_254 = *(undefined4 *)(param_2 + 0x128);
              LVar1 = RegSetValueExA(local_250,"Audio Only",0,4,(BYTE *)&local_254,4);
              if (LVar1 == 0) {
                local_254 = *(undefined4 *)(param_2 + 300);
                LVar1 = RegSetValueExA(local_250,"Video Only",0,4,(BYTE *)&local_254,4);
                if (LVar1 == 0) {
                  local_254 = *(undefined4 *)(param_2 + 0x138);
                  LVar1 = RegSetValueExA(local_250,"Targets",0,4,(BYTE *)&local_254,4);
                  if (LVar1 == 0) {
                    local_254 = *(undefined4 *)(param_2 + 0x13c);
                    LVar1 = RegSetValueExA(local_250,"Player Target",0,4,(BYTE *)&local_254,4);
                    if (LVar1 == 0) {
                      local_254 = *(undefined4 *)(param_2 + 0x150);
                      LVar1 = RegSetValueExA(local_250,"Video Emphasis",0,4,(BYTE *)&local_254,4);
                      if (LVar1 == 0) {
                        local_254 = *(undefined4 *)(param_2 + 0x140);
                        LVar1 = RegSetValueExA(local_250,"Audio Format",0,4,(BYTE *)&local_254,4);
                        if (LVar1 == 0) {
                          local_254 = *(undefined4 *)(param_2 + 0x144);
                          LVar1 = RegSetValueExA(local_250,"Resample Rate",0,4,(BYTE *)&local_254,4)
                          ;
                          if (LVar1 == 0) {
                            local_254 = *(undefined4 *)(param_2 + 0x148);
                            LVar1 = RegSetValueExA(local_250,"Video Format",0,4,(BYTE *)&local_254,4
                                                  );
                            if (LVar1 == 0) {
                              local_254 = *(undefined4 *)(param_2 + 0x14c);
                              LVar1 = RegSetValueExA(local_250,"Stream Type",0,4,(BYTE *)&local_254,
                                                     4);
                              if (LVar1 == 0) {
                                local_254 = *(undefined4 *)(param_2 + 0x154);
                                LVar1 = RegSetValueExA(local_250,"Perfect Play",0,4,
                                                       (BYTE *)&local_254,4);
                                if (LVar1 == 0) {
                                  local_254 = *(undefined4 *)(param_2 + 0x158);
                                  LVar1 = RegSetValueExA(local_250,"Mobile Play",0,4,
                                                         (BYTE *)&local_254,4);
                                  if (LVar1 == 0) {
                                    local_254 = *(undefined4 *)(param_2 + 0x15c);
                                    LVar1 = RegSetValueExA(local_250,"Selective Record",0,4,
                                                           (BYTE *)&local_254,4);
                                    if (LVar1 == 0) {
                                      local_254 = *(undefined4 *)(param_2 + 0x3df);
                                      LVar1 = RegSetValueExA(local_250,"Resize",0,4,
                                                             (BYTE *)&local_254,4);
                                      if (LVar1 == 0) {
                                        local_254 = *(undefined4 *)(param_2 + 0x3e3);
                                        LVar1 = RegSetValueExA(local_250,"Resize Type",0,4,
                                                               (BYTE *)&local_254,4);
                                        if (LVar1 == 0) {
                                          local_254 = *(undefined4 *)(param_2 + 999);
                                          LVar1 = RegSetValueExA(local_250,"Width",0,4,
                                                                 (BYTE *)&local_254,4);
                                          if (LVar1 == 0) {
                                            local_254 = *(undefined4 *)(param_2 + 0x3eb);
                                            LVar1 = RegSetValueExA(local_250,"Height",0,4,
                                                                   (BYTE *)&local_254,4);
                                            if (LVar1 == 0) {
                                              local_254 = *(undefined4 *)(param_2 + 0x144);
                                              LVar1 = RegSetValueExA(local_250,"Resample Rate",0,4,
                                                                     (BYTE *)&local_254,4);
                                              if (*(int *)(param_2 + 300) != 0) {
                                                local_254 = *(undefined4 *)(param_2 + 0x657);
                                                RegSetValueExA(local_250,"2 Pass Video",0,4,
                                                               (BYTE *)&local_254,4);
                                                local_254 = *(undefined4 *)(param_2 + 0x65b);
                                                RegSetValueExA(local_250,"VBR Video",0,4,
                                                               (BYTE *)&local_254,4);
                                                local_254 = *(undefined4 *)(param_2 + 0x65f);
                                                RegSetValueExA(local_250,"Loss Protect Video",0,4,
                                                               (BYTE *)&local_254,4);
                                                local_254 = *(undefined4 *)(param_2 + 0x663);
                                                RegSetValueExA(local_250,"VBR Latency",0,4,
                                                               (BYTE *)&local_254,4);
                                                local_254 = *(undefined4 *)(param_2 + 0x667);
                                                LVar1 = RegSetValueExA(local_250,"Max Keyframe",0,4,
                                                                       (BYTE *)&local_254,4);
                                              }
                                              lVar3 = SfRealG2_GetTargetData
                                                                (*(ulong *)(param_2 + 0x138),
                                                                 *(int *)(param_2 + 0x140),
                                                                 *(int *)(param_2 + 0x148),
                                                                 &local_24c,&local_244);
                                              if (-1 < lVar3) {
                                                LVar1 = RegSetValueExA(local_250,"Codecs",0,3,
                                                                       local_24c,local_244);
                                                pvVar4 = GlobalHandle(local_24c);
                                                GlobalUnlock(pvVar4);
                                                pvVar4 = GlobalHandle(local_24c);
                                                GlobalFree(pvVar4);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      RegCloseKey(local_250);
    }
    RegCloseKey(local_248);
  }
  return -(uint)(LVar1 != 0) & 0x80004005;
}


