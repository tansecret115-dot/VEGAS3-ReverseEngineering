/* Module: rmto3260.dll
   Function: FUN_662e0440
   Address: 662e0440
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662e0440(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  
  iVar5 = 0;
  pcVar4 = s_logical_fileinfo_6630a118;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_662e0476:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_662e047b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_662e0476;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_662e047b:
  if (iVar3 != 0) {
    iVar5 = -0x7ff8ffa9;
  }
  if (-1 < iVar5) {
    FUN_662eeff0(auStack_1c,(int *)&param_1);
    FUN_662e0010(this);
  }
  uStack_14 = 0x662e04a5;
  FUN_662ef0f0((int *)&param_1);
  return iVar5;
}


