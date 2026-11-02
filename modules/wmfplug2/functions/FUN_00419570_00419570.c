/* Module: wmfplug2.dll
   Function: FUN_00419570
   Address: 00419570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419570(void)

{
  LSTATUS LVar1;
  HRSRC pHVar2;
  HGLOBAL hResData;
  uchar *puVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  HKEY local_8;
  BYTE local_4 [4];
  
  lVar6 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_00488870,0,0x2001f,
                        &local_8);
  if (LVar1 == 0) {
    FUN_00446520(local_8,"System");
    RegCloseKey(local_8);
  }
  puVar5 = &DAT_004887d0;
  do {
    pHVar2 = (HRSRC)FUN_0041fcf0(DAT_00489d58,(LPCSTR)(uint)*puVar5,(LPCSTR)0xa);
    if (pHVar2 != (HRSRC)0x0) {
      hResData = (HGLOBAL)FUN_0041fd40(DAT_00489d58,pHVar2);
      if (hResData != (HGLOBAL)0x0) {
        puVar3 = LockResource(hResData);
        if (puVar3 != (uchar *)0x0) {
          uVar4 = FUN_0041fd80(DAT_00489d58,pHVar2);
          lVar6 = SfWMF_RestoreTemplateData(puVar3,uVar4);
        }
      }
    }
    puVar5 = puVar5 + 1;
  } while (puVar5 < s_start_marker_table_004887fc);
  if (-1 < lVar6) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ec,0,0x2001f,
                          &local_8);
    if (LVar1 == 0) {
      local_4[0] = 0xe8;
      local_4[1] = '\x03';
      local_4[2] = '\0';
      local_4[3] = '\0';
      RegSetValueExA(local_8,s_Version_0048892c,0,4,local_4,4);
      RegCloseKey(local_8);
    }
  }
  return;
}


