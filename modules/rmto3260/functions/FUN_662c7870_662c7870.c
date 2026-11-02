/* Module: rmto3260.dll
   Function: FUN_662c7870
   Address: 662c7870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662c7870(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined1 local_94 [6];
  short local_8e;
  int local_72;
  int local_6e;
  short local_6a;
  short local_68;
  char local_66 [4];
  char local_62 [22];
  undefined1 local_4c [6];
  short local_46;
  int local_2a;
  int local_26;
  short local_22;
  short local_20;
  char local_1e [4];
  char local_1a [22];
  
  FUN_662c7940(local_4c,(byte *)(param_1 + 0x10),param_2);
  FUN_662c7940(local_94,(byte *)(param_3 + 0x10),param_4);
  iVar1 = 4;
  bVar4 = true;
  pcVar2 = local_1a;
  pcVar3 = local_62;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = 4;
    bVar4 = true;
    pcVar2 = local_1e;
    pcVar3 = local_66;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if ((((bVar4) && (local_46 == local_8e)) && (local_2a == local_72)) &&
       (((local_26 == local_6e && (local_22 == local_6a)) && (local_20 == local_68)))) {
      return 0;
    }
  }
  return 0x800403c7;
}


