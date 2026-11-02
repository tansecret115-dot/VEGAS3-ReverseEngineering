/* Module: vegas30.exe
   Function: FUN_0058a940
   Address: 0058a940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0058a940(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_208;
  undefined4 local_204;
  undefined1 local_200 [512];
  
  uVar2 = _SfAudio_GetSampleType_4(param_1 + 0x110);
  iVar6 = param_7;
  iVar3 = (int)(0x1000000 / (longlong)param_7);
  uVar8 = __allrem(param_3,param_4,iVar3,iVar3 >> 0x1f);
  iVar3 = __alldiv(uVar8,0x200,0);
  uVar7 = iVar3 * iVar6;
  local_204 = 0;
  local_208 = param_6;
  _SfAudioPeak_InitMinMaxArray_12(uVar2,iVar6,local_200);
  iVar3 = local_208;
  while (0 < iVar3) {
    local_208 = iVar3;
    iVar4 = _SfAudioPeak_CalcMinMax_40
                      (uVar2,0x31,param_2,uVar7,0x800000,&param_5,&local_208,&local_204,iVar6,
                       local_200);
    uVar7 = uVar7 + iVar6 & 0x80007fff;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffff8000) + 1;
    }
    if ((iVar4 == 0) || (bVar1 = iVar3 <= local_208, iVar3 = local_208, bVar1)) break;
  }
  iVar3 = uVar7 + 0x30;
  puVar5 = (undefined2 *)(param_2 + uVar7 * 2);
  while( true ) {
    iVar6 = iVar3;
    if (0x7fff < iVar3) {
      iVar6 = 0x8000;
    }
    if (iVar6 <= (int)uVar7) break;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar7 = uVar7 + 2;
    puVar5 = puVar5 + 2;
  }
  return 0;
}


