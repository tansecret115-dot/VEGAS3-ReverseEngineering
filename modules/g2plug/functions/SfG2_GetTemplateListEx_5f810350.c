/* Module: g2plug.dll
   Function: SfG2_GetTemplateListEx
   Address: 5f810350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_GetTemplateListEx(struct tSFLIST *,int) */

long SfG2_GetTemplateListEx(tSFLIST *param_1,int param_2)

{
  LSTATUS LVar1;
  HGLOBAL pvVar2;
  uchar *puVar3;
  ulong *puVar4;
  char *lpSubKey;
  ulong *local_9c8;
  HKEY local_9c4;
  DWORD local_9c0;
  uint local_9bc;
  CLSID local_9b8;
  CHAR local_9a8 [40];
  uchar local_980 [260];
  SFG2TEMPLATE_DESCRIPTION local_87c [260];
  BYTE local_778 [260];
  ulong local_674 [75];
  ulong local_548;
  
                    /* 0x10350  31  ?SfG2_GetTemplateListEx@@YGJPAUtSFLIST@@H@Z */
  puVar4 = (ulong *)0x80004005;
  local_9c8 = (ulong *)0x80004005;
  if (param_2 == 0) {
    lpSubKey = "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom";
  }
  else {
    lpSubKey = "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\System";
  }
  LVar1 = RegOpenKeyA((HKEY)0x80000002,lpSubKey,&local_9c4);
  if (LVar1 == 0) {
    LVar1 = RegQueryInfoKeyA(local_9c4,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_9bc,(LPDWORD)0x0,
                             (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (PFILETIME)0x0);
    if ((LVar1 == 0) && (local_9c0 = 0, local_9bc != 0)) {
      local_9c0 = 0;
      do {
        LVar1 = RegEnumKeyA(local_9c4,local_9c0,local_9a8,0x28);
        if (LVar1 == 0) {
          FUN_5f80e980(local_9a8,&local_9b8);
          local_9c8 = (ulong *)G2LoadRegistryTemplate(&local_9b8,(SFG2_PARAMS *)local_674,local_87c)
          ;
          if ((-1 < (int)local_9c8) && (puVar4 = calloc(1,0x28), puVar4 != (ulong *)0x0)) {
            *puVar4 = local_9b8.Data1;
            puVar4[1] = local_9b8._4_4_;
            puVar4[2] = local_9b8.Data4._0_4_;
            puVar4[3] = local_9b8.Data4._4_4_;
            puVar4[4] = local_548;
            puVar4[6] = local_674[0];
            puVar4[5] = (uint)(local_674[0] == 0);
            pvVar2 = GlobalAlloc(0x42,0x104);
            puVar3 = GlobalLock(pvVar2);
            puVar4[7] = (ulong)puVar3;
            if (puVar3 != (uchar *)0x0) {
              FUN_5f825e30(puVar3,(BYTE *)local_87c);
            }
            pvVar2 = GlobalAlloc(0x42,0x104);
            puVar3 = GlobalLock(pvVar2);
            puVar4[8] = (ulong)puVar3;
            if (puVar3 != (uchar *)0x0) {
              FUN_5f825e30(puVar3,local_778);
            }
            _mbscpy(local_980,(uchar *)"Not Available With G2");
            pvVar2 = GlobalAlloc(0x42,0x104);
            puVar3 = GlobalLock(pvVar2);
            puVar4[9] = (ulong)puVar3;
            if (puVar3 != (uchar *)0x0) {
              FUN_5f825e30(puVar3,local_980);
            }
            local_9c8 = puVar4;
            local_9c8 = (ulong *)FUN_5f81cc70((int *)param_1,-1,(int *)&local_9c8,1);
            if ((int)local_9c8 < 0) {
              if ((LPCVOID)puVar4[7] != (LPCVOID)0x0) {
                pvVar2 = GlobalHandle((LPCVOID)puVar4[7]);
                GlobalUnlock(pvVar2);
                pvVar2 = GlobalHandle((LPCVOID)puVar4[7]);
                GlobalFree(pvVar2);
              }
              if ((LPCVOID)puVar4[8] != (LPCVOID)0x0) {
                pvVar2 = GlobalHandle((LPCVOID)puVar4[8]);
                GlobalUnlock(pvVar2);
                pvVar2 = GlobalHandle((LPCVOID)puVar4[8]);
                GlobalFree(pvVar2);
              }
              if ((LPCVOID)puVar4[9] != (LPCVOID)0x0) {
                pvVar2 = GlobalHandle((LPCVOID)puVar4[9]);
                GlobalUnlock(pvVar2);
                pvVar2 = GlobalHandle((LPCVOID)puVar4[9]);
                GlobalFree(pvVar2);
              }
              free(puVar4);
            }
          }
        }
        local_9c0 = local_9c0 + 1;
        puVar4 = local_9c8;
      } while (local_9c0 < local_9bc);
    }
    RegCloseKey(local_9c4);
  }
  return (long)puVar4;
}


