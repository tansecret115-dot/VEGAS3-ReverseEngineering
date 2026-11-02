/* Module: rmbe3260.dll
   Function: FUN_6602a1f0
   Address: 6602a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_6602a1f0(int param_1,char *param_2,byte param_3)

{
  char cVar1;
  float10 fVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  double dVar12;
  int local_8;
  
  uVar5 = 0xffffffff;
  pcVar9 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_8 = 1;
  pcVar3 = operator_new(~uVar5);
  pcVar9 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    uVar5 = 0xffffffff;
    do {
      pcVar9 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar9 + -uVar5;
    pcVar10 = pcVar3;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; pcVar9 = pcVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  do {
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
      operator_delete(pcVar3);
      return (0x12 < local_8) - 1 & 0x80004005;
    }
    iVar4 = isspace((int)*pcVar9);
    while (iVar4 != 0) {
      pcVar8 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
      iVar4 = isspace((int)*pcVar8);
    }
    param_2 = strchr(pcVar9,0x3b);
    if (param_2 != (char *)0x0) {
      *param_2 = '\0';
      param_2 = param_2 + 1;
    }
    switch(local_8) {
    case 1:
      iVar4 = atoi(pcVar9);
      *(int *)(param_1 + 4) = iVar4;
      break;
    case 2:
      FUN_6605b970((void *)(param_1 + 8),pcVar9);
      break;
    case 3:
      if ((param_3 & 2) != 0) {
        dVar12 = atof(pcVar9);
        fVar11 = (float10)dVar12;
        fVar2 = (float10)_DAT_66067734;
        *(float *)(param_1 + 0x14) = (float)dVar12;
        if (fVar11 < fVar2) goto LAB_6602a4ce;
        *(float *)(param_1 + 0x18) = (float)(fVar11 + fVar11);
      }
      break;
    case 4:
      if ((param_3 & 2) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x2c) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 5:
      if ((param_3 & 2) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x30) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 6:
      if ((param_3 & 2) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x34) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 7:
      if ((param_3 & 2) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x38) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 8:
      if ((param_3 & 1) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x3c) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 9:
      if ((param_3 & 1) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x40) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 10:
      if ((param_3 & 1) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x44) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 0xb:
      if ((param_3 & 1) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x48) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 0xc:
      if ((param_3 & 4) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x4c) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 0xd:
      if ((param_3 & 4) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x50) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 0xe:
      if ((param_3 & 4) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x54) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 0xf:
      if ((param_3 & 4) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x58) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 0x10:
      if ((param_3 & 2) != 0) {
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
        (**(code **)(*piVar7 + 0x18))(piVar7,pcVar9);
      }
      break;
    case 0x11:
      if ((param_3 & 2) != 0) {
        dVar12 = atof(pcVar9);
        (**(code **)(*(int *)(*(int *)(param_1 + 0x28) + 0x10) + 0x20))
                  (*(int *)(param_1 + 0x28) + 0x10,(float)dVar12);
      }
      break;
    case 0x12:
      iVar4 = atoi(pcVar9);
      *(int *)(param_1 + 0x1c) = iVar4;
      break;
    case 0x13:
      if ((param_3 & 2) != 0) {
        iVar4 = atoi(pcVar9);
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
        (**(code **)(*piVar7 + 0x28))(piVar7,iVar4);
      }
      break;
    case 0x14:
      if ((param_3 & 2) != 0) {
        dVar12 = atof(pcVar9);
        fVar11 = (float10)dVar12;
LAB_6602a4ce:
        *(float *)(param_1 + 0x18) = (float)fVar11;
      }
      break;
    case 0x15:
      if ((param_3 & 2) != 0) {
        iVar4 = atoi(pcVar9);
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
        (**(code **)(*piVar7 + 0x30))(piVar7,iVar4);
      }
      break;
    case 0x16:
      if ((param_3 & 2) != 0) {
        iVar4 = atoi(pcVar9);
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
        (**(code **)(*piVar7 + 0x38))(piVar7,iVar4);
      }
      break;
    case 0x17:
      if ((param_3 & 2) != 0) {
        atoi(pcVar9);
      }
      break;
    case 0x18:
      if ((param_3 & 2) != 0) {
        iVar4 = atoi(pcVar9);
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
        (**(code **)(*piVar7 + 0x40))(piVar7,iVar4);
      }
    }
    local_8 = local_8 + 1;
    pcVar9 = param_2;
  } while( true );
}


