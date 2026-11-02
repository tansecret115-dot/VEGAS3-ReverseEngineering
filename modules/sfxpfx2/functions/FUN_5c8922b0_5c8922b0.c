/* Module: sfxpfx2.dll
   Function: FUN_5c8922b0
   Address: 5c8922b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8922b0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  DAT_5c8e93c0 = FUN_5c891cf0();
  DAT_5c8e93b8 = 0;
  FUN_5c8d14a0(DAT_5c8e93c0,&local_10,&local_8,1);
  DAT_5c8e93c4 = 0;
  iVar2 = FUN_5c8d14a0(DAT_5c8e93c0,&local_4,(int *)&local_c,1);
  if (-1 < iVar2) {
    DAT_5c8e93c4 = local_c & 0xff;
  }
  if ((local_10 == 0) || (uVar3 = 1, (int)DAT_5c8e93c4 < 1)) {
    uVar3 = FUN_5c8a5a10();
  }
  DAT_5c8e93b8 = uVar3;
  FUN_5c8d14a0(DAT_5c8e93c0,(int *)&local_c,&local_4,1);
  DAT_5c8e93bc = local_c;
  uVar3 = 0xffffffff;
  pcVar5 = s_ExpressFX_2_5c8e7174;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = (char *)&DAT_5c8e9374;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_expressfx2_5c8e7180;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = (char *)&DAT_5c8e9334;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}


