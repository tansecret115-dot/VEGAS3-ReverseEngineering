/* Module: rmto3260.dll
   Function: FUN_662c7440
   Address: 662c7440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662c7440(byte *param_1,int param_2,byte *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined1 local_bc [22];
  short local_a6;
  int local_8c;
  short local_88;
  short local_86;
  char local_84 [5];
  char local_7f [31];
  undefined1 local_60 [22];
  short local_4a;
  int local_30;
  short local_2c;
  short local_2a;
  char local_28 [5];
  char local_23 [31];
  
  FUN_662c7500(local_60,param_1,param_2);
  FUN_662c7500(local_bc,param_3,param_4);
  iVar1 = 4;
  bVar4 = true;
  pcVar2 = local_23;
  pcVar3 = local_7f;
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
    pcVar2 = local_28;
    pcVar3 = local_84;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if ((((bVar4) && (local_4a == local_a6)) && (local_30 == local_8c)) &&
       ((local_2c == local_88 && (local_2a == local_86)))) {
      return 0;
    }
  }
  return 0x800403c7;
}


