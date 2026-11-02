/* Module: vegas30k.dll
   Function: _SfDibChannelBlur@52
   Address: 0109dfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibChannelBlur_52
              (int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7,int param_8,uint param_9,undefined4 param_10,
              int param_11)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pMem;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int local_34;
  int local_30;
  int local_2c;
  LPVOID local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x9dfb0  829  _SfDibChannelBlur@52 */
  iVar1 = _SfDibPrepareCopy_52
                    (&local_34,&local_30,local_14,&local_2c,param_1,param_2,param_3,param_4,param_6,
                     param_7,param_8,param_9,param_11);
  if (-1 < iVar1) {
    local_10 = 0;
    local_c = 0;
    iVar1 = ftol();
    local_8 = iVar1;
    local_4 = ftol();
    iVar4 = (int)(param_11 + (param_11 >> 0x1f & 3U)) >> 2;
    iVar6 = iVar4 * iVar1;
    if (iVar1 < 2) {
      local_8 = 2;
    }
    if (local_4 < 2) {
      local_4 = 2;
    }
    iVar1 = _SfDibSetUnscaled_52(param_1,param_2,param_3,param_4,param_11,0,0,0,0,0,0,0,0x3ff00000);
    if (-1 < iVar1) {
      if ((local_8 - local_10 == local_34) && (local_4 - local_c == local_30)) {
        return 0;
      }
      pvVar2 = GlobalAlloc(2,(local_4 - local_c) * iVar4 * (local_8 - local_10));
      pMem = GlobalLock(pvVar2);
      if (pMem == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      local_28 = pMem;
      iVar1 = FUN_0109e340(pMem,&local_10,iVar6,param_6,param_7,param_8,param_9,param_10,param_11);
      local_18 = iVar1;
      if (-1 < iVar1) {
        iVar4 = _GetByteOffsetFromChannelEnum_8(param_5,param_11);
        local_20 = (((local_8 - local_10) + -1) * 0x4000) / local_34;
        param_9 = 0;
        local_1c = (((local_4 - local_c) + -1) * 0x4000) / local_30;
        param_8 = 0;
        if (0 < local_30) {
          do {
            uVar5 = param_9 & 0x80003fff;
            param_4 = 0;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xffffc000) + 1;
            }
            if ((param_11 == 4) && (param_2 = 0, 0 < local_34)) {
              local_24 = 0x4000 - uVar5;
              param_1 = iVar4;
              do {
                uVar8 = param_4 & 0x80003fff;
                if ((int)uVar8 < 0) {
                  uVar8 = (uVar8 - 1 | 0xffffc000) + 1;
                }
                pbVar7 = (byte *)((int)local_28 +
                                 ((int)(param_4 + ((int)param_4 >> 0x1f & 0x3fffU)) >> 0xe) +
                                 ((int)(param_9 + ((int)param_9 >> 0x1f & 0x3fffU)) >> 0xe) * iVar6)
                ;
                iVar1 = (0x4000 - uVar8) * uVar5;
                iVar3 = (0x4000 - uVar8) * local_24;
                *(char *)(param_1 + local_2c) =
                     (char)(((int)(((int)(uVar8 * uVar5) >> 0x1f & 0x3fffU) + uVar8 * uVar5) >> 0xe)
                            * (uint)pbVar7[iVar6 + 1] +
                            ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe) * (uint)pbVar7[iVar6]
                            + ((int)(local_24 * uVar8 + ((int)(local_24 * uVar8) >> 0x1f & 0x3fffU))
                              >> 0xe) * (uint)pbVar7[1] +
                            ((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe) * (uint)*pbVar7 >> 0xe
                           );
                param_4 = param_4 + local_20;
                param_2 = param_2 + 1;
                param_1 = param_1 + 4;
              } while (param_2 < local_34);
            }
            param_9 = param_9 + local_1c;
            local_2c = local_2c + param_3;
            param_8 = param_8 + 1;
            pMem = local_28;
            iVar1 = local_18;
          } while (param_8 < local_30);
        }
      }
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
  }
  return iVar1;
}


