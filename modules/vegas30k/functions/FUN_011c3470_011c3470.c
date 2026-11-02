/* Module: vegas30k.dll
   Function: FUN_011c3470
   Address: 011c3470
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_011c3470(int param_1)

{
  UINT UVar1;
  MMRESULT MVar2;
  int iVar3;
  UINT_PTR UVar4;
  char *lpString1;
  tagWAVEOUTCAPSA *ptVar5;
  tagWAVEINCAPSA *ptVar6;
  tagWAVEINCAPSA local_64;
  tagWAVEOUTCAPSA local_34;
  
  *(undefined4 *)(param_1 + 8) = 5;
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x30;
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xffffffdf;
  _mbscpy((uchar *)(param_1 + 0xc),(uchar *)"Emulated Wave(WDM) Drivers");
  UVar4 = 0;
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
        if ((((MVar2 == 0) && (local_34.wMid == 1)) && (local_34.wPid == 100)) &&
           (local_34.vDriverVersion == 0x500)) {
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
        if (((MVar2 == 0) && (local_64.wMid == 1)) &&
           ((local_64.wPid == 0x65 && (local_64.vDriverVersion == 0x500)))) {
          lpString1 = s_Multichannel_Delta_1010_01208be8;
          do {
            iVar3 = lstrcmpA(lpString1,local_64.szPname);
            if (iVar3 == 0) goto LAB_011c3588;
            lpString1 = lpString1 + 0x106;
          } while (lpString1 < &DAT_01209000);
          *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
        }
LAB_011c3588:
        UVar4 = UVar4 + 1;
      } while (UVar4 < UVar1);
    }
  }
  return *(int *)(param_1 + 0x114) == 0;
}


