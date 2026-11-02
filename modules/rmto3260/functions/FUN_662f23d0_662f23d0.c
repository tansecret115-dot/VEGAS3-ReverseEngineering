/* Module: rmto3260.dll
   Function: FUN_662f23d0
   Address: 662f23d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_662f23d0(char *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  double dVar13;
  
  cVar2 = *param_1;
  bVar1 = true;
  pcVar11 = param_1;
  if (cVar2 == '(') {
LAB_662f23ea:
    if (bVar1) {
      iVar9 = 0;
      pcVar6 = pcVar11;
      while (cVar2 != '\0') {
        if (cVar2 == '(') {
          iVar9 = iVar9 + 1;
        }
        if (cVar2 == ')') {
          iVar9 = iVar9 + -1;
          if ((pcVar6[1] == '\0') && (iVar9 == 0)) {
            pcVar11 = pcVar11 + 1;
            uVar7 = 0xffffffff;
            pcVar6 = pcVar11;
            goto code_r0x662f2421;
          }
          if (iVar9 == 0) {
            bVar1 = false;
            break;
          }
        }
        pcVar12 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar12;
      }
      goto LAB_662f2439;
    }
  }
LAB_662f243f:
  cVar2 = *pcVar11;
  iVar9 = 0;
  pcVar6 = pcVar11;
  cVar5 = cVar2;
  if (cVar2 != '\0') {
LAB_662f244e:
    if (cVar5 == '(') {
      iVar9 = iVar9 + 1;
    }
    if (cVar5 == ')') {
      iVar9 = iVar9 + -1;
    }
    if ((iVar9 != 0) ||
       (((((iVar10 = 1, cVar5 != '>' && (cVar5 != '<')) && (cVar5 != '=')) &&
         ((cVar5 != '!' && (cVar5 != '&')))) && (pcVar11 = param_1, cVar5 != '|'))))
    goto LAB_662f249c;
    puVar3 = operator_new(0x10);
    *puVar3 = 3;
    switch(*pcVar6) {
    case '!':
      if (pcVar6[1] != '=') goto switchD_662f262c_caseD_22;
      puVar3[3] = 5;
      break;
    default:
      goto switchD_662f262c_caseD_22;
    case '&':
      if (pcVar6[1] != '&') goto switchD_662f262c_caseD_22;
      puVar3[3] = 6;
      break;
    case '<':
      if (pcVar6[1] != '=') {
        puVar3[3] = 1;
        goto switchD_662f262c_caseD_22;
      }
      puVar3[3] = 3;
      break;
    case '=':
      if (pcVar6[1] != '=') goto switchD_662f262c_caseD_22;
      puVar3[3] = 4;
      break;
    case '>':
      if (pcVar6[1] == '=') {
        iVar10 = 2;
        puVar3[3] = 2;
      }
      else {
        puVar3[3] = 0;
      }
      goto switchD_662f262c_caseD_22;
    case '|':
      if (pcVar6[1] != '|') goto switchD_662f262c_caseD_22;
      puVar3[3] = 7;
    }
    iVar10 = 2;
switchD_662f262c_caseD_22:
    *pcVar6 = '\0';
    puVar4 = FUN_662f23d0(param_1,param_2);
    puVar3[1] = puVar4;
    puVar4 = FUN_662f23d0(pcVar6 + iVar10,param_2);
    puVar3[2] = puVar4;
    return puVar3;
  }
LAB_662f24a7:
  iVar9 = 0;
  cVar5 = cVar2;
  pcVar6 = pcVar11;
  while( true ) {
    if (cVar5 == '\0') {
      iVar9 = 0;
      if (cVar2 == '\0') {
        return (undefined4 *)0x0;
      }
      while( true ) {
        if (cVar2 == '(') {
          iVar9 = iVar9 + 1;
        }
        if (cVar2 == ')') {
          iVar9 = iVar9 + -1;
        }
        if ((iVar9 == 0) &&
           (((((cVar2 == '0' || (cVar2 == '1')) || (cVar2 == '2')) ||
             (((cVar2 == '3' || (cVar2 == '4')) ||
              ((cVar2 == '5' || ((cVar2 == '6' || (cVar2 == '7')))))))) ||
            ((cVar2 == '8' || (cVar2 == '9')))))) break;
        cVar2 = pcVar11[1];
        pcVar11 = pcVar11 + 1;
        if (cVar2 == '\0') {
          return (undefined4 *)0x0;
        }
      }
      pcVar6 = strchr(pcVar11,0x2e);
      if (pcVar6 != (char *)0x0) {
        puVar3 = operator_new(0x10);
        *puVar3 = 2;
        dVar13 = atof(pcVar11);
        puVar3[3] = (float)dVar13;
        puVar3[1] = 0;
        puVar3[2] = 0;
        return puVar3;
      }
      puVar3 = operator_new(0x10);
      *puVar3 = 1;
      iVar9 = atoi(pcVar11);
      puVar3[3] = iVar9;
      puVar3[1] = 0;
      puVar3[2] = 0;
      return puVar3;
    }
    if (cVar5 == '(') {
      iVar9 = iVar9 + 1;
    }
    if (cVar5 == ')') {
      iVar9 = iVar9 + -1;
    }
    if ((iVar9 == 0) && (cVar5 == '$')) break;
    cVar5 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
  }
  puVar3 = operator_new(0x10);
  uVar7 = 0xffffffff;
  *puVar3 = 0;
  pcVar11 = pcVar6;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  pcVar11 = operator_new(~uVar7 - 1);
  uVar7 = 0xffffffff;
  puVar3[3] = pcVar11;
  pcVar12 = pcVar6;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar2 != '\0');
  pcVar6 = pcVar6 + 1;
  for (uVar8 = ~uVar7 - 1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = ~uVar7 - 1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar11 = pcVar11 + 1;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *param_2 = *param_2 + 1;
  return puVar3;
  while( true ) {
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar2 == '\0') break;
code_r0x662f2421:
    if (uVar7 == 0) break;
  }
  bVar1 = true;
  pcVar11[~uVar7 - 2] = '\0';
  param_1 = pcVar11;
LAB_662f2439:
  cVar2 = *pcVar11;
  if (cVar2 != '(') goto LAB_662f243f;
  goto LAB_662f23ea;
LAB_662f249c:
  pcVar12 = pcVar6 + 1;
  pcVar6 = pcVar6 + 1;
  cVar5 = *pcVar12;
  if (*pcVar12 == '\0') goto LAB_662f24a7;
  goto LAB_662f244e;
}


