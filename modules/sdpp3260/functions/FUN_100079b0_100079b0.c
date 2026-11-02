/* Module: sdpp3260.dll
   Function: FUN_100079b0
   Address: 100079b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_100079b0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  double dVar11;
  double local_2c [4];
  char *local_c;
  int *local_8;
  
  uVar5 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_c = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar2 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar2 + -uVar5;
  pcVar9 = local_c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  pcVar2 = strtok(local_c,&DAT_100092c0);
  iVar10 = 0;
  if (pcVar2 != (char *)0x0) {
    pdVar7 = local_2c;
    do {
      if (3 < iVar10) break;
      dVar11 = strtod(pcVar2,(char **)0x0);
      *pdVar7 = dVar11;
      iVar10 = iVar10 + 1;
      pdVar7 = pdVar7 + 1;
      pcVar2 = strtok((char *)0x0,&DAT_100092c0);
    } while (pcVar2 != (char *)0x0);
    if (pcVar2 != (char *)0x0) {
      *local_8 = 0;
      local_8[1] = 0;
      goto LAB_10007b60;
    }
  }
  if (iVar10 == 1) {
    iVar10 = ftol();
    piVar8 = local_8;
    *local_8 = iVar10;
    iVar10 = ftol();
    piVar8[1] = iVar10;
  }
  else if (iVar10 == 2) {
    iVar10 = ftol();
    iVar3 = ftol();
    piVar8 = local_8;
    local_8[1] = iVar3;
    iVar3 = ftol();
    *piVar8 = iVar10 - iVar3;
  }
  else {
    if (iVar10 == 3) {
      iVar10 = ftol();
      iVar3 = ftol();
      piVar8 = local_8;
      local_8[1] = iVar3;
      iVar3 = ftol();
    }
    else {
      if (iVar10 != 4) goto LAB_10007b60;
      iVar10 = ftol();
      iVar3 = ftol();
      piVar8 = local_8;
      local_8[1] = iVar3;
      iVar3 = ftol();
      iVar4 = ftol();
      iVar3 = iVar3 - iVar4;
    }
    iVar4 = ftol();
    *piVar8 = (iVar3 - iVar4) + iVar10;
  }
LAB_10007b60:
  operator_delete(local_c);
  FUN_10007860(local_8);
  return;
}


