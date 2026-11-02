/* Module: vegas30k.dll
   Function: FUN_011c5d20
   Address: 011c5d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011c5d20(short *param_1,UINT param_2,short param_3)

{
  ushort uVar1;
  DWORD DVar2;
  MMRESULT MVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  WAVEFORMATEX *pWVar7;
  WAVEFORMATEX local_3c;
  WAVEFORMATEX local_28;
  ushort local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar5 = param_3 * 2 + 2;
  if (*param_1 == -2) {
    local_28.nSamplesPerSec = *(DWORD *)(param_1 + 2);
    local_28.nBlockAlign = ((ushort)param_1[7] >> 3) * uVar5;
    local_28.wBitsPerSample = param_1[7];
    local_28.nAvgBytesPerSec = local_28.nBlockAlign * local_28.nSamplesPerSec;
    local_16 = param_1[9];
    local_14 = *(undefined4 *)(param_1 + 10);
  }
  else {
    DVar2 = *(DWORD *)(param_1 + 2);
    local_28.nSamplesPerSec = DVar2;
    if (uVar5 < 3) {
      uVar1 = param_1[7];
      uVar6 = (uVar1 >> 3) * uVar5;
      pWVar7 = &local_28;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        pWVar7->wFormatTag = 0;
        pWVar7->nChannels = 0;
        pWVar7 = (WAVEFORMATEX *)&pWVar7->nSamplesPerSec;
      }
      local_28.wFormatTag = 1;
      local_28.nChannels = uVar5;
      local_28.nBlockAlign = uVar6;
      local_28.wBitsPerSample = uVar1;
      local_28.cbSize = 0;
      local_28.nAvgBytesPerSec = uVar6 * DVar2;
      goto LAB_011c5f01;
    }
    local_28.wBitsPerSample = param_1[7];
    local_28.nBlockAlign = (local_28.wBitsPerSample >> 3) * uVar5;
    local_28.nAvgBytesPerSec = local_28.nBlockAlign * DVar2;
    pWVar7 = &local_28;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      pWVar7->wFormatTag = 0;
      pWVar7->nChannels = 0;
      pWVar7 = (WAVEFORMATEX *)&pWVar7->nSamplesPerSec;
    }
    local_28.cbSize = 0;
    local_28.wFormatTag = 1;
    local_28.nChannels = uVar5;
    MVar3 = waveOutOpen((LPHWAVEOUT)0x0,param_2,&local_28,0,0,1);
    iVar4 = FUN_011c1770(MVar3);
    if (-1 < iVar4) goto LAB_011c5f01;
    local_28.nSamplesPerSec = *(DWORD *)(param_1 + 2);
    local_16 = param_1[7];
    local_28.nBlockAlign = (local_16 >> 3) * uVar5;
    local_28.wBitsPerSample = local_16;
    local_28.nAvgBytesPerSec = local_28.nBlockAlign * local_28.nSamplesPerSec;
    local_14 = 0x80000000;
  }
  local_28.nChannels = uVar5;
  local_28.wFormatTag = 0xfffe;
  local_28.cbSize = 0x16;
  local_10 = DAT_01206450;
  local_c = DAT_01206454;
  local_8 = DAT_01206458;
  local_4 = DAT_0120645c;
LAB_011c5f01:
  MVar3 = waveOutOpen((LPHWAVEOUT)0x0,param_2,&local_28,0,0,1);
  FUN_011c1770(MVar3);
  return;
}


