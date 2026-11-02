/* Module: vegas30k.dll
   Function: _SfAudio_MixEx@24
   Address: 01084150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudio_MixEx_24(int param_1,int param_2,int param_3,int param_4,uint param_5,tSFASRCOOKED *param_6
                 )

{
  uint uVar1;
  code *pcVar2;
  undefined4 unaff_EDI;
  uint uVar3;
  int local_34;
  int local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* 0x84150  756  _SfAudio_MixEx@24 */
  if (param_5 != 0) {
    if (param_6 == (tSFASRCOOKED *)0x0) {
      pcVar2 = (code *)_SfAudio_GetMixFunction_8(param_1,param_3);
      if (pcVar2 == (code *)0x0) {
        return 0x80004001;
      }
      local_28 = 0;
      local_24 = 0x3ff00000;
      local_20 = 0;
      local_1c = 0x3ff00000;
      local_18 = 0;
      local_14 = 0x3ff00000;
      local_10 = 0;
      local_c = 0x3ff00000;
      (*pcVar2)(param_2,param_4,*(ushort *)(param_3 + 2) * param_5,(uint)*(ushort *)(param_3 + 2),
                &local_28);
    }
    else {
      pcVar2 = (code *)_SfAudio_GetMixExFunction_8(param_1,param_3);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = (code *)_SfAudio_GetMixFunction_8(param_1,param_3);
        if (pcVar2 == (code *)0x0) {
          return 0x80004001;
        }
        local_28 = 0;
        local_24 = 0x3ff00000;
        local_20 = 0;
        local_1c = 0x3ff00000;
        local_18 = 0;
        local_14 = 0x3ff00000;
        local_10 = 0;
        local_c = 0x3ff00000;
        (*pcVar2)(param_2,param_4,*(ushort *)(param_3 + 2) * param_5,(uint)*(ushort *)(param_3 + 2),
                  &local_28);
        return 1;
      }
      local_34 = param_2;
      local_30 = param_4;
      if (0 < (int)param_5) {
        while( true ) {
          uVar3 = param_5;
          if ((*(int *)(param_6 + 0x3c) <= (int)param_5 >> 0x1f) &&
             ((*(int *)(param_6 + 0x3c) < (int)param_5 >> 0x1f ||
              (*(uint *)(param_6 + 0x38) < param_5)))) {
            uVar3 = *(uint *)(param_6 + 0x38);
          }
          (*pcVar2)(local_34,local_30,uVar3,*(undefined2 *)(param_3 + 2),param_6);
          uVar1 = *(uint *)(param_6 + 0x18);
          param_5 = param_5 - uVar3;
          *(uint *)(param_6 + 0x18) = uVar1 + uVar3;
          *(uint *)(param_6 + 0x1c) =
               *(int *)(param_6 + 0x1c) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar1,uVar3);
          uVar1 = *(uint *)(param_6 + 0x38);
          *(uint *)(param_6 + 0x38) = uVar1 - uVar3;
          *(uint *)(param_6 + 0x3c) =
               (*(int *)(param_6 + 0x3c) - ((int)uVar3 >> 0x1f)) - (uint)(uVar1 < uVar3);
          if ((int)param_5 < 1) break;
          local_34 = local_34 + *(ushort *)(param_1 + 0xc) * uVar3;
          local_30 = local_30 + *(ushort *)(param_3 + 0xc) * uVar3;
          if ((*(int *)(param_6 + 0x3c) < 1) &&
             ((*(int *)(param_6 + 0x3c) < 0 || (*(int *)(param_6 + 0x38) == 0)))) {
            SfAudio_ASRReCook(param_6,CONCAT44(unaff_EDI,*(undefined4 *)(param_6 + 0x1c)));
          }
        }
      }
    }
  }
  return 0;
}


