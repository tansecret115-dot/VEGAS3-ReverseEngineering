/* Module: vidcap30.exe
   Function: FUN_00461560
   Address: 00461560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00461560(int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  int local_c;
  int local_8;
  
  piVar2 = param_3;
  bVar8 = param_2 != 120000;
  local_8 = 0;
  local_c = 0;
  piVar7 = param_3;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  bVar1 = true;
  param_2 = param_1;
  param_1 = 2;
  do {
    iVar4 = 0;
    if (bVar8 != 0xfffffffb) {
      pcVar6 = (char *)(param_2 + 0xf3);
      do {
        if (local_c < 2) {
          pcVar3 = pcVar6 + 0xcd;
          if (!bVar1) {
            pcVar3 = pcVar6;
          }
          if ((piVar2[4] == 0) && (*pcVar3 == '`')) {
            piVar2[4] = *(int *)(pcVar3 + 1);
            local_c = local_c + 1;
          }
          if ((piVar2[5] == 0) && (pcVar3[5] == 'a')) {
            piVar2[5] = *(int *)(pcVar3 + 6);
            local_c = local_c + 1;
          }
        }
        else if (local_8 == 4) break;
        if (bVar1) {
          pcVar3 = pcVar6 + 0xfed;
          pcVar5 = pcVar6 + 0x14ed;
        }
        else {
          pcVar3 = pcVar6 + 0xed;
          pcVar5 = pcVar6 + 0x5ed;
        }
        if ((*param_3 == 0) && (pcVar3[3] == 'P')) {
          *param_3 = *(int *)(pcVar3 + 4);
          local_8 = local_8 + 1;
        }
        if ((param_3[1] == 0) && (pcVar5[3] == 'Q')) {
          local_8 = local_8 + 1;
          param_3[1] = *(int *)(pcVar5 + 4);
        }
        bVar1 = !bVar1;
        param_2 = param_2 + 12000;
        pcVar6 = pcVar6 + 12000;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(bVar8 + 5));
    }
    param_3 = param_3 + 2;
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      if (param_4 != (int *)0x0) {
        if (local_c < 2) {
          if (piVar2[4] == 0) {
            piVar2[4] = param_4[4];
          }
          if (piVar2[5] == 0) {
            piVar2[5] = param_4[5];
          }
        }
        if (local_8 < 4) {
          if (*piVar2 == 0) {
            *piVar2 = *param_4;
          }
          if (piVar2[2] == 0) {
            piVar2[2] = param_4[2];
          }
          if (piVar2[1] == 0) {
            piVar2[1] = param_4[1];
          }
          if (piVar2[3] == 0) {
            piVar2[3] = param_4[3];
          }
        }
      }
      return;
    }
  } while( true );
}


