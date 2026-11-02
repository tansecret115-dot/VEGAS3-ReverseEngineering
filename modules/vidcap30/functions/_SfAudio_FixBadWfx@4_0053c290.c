/* Module: vidcap30.exe
   Function: _SfAudio_FixBadWfx@4
   Address: 0053c290
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfAudio_FixBadWfx_4(short *param_1)

{
  int iVar1;
  bool bVar2;
  
                    /* 0x13c290  229  _SfAudio_FixBadWfx@4 */
  bVar2 = false;
  if (*param_1 == 1) {
    bVar2 = param_1[7] == 0x14;
    if (bVar2) {
      param_1[7] = 0x18;
    }
    iVar1 = (uint)((ushort)param_1[7] >> 3) * (uint)(ushort)param_1[1];
    if (iVar1 - (uint)(ushort)param_1[6] != 0) {
      param_1[6] = (short)iVar1;
      bVar2 = true;
    }
  }
  return bVar2;
}


