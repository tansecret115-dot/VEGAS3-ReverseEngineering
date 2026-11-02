/* Module: g2plug.dll
   Function: SfG2GetCodecInfo
   Address: 5f80f090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2GetCodecInfo(struct _GUID,unsigned char * *,unsigned long *) */

long SfG2GetCodecInfo(_GUID param_1,uchar **param_2,ulong *param_3)

{
  LSTATUS LVar1;
  HGLOBAL hMem;
  LPBYTE lpData;
  long lVar2;
  DWORD local_34;
  HKEY local_30;
  HKEY local_2c;
  CHAR local_28 [40];
  
                    /* 0xf090  17  ?SfG2GetCodecInfo@@YGJU_GUID@@PAPAEPAK@Z */
  lVar2 = -0x7fffbffb;
  LVar1 = RegOpenKeyA((HKEY)0x80000002,
                      "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom",&local_2c
                     );
  if (LVar1 == 0) {
    FUN_5f80e9d0(&param_1,local_28,0x28,1);
    LVar1 = RegOpenKeyA(local_2c,local_28,&local_30);
    if (LVar1 == 0) {
      local_34 = 3;
      LVar1 = RegQueryValueExA(local_30,"Codecs",(LPDWORD)0x0,&local_34,(LPBYTE)0x0,param_3);
      if ((LVar1 == 0) && (local_34 == 3)) {
        hMem = GlobalAlloc(0x42,*param_3);
        lpData = GlobalLock(hMem);
        *param_2 = lpData;
        if (lpData != (LPBYTE)0x0) {
          LVar1 = RegQueryValueExA(local_30,"Codecs",(LPDWORD)0x0,&local_34,lpData,param_3);
          if (LVar1 == 0) {
            lVar2 = 0;
          }
        }
      }
      RegCloseKey(local_30);
    }
    RegCloseKey(local_2c);
  }
  return lVar2;
}


