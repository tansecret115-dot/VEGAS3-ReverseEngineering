/* Module: vegas30k.dll
   Function: FUN_0109e340
   Address: 0109e340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0109e340(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int iStack_4;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = param_2[2];
    local_34 = param_1;
    local_24 = param_2[3] - param_2[1];
    _SfDibPrepareSet_32(local_20,local_1c,&local_18,param_4,param_5,param_6,param_7,param_9);
    local_14 = _GetByteOffsetFromChannelEnum_8(param_8,param_9);
    iVar4 = ftol();
    iVar5 = ftol();
    if (0 < local_24) {
      param_5 = 0;
      iVar8 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
      do {
        if ((param_9 == 4) && (local_2c = 0, 0 < iVar2 - iVar1)) {
          iVar11 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
          local_10 = ftol();
          local_c = ftol();
          param_1 = 0;
          do {
            uVar9 = 0;
            local_8 = 0;
            iStack_4 = 0;
            iVar7 = param_5;
            local_30 = iVar8;
            if (0 < iVar8) {
              do {
                if (0 < iVar11) {
                  iVar10 = param_1;
                  iVar12 = iVar11;
                  do {
                    uVar6 = (uint)*(byte *)(((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe) *
                                            param_6 + ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >>
                                                      0xe) * 4 + local_14 + local_18);
                    bVar13 = CARRY4(uVar9,uVar6);
                    uVar9 = uVar9 + uVar6;
                    iStack_4 = iStack_4 + (uint)bVar13;
                    iVar10 = iVar10 + local_10;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                local_30 = local_30 + -1;
                iVar7 = iVar7 + local_c;
                local_8 = uVar9;
              } while (local_30 != 0);
            }
            uVar3 = ftol();
            *(undefined1 *)(local_2c + local_34) = uVar3;
            local_2c = local_2c + 1;
            param_1 = param_1 + iVar4;
          } while (local_2c < iVar2 - iVar1);
        }
        local_34 = local_34 + param_3;
        param_5 = param_5 + iVar5;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    return 0;
  }
  return 0x80004003;
}


