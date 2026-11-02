/* Module: rmto3260.dll
   Function: FUN_662f9600
   Address: 662f9600
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662f9600(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_c;
  undefined1 local_8;
  
  local_c = *param_1;
  iVar2 = 4;
  bVar7 = true;
  local_8 = 0;
  pcVar5 = (char *)&local_c;
  pcVar6 = (char *)&DAT_6630b3fc;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *pcVar5 == *pcVar6;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_6630ba10;
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
    pcVar6 = (char *)&local_c;
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
  }
  _strlwr((char *)&local_c);
  param_1 = (undefined4 *)0x0;
  iVar2 = FUN_662ee9e0((void *)((int)this + 0x10),(byte *)&local_c,(int *)&param_1);
  return -(uint)(iVar2 != 0) & (uint)param_1;
}


