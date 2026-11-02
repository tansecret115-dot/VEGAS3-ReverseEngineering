/* Module: vidcap30.exe
   Function: _SfAudio_Resample@20
   Address: 004bfa60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudio_Resample_20
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0xbfa60  240  _SfAudio_Resample@20 */
  iVar1 = param_1;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar2 = ftol();
  uVar6 = 0x222;
  uVar4 = (uint)*(ushort *)(iVar1 + 2);
  param_1 = 0;
  uVar3 = _SfAudio_GetSampleType_4(iVar1);
  _SfAudio_ResampleOpen_24(&param_1,uVar3,uVar5,uVar2,uVar4,uVar6);
  _SfAudio_ResampleEx_16(param_1,param_2,param_4,param_5);
  _SfAudio_ResampleClose_4(param_1);
  return 0;
}


