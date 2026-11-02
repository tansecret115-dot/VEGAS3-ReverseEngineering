/* Module: sfppack2.dll
   Function: FUN_5cce9e40
   Address: 5cce9e40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cce9e40(int *param_1,int *param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  psVar1 = (short *)param_2[0x11];
  psVar2 = (short *)param_1[0x11];
  iVar3 = 4;
  bVar6 = true;
  piVar4 = param_1;
  piVar5 = &DAT_5cd5a210;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_2;
    piVar5 = &DAT_5cd5a210;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (((((bVar6) && (0xf < (uint)param_1[0x10])) && (0xf < (uint)param_2[0x10])) &&
        ((param_1[9] == 0 && (param_2[9] == 0)))) &&
       ((*psVar2 == *psVar1 &&
        ((psVar2[7] == psVar1[7] && (*(int *)(psVar2 + 2) == *(int *)(psVar1 + 2))))))) {
      iVar3 = FUN_5ccf2cf0((int)psVar2,(int)psVar1);
      return -(uint)(iVar3 != 0) & 0x80070057;
    }
  }
  return 0x80070057;
}


