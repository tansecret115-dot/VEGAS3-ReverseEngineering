/* Module: sfcdi.dll
   Function: cdtext_PacketsToSfCDText
   Address: 5bf0ff20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_PacketsToSfCDText(struct _sfcdtext *,struct _cdtextpack *,unsigned long) */

long cdtext_PacketsToSfCDText(_sfcdtext *param_1,_cdtextpack *param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  _sfcdtext *p_Var5;
  byte *pbVar6;
  uint uVar7;
  uint local_418;
  uint local_414;
  uint local_410;
  int local_40c [3];
  byte local_400;
  undefined2 uStack_3ff;
  undefined1 uStack_3fd;
  undefined1 local_3fc;
  ushort uStack_3fb;
  byte local_3f4 [1012];
  
                    /* 0xff20  221  ?cdtext_PacketsToSfCDText@@YGJPAU_sfcdtext@@PAU_cdtextpack@@K@Z
                        */
  local_40c[2] = param_3 / 0x12;
  local_40c[1] = 0;
  if (local_40c[2] != 0) {
    pbVar4 = (byte *)0x0;
    do {
      iVar2 = FUN_5bf0fd80((byte *)param_2,local_40c[2],&local_400,0x400,(uint *)(local_40c + 1),
                           local_40c);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (((byte)*param_2 & 0xe0) == 0x80) {
        uVar3 = (byte)*param_2 & 0x1f;
        switch(uVar3) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 0xe:
          FUN_5bf0fe90(param_1,uVar3,(LPCSTR)&local_400,local_40c[0] * 0xc);
          break;
        case 6:
          *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 8);
          uVar1 = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(param_1 + 0x638) = 1;
          *(undefined4 *)(param_1 + 0x644) = uVar1;
          break;
        case 8:
          uVar3 = local_40c[0] * 0xc;
          if (uVar3 != 0) {
            *(uint *)(param_1 + 0x4a0) = CONCAT21(uStack_3ff,local_400) & 0xff;
            local_418 = CONCAT11(local_3fc,uStack_3fd) & 0xff;
            local_414 = CONCAT21(uStack_3fb,local_3fc) & 0xff;
            *(uint *)(param_1 + 0x4a4) = CONCAT12(uStack_3fd,uStack_3ff) & 0xff;
            local_410 = uStack_3fb & 0xff;
            *(undefined4 *)(param_1 + 0x49c) = 1;
            FUN_5bf2b640((int *)(param_1 + 0x4a8),(int *)&local_418);
            pbVar4 = local_3f4;
            uVar3 = uVar3 - 0xc;
          }
          iVar2 = (uVar3 / 0xc) * 3;
          if (iVar2 != 0) {
            p_Var5 = param_1 + 0x4b0;
            do {
              local_418 = (uint)*pbVar4;
              local_414 = (uint)pbVar4[1];
              local_410 = (uint)pbVar4[2];
              FUN_5bf2b640((int *)(p_Var5 + -4),(int *)&local_418);
              local_418 = (uint)pbVar4[3];
              local_414 = (uint)pbVar4[4];
              local_410 = (uint)pbVar4[5];
              FUN_5bf2b640((int *)p_Var5,(int *)&local_418);
              local_418 = (uint)pbVar4[6];
              local_414 = (uint)pbVar4[7];
              local_410 = (uint)pbVar4[8];
              FUN_5bf2b640((int *)(p_Var5 + 4),(int *)&local_418);
              p_Var5 = p_Var5 + 0xc;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          break;
        case 0xf:
          *(undefined4 *)(param_1 + 0x648) = 1;
          pbVar6 = &local_400;
          p_Var5 = param_1 + 0x64c;
          for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)p_Var5 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            p_Var5 = p_Var5 + 4;
          }
        }
      }
      local_40c[2] = local_40c[2] - local_40c[0];
      param_2 = param_2 + local_40c[0] * 0x12;
    } while (local_40c[2] != 0);
  }
  if (*(int *)(param_1 + 0x648) != 0) {
    uVar7 = ((uint)(byte)param_1[0x64e] - (uint)(byte)param_1[0x64d]) + 1;
    uVar3 = cdtext_GetTrackCount(param_1);
    if (uVar7 < uVar3) {
      iVar2 = uVar3 - uVar7;
      do {
        uVar3 = uVar3 - 1;
        FUN_5bf29dd0(*(int **)(param_1 + 0x498),uVar3,1,0);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}


