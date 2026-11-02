/* Module: sfcdi.dll
   Function: FUN_5bf07c60
   Address: 5bf07c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf07c60(uint *param_1)

{
  HSFSCSIADAPTER__ *pHVar1;
  ulong uVar2;
  HSFSCSIPORT__ *pHVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  HSFSCSIPORT__ **ppHVar7;
  ulong *puVar8;
  ulong local_424;
  undefined4 local_420 [5];
  uchar local_40c [80];
  _INQUIRYDATA local_3bc [96];
  HSFSCSIPORT__ *local_35c [2];
  uint local_354;
  uint local_350;
  undefined4 local_208;
  tSFSCSIINQUIRYDATA local_84 [132];
  
  ppHVar7 = local_35c;
  for (iVar5 = 0xb5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppHVar7 = (HSFSCSIPORT__ *)0x0;
    ppHVar7 = ppHVar7 + 1;
  }
  uVar4 = param_1[1];
  uVar6 = 0x8004e00a;
  *(undefined2 *)ppHVar7 = 0;
  local_208 = 0;
  pHVar1 = SfScsi_OpenAdapter(uVar4,0x84,&local_424);
  if (pHVar1 != (HSFSCSIADAPTER__ *)0x0) {
    iVar5 = SfScsi_GetInquiryData(pHVar1,local_84);
    if (iVar5 != 0) {
      local_354 = param_1[1];
      local_350 = param_1[2];
      puVar8 = &local_424;
      uVar2 = SfScsi_GetDefIOBufferSize();
      pHVar3 = SfScsi_Open(param_1[1],param_1[2],uVar2,puVar8);
      if (pHVar3 != (HSFSCSIPORT__ *)0x0) {
        iVar5 = SfScsi_ScanDevice(pHVar3,local_3bc,3000);
        local_35c[0] = pHVar3;
        if (-1 < iVar5) {
          uVar4 = FUN_5bf073d0(local_35c,(byte *)local_3bc);
          if (-1 < (int)uVar4) {
            *param_1 = uVar4;
            local_420[0] = 100;
            cdr_GetInterfaceCaps(uVar4,(cdrcaps_tag *)local_420);
            _mbscpy((uchar *)(param_1 + 3),local_40c);
            uVar6 = 0;
            param_1[0x68] = param_1[0x68] | 0x4000;
          }
        }
        SfScsi_Close(pHVar3);
      }
      SfScsi_CloseAdapter(pHVar1);
    }
  }
  return uVar6;
}


