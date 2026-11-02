/* Module: vegas30.exe
   Function: FUN_00418a40
   Address: 00418a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418a40(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar1 = 0;
  puVar3 = (undefined *)0x0;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 1:
  case 2:
  case 4:
    puVar3 = &DAT_0063d208;
    iVar1 = 2;
    break;
  case 3:
    Mixer_GetMixerType((ISFMixer *)0x0);
    Mixer_GetNumMainBuses((ISFMixer *)0x0);
    iVar1 = 5;
    puVar3 = &DAT_0063d230;
    break;
  case 5:
    iVar1 = 0;
    piVar2 = &DAT_0063d29c;
    do {
      if (*piVar2 == 0x19a) goto LAB_00418a7c;
      piVar2 = piVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (piVar2 < &DAT_0063d314);
    iVar1 = -1;
LAB_00418a7c:
    if (DAT_00649e08 == 0) {
      *(uint *)(&DAT_0063d298 + iVar1 * 0x14) = *(uint *)(&DAT_0063d298 + iVar1 * 0x14) & 0xfffffffe
      ;
      iVar1 = 6;
      puVar3 = &DAT_0063d298;
    }
    else {
      *(byte *)(iVar1 * 0x14 + 0x63d2a0) = *(byte *)(iVar1 * 0x14 + 0x63d2a0) | 1;
      iVar1 = 6;
      puVar3 = &DAT_0063d298;
    }
  }
  *param_2 = puVar3;
  *param_3 = iVar1;
  iVar5 = 0;
  if (iVar1 == 0) {
    *param_4 = 0;
    return;
  }
  pbVar4 = puVar3 + 9;
  do {
    if ((*pbVar4 & 1) != 0) {
      iVar5 = iVar5 + 1;
    }
    pbVar4 = pbVar4 + 0x14;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_4 = iVar5;
  return;
}


