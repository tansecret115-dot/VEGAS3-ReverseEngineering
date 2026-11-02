/* Module: mpgaout.dll
   Function: mpegOutAudioNew
   Address: 1000114c
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __cdecl
mpegOutAudioNew(undefined *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint *_Dst;
  uint uVar2;
  code *pcVar3;
  
                    /* 0x114c  3  mpegOutAudioNew */
  iVar1 = mpegOutAudioCheckSettings(param_2,0,param_5);
  if (iVar1 < 0x20000) {
    pcVar3 = (code *)0x0;
    if (param_1 != (undefined *)0x0) {
      pcVar3 = (code *)(*(code *)param_1)("malloc");
    }
    if (pcVar3 == (code *)0x0) {
      pcVar3 = malloc;
    }
    _Dst = (uint *)(*pcVar3)(0x44e20);
    if (_Dst == (uint *)0x0) {
      FUN_1000109c(0,"Unable to allocate memory for audio object");
      _Dst = (uint *)0x0;
    }
    else {
      memset(_Dst,0,0x44e20);
      _Dst[0x11386] = (uint)pcVar3;
      if (param_1 != (undefined *)0x0) {
        uVar2 = (*(code *)param_1)(&DAT_1000111b);
        _Dst[0x11387] = uVar2;
        uVar2 = (*(code *)param_1)("err_printf");
        _Dst[0x11382] = uVar2;
        uVar2 = (*(code *)param_1)("prg_printf");
        _Dst[0x11383] = uVar2;
        uVar2 = (*(code *)param_1)("wrn_printf");
        _Dst[0x11384] = uVar2;
        uVar2 = (*(code *)param_1)("inf_printf");
        _Dst[0x11385] = uVar2;
      }
      if (_Dst[0x11387] == 0) {
        _Dst[0x11387] = (uint)&DAT_1000b628;
      }
      _Dst[10] = 1;
      *_Dst = *param_2;
      _Dst[1] = param_2[1];
      _Dst[2] = param_2[2];
      _Dst[3] = param_2[3];
      _Dst[4] = param_2[4];
      _Dst[5] = param_2[5];
      _Dst[6] = param_2[6];
      _Dst[7] = param_2[7];
      _Dst[8] = param_2[8];
      _Dst[0xb] = param_5;
      _Dst[0x11380] = (uint)(_Dst + 0x1136a);
    }
  }
  else {
    _Dst = (uint *)0x0;
  }
  return _Dst;
}


