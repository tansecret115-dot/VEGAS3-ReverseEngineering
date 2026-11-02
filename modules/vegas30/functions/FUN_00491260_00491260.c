/* Module: vegas30.exe
   Function: FUN_00491260
   Address: 00491260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00491260(int param_1,LPCSTR param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  int local_244;
  undefined4 local_240;
  undefined4 local_23c;
  short local_238 [154];
  CHAR local_104 [260];
  
  if (param_2 != (LPCSTR)0x0) {
    iVar2 = lstrcmpA(param_2,"");
    if (iVar2 != 0) {
      uVar8 = 0;
      if (*(int *)(param_1 + 0xa0 + param_3 * 8) != 0) {
        iVar2 = 0;
        do {
          iVar3 = lstrcmpiA(param_2,*(LPCSTR *)(*(int *)(param_1 + 0x9c + param_3 * 8) + iVar2));
          if (iVar3 == 0) {
            uVar4 = _SfGetString_8(DAT_00647204,0x6d76);
            SfMsgBox(DAT_00647624,0x30,uVar4,param_2);
            return;
          }
          uVar8 = uVar8 + 1;
          iVar2 = iVar2 + 0x14;
        } while (uVar8 < *(uint *)(param_1 + 0xa0 + param_3 * 8));
      }
      if (param_3 != 0) {
        iVar2 = param_3 * 0xe;
        uVar1 = iVar2 - 0xe;
        uVar8 = iVar2 - 1;
        uVar7 = uVar1;
        if (uVar1 <= uVar8) {
          while( true ) {
            iVar3 = _SfGetMetricStringEx_24(DAT_00647200,uVar7,local_104,0x104,0,1);
            if (iVar3 == 0) break;
            iVar3 = lstrcmpiA(local_104,param_2);
            if (iVar3 == 0) break;
            uVar7 = uVar7 + 1;
            if (uVar8 < uVar7) {
              return;
            }
          }
          if (uVar7 <= uVar8) {
            local_240 = *(undefined4 *)(param_1 + 0x120);
            local_23c = *(undefined4 *)(param_1 + 0x124);
            local_244 = *(int *)(param_1 + 0xf8);
            iVar3 = 0;
            if (local_244 != 0) {
              psVar5 = *(short **)(param_1 + 0xf4);
              psVar6 = local_238 + 1;
              do {
                if (*psVar5 != 0) {
                  iVar3 = iVar3 + 1;
                  psVar6[-1] = psVar5[4];
                  *psVar6 = *psVar5;
                  psVar6 = psVar6 + 2;
                }
                psVar5 = psVar5 + 8;
                local_244 = local_244 + -1;
              } while (local_244 != 0);
            }
            _SfSetMetricBinary_16(DAT_00647200,uVar7,&local_240,iVar3 * 4 + 8);
            _SfSetMetricString_12(DAT_00647200,uVar7,param_2);
            if (uVar7 < iVar2 - 1U) {
              iVar2 = uVar7 + 1;
              iVar3 = _SfGetMetricStringEx_24(DAT_00647200,iVar2,local_104,0x104,0,1);
              if (iVar3 != 0) {
                _SfDeleteMetric_12(DAT_00647200,iVar2,3);
                _SfDeleteMetric_12(DAT_00647200,iVar2,1);
              }
            }
            *param_4 = (uVar7 - uVar1) + *(int *)(param_1 + 0xa0 + param_3 * 8);
          }
        }
      }
    }
  }
  return;
}


