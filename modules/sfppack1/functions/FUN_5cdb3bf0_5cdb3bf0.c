/* Module: sfppack1.dll
   Function: FUN_5cdb3bf0
   Address: 5cdb3bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cdb3bf0(char *param_1,double *param_2)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_c;
  
  *(undefined4 *)param_2 = 0;
  uStack_c = 0x3ff00000;
  *(undefined4 *)((int)param_2 + 4) = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  if (*param_1 == '\0') {
    return 0;
  }
  iVar5 = lstrlenA(param_1);
  iVar5 = iVar5 + -1;
  if (-1 < iVar5) {
    while ((param_1[iVar5] == ' ' || (param_1[iVar5] == '\t'))) {
      param_1[iVar5] = '\0';
    }
  }
  iVar5 = lstrlenA(param_1);
  uVar6 = iVar5 - 1;
  if (-1 < (int)uVar6) {
    do {
      if (param_1[uVar6] == '.') break;
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  cVar4 = *param_1;
  if (cVar4 == '-') {
    uStack_c = 0xbff00000;
    param_1 = param_1 + 1;
  }
  uVar7 = (uint)(cVar4 == '-');
  cVar4 = *param_1;
  while (cVar4 != '\0') {
    if (((((cVar4 < '0') || ('9' < cVar4)) && (cVar4 != '.')) && ((cVar4 != ',' && (cVar4 != ' '))))
       && (cVar4 != '\t')) goto LAB_5cdb3d98;
    if (((uVar7 == uVar6) || (cVar4 == ' ')) || (cVar4 == '\t')) {
      cVar4 = *param_1;
      param_1 = param_1 + 1;
      if ((cVar4 == '.') && (cVar4 = *param_1, '/' < cVar4)) {
        dVar2 = 10.0;
        goto LAB_5cdb3d33;
      }
      break;
    }
    if (cVar4 != ',') {
      dVar2 = *param_2 * _DAT_5ce12cb8;
      *param_2 = dVar2;
      *param_2 = (double)(*param_1 + -0x30) + dVar2;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar7 = uVar7 + 1;
    cVar4 = *pcVar1;
  }
  goto LAB_5cdb3d60;
  while( true ) {
    param_1 = param_1 + 1;
    dVar3 = (double)(cVar4 + -0x30) / dVar2;
    dVar2 = dVar2 * _DAT_5ce12cb8;
    *param_2 = dVar3 + *param_2;
    cVar4 = *param_1;
    if (cVar4 < '0') break;
LAB_5cdb3d33:
    if ('9' < cVar4) break;
  }
LAB_5cdb3d60:
  dVar2 = (double)((ulonglong)uStack_c << 0x20) * *param_2;
  *param_2 = dVar2;
  if ((double)((ulonglong)uStack_c << 0x20) < _DAT_5ce12bf0) {
    *param_2 = dVar2 - _DAT_5ce12d30;
    return (int)*param_1;
  }
  *param_2 = dVar2 + _DAT_5ce12d30;
LAB_5cdb3d98:
  return (int)*param_1;
}


