/* Module: g2plug.dll
   Function: G2LoadRegistryTemplate
   Address: 5f80f210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall G2LoadRegistryTemplate(struct _GUID *,struct SFG2_PARAMS *,struct
   SFG2TEMPLATE_DESCRIPTION *) */

long G2LoadRegistryTemplate(_GUID *param_1,SFG2_PARAMS *param_2,SFG2TEMPLATE_DESCRIPTION *param_3)

{
  LSTATUS LVar1;
  LSTATUS LVar2;
  int iVar3;
  SFG2_PARAMS *pSVar4;
  SFG2TEMPLATE_DESCRIPTION *pSVar5;
  undefined4 local_254;
  DWORD local_250;
  HKEY local_24c;
  DWORD local_248;
  HKEY local_244;
  GUID local_240;
  CHAR local_230 [40];
  WCHAR local_208 [260];
  
                    /* 0xf210  9
                       ?G2LoadRegistryTemplate@@YGJPAU_GUID@@PAUSFG2_PARAMS@@PAUSFG2TEMPLATE_DESCRIPTION@@@Z
                        */
  local_240.Data1 = param_1->Data1;
  local_240.Data2 = param_1->Data2;
  local_240.Data3 = param_1->Data3;
  local_240.Data4._0_4_ = *(undefined4 *)param_1->Data4;
  local_240.Data4._4_4_ = *(undefined4 *)(param_1->Data4 + 4);
  if (param_2 != (SFG2_PARAMS *)0x0) {
    pSVar4 = param_2;
    for (iVar3 = 0x19c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar4 = 0;
      pSVar4 = pSVar4 + 4;
    }
    *(undefined2 *)pSVar4 = 0;
    pSVar4[2] = (SFG2_PARAMS)0x0;
  }
  if (param_3 != (SFG2TEMPLATE_DESCRIPTION *)0x0) {
    pSVar5 = param_3;
    for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar5 = 0;
      pSVar5 = pSVar5 + 4;
    }
  }
  FUN_5f80e9d0(&local_240,local_230,0x28,1);
  LVar1 = RegOpenKeyA((HKEY)0x80000002,
                      "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\System",
                      &local_244);
  if (LVar1 == 0) {
    LVar2 = RegOpenKeyA(local_244,local_230,&local_24c);
    LVar1 = 0;
    if (LVar2 != 0) {
      RegCloseKey(local_244);
      goto LAB_5f80f2bb;
    }
  }
  else {
LAB_5f80f2bb:
    LVar1 = RegOpenKeyA((HKEY)0x80000002,
                        "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom",
                        &local_244);
    if (LVar1 != 0) {
      return -0x7fffbffb;
    }
    LVar1 = RegOpenKeyA(local_244,local_230,&local_24c);
    if (LVar1 != 0) goto LAB_5f80f7d5;
  }
  if (param_3 != (SFG2TEMPLATE_DESCRIPTION *)0x0) {
    local_250 = 0x208;
    RegQueryValueExA(local_24c,"Template Name",(LPDWORD)0x0,&local_248,(LPBYTE)local_208,&local_250)
    ;
    WideCharToMultiByte(0,0,local_208,-1,(LPSTR)param_3,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    local_250 = 0x208;
    LVar1 = RegQueryValueExA(local_24c,"Template Description",(LPDWORD)0x0,&local_248,
                             (LPBYTE)local_208,&local_250);
    WideCharToMultiByte(0,0,local_208,-1,(LPSTR)(param_3 + 0x104),0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  if (param_2 != (SFG2_PARAMS *)0x0) {
    local_250 = 4;
    *(ulong *)(param_2 + 4) = local_240.Data1;
    *(undefined4 *)(param_2 + 8) = local_240._4_4_;
    *(undefined4 *)(param_2 + 0xc) = local_240.Data4._0_4_;
    *(undefined4 *)(param_2 + 0x10) = local_240.Data4._4_4_;
    LVar1 = RegQueryValueExA(local_24c,"System",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)param_2 = local_254;
    }
    local_250 = 4;
    LVar1 = RegQueryValueExA(local_24c,"Audio Only",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x128) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Video Only",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 300) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Targets",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x138) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Player Target",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x13c) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Video Emphasis",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x150) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Audio Format",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x140) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Audio Resample",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x144) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Video Format",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x148) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Stream Type",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x14c) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Perfect Play",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x154) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Mobile Play",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x158) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Selective Record",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254
                             ,&local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x15c) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Resize",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x3df) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Resize Type",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x3e3) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Width",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,&local_250
                            );
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 999) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Height",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x3eb) = local_254;
    }
    LVar1 = RegQueryValueExA(local_24c,"Resample Rate",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                             &local_250);
    if (LVar1 == 0) {
      *(undefined4 *)(param_2 + 0x144) = local_254;
    }
    LVar1 = 0;
    if (*(int *)(param_2 + 300) != 0) {
      LVar1 = RegQueryValueExA(local_24c,"2 Pass Video",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                               &local_250);
      if (LVar1 == 0) {
        *(undefined4 *)(param_2 + 0x657) = local_254;
      }
      LVar1 = RegQueryValueExA(local_24c,"VBR Video",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                               &local_250);
      if (LVar1 == 0) {
        *(undefined4 *)(param_2 + 0x65b) = local_254;
      }
      LVar1 = RegQueryValueExA(local_24c,"Loss Protect Video",(LPDWORD)0x0,&local_248,
                               (LPBYTE)&local_254,&local_250);
      if (LVar1 == 0) {
        *(undefined4 *)(param_2 + 0x65f) = local_254;
      }
      LVar1 = RegQueryValueExA(local_24c,"VBR Latency",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                               &local_250);
      if (LVar1 == 0) {
        *(undefined4 *)(param_2 + 0x663) = local_254;
      }
      else {
        *(undefined4 *)(param_2 + 0x663) = 0xf;
      }
      LVar1 = RegQueryValueExA(local_24c,"Max Keyframe",(LPDWORD)0x0,&local_248,(LPBYTE)&local_254,
                               &local_250);
      if (LVar1 == 0) {
        *(undefined4 *)(param_2 + 0x667) = local_254;
      }
      else {
        *(undefined4 *)(param_2 + 0x667) = 10000;
      }
      LVar1 = 0;
    }
  }
  RegCloseKey(local_24c);
LAB_5f80f7d5:
  RegCloseKey(local_244);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


