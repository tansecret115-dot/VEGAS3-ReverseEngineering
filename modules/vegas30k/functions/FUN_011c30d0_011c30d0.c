/* Module: vegas30k.dll
   Function: FUN_011c30d0
   Address: 011c30d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_011c30d0(int param_1)

{
  UINT UVar1;
  MMRESULT MVar2;
  int iVar3;
  UINT_PTR UVar4;
  tagWAVEOUTCAPSA *ptVar5;
  tagWAVEINCAPSA *ptVar6;
  tagWAVEINCAPSA local_64;
  tagWAVEOUTCAPSA local_34;
  
  UVar4 = 0;
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x22;
  *(undefined4 *)(param_1 + 8) = 6;
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xffffffdf;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  UVar1 = waveOutGetNumDevs();
  if (UVar1 != 0) {
    if (UVar1 != 0) {
      do {
        ptVar5 = &local_34;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          ptVar5->wMid = 0;
          ptVar5->wPid = 0;
          ptVar5 = (tagWAVEOUTCAPSA *)&ptVar5->vDriverVersion;
        }
        MVar2 = waveOutGetDevCapsA(UVar4,&local_34,0x34);
        if (((MVar2 == 0) &&
            (((local_34.wMid != 1 || (local_34.wPid != 100)) || (local_34.vDriverVersion != 0x500)))
            ) && ((local_34.wChannels < 3 || (local_34.wChannels == 0xffff)))) {
          *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
        }
        UVar4 = UVar4 + 1;
      } while (UVar4 < UVar1);
    }
    UVar1 = waveInGetNumDevs();
    if ((UVar1 != 0) && (UVar4 = 0, UVar1 != 0)) {
      do {
        ptVar6 = &local_64;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          ptVar6->wMid = 0;
          ptVar6->wPid = 0;
          ptVar6 = (tagWAVEINCAPSA *)&ptVar6->vDriverVersion;
        }
        MVar2 = waveInGetDevCapsA(UVar4,&local_64,0x30);
        if ((MVar2 == 0) &&
           ((((local_64.wMid != 1 || (local_64.wPid != 0x65)) || (local_64.vDriverVersion != 0x500))
            && ((local_64.wChannels < 3 || (local_64.wChannels == 0xffff)))))) {
          *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
        }
        UVar4 = UVar4 + 1;
      } while (UVar4 < UVar1);
    }
  }
  return *(int *)(param_1 + 0x114) == 0;
}


