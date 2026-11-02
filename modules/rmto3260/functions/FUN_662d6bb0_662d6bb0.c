/* Module: rmto3260.dll
   Function: FUN_662d6bb0
   Address: 662d6bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d6bb0(int *param_1,undefined4 *param_2,undefined1 *param_3,uint param_4,
                undefined4 *param_5)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int local_8;
  
  bVar2 = false;
  local_8 = 0;
  if (param_1[4] == 0) {
    pvVar3 = operator_new(0x200);
    param_1[4] = (int)pvVar3;
    if (pvVar3 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
  }
  do {
    if (local_8 < 0) break;
    pcVar4 = fgets((char *)param_1[4],param_4 - 1,(FILE *)param_1[1]);
    if (pcVar4 == (char *)0x0) {
      bVar2 = true;
      local_8 = -0x7ffbfc36;
    }
    pcVar4 = (char *)param_1[4];
    cVar1 = *pcVar4;
    while ((cVar1 != '\0' && (iVar5 = isspace((int)cVar1), iVar5 != 0))) {
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    }
    if ((*pcVar4 == '\0') || (*pcVar4 == '#')) goto switchD_662d6c8c_caseD_62;
    pcVar4 = strtok(pcVar4,&DAT_6630ad88);
    if (pcVar4 == (char *)0x0) {
      local_8 = -0x7ffbfc32;
      break;
    }
    if (local_8 < 0) goto switchD_662d6c8c_caseD_62;
    iVar5 = tolower((int)*pcVar4);
    switch((char)iVar5) {
    case 'a':
      local_8 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,param_5,1);
      break;
    default:
      goto switchD_662d6c8c_caseD_62;
    case 'c':
      iVar5 = *param_1;
      uVar6 = 2;
      goto LAB_662d6cee;
    case 'i':
      iVar5 = *param_1;
      uVar6 = 0;
LAB_662d6cee:
      local_8 = (**(code **)(iVar5 + 0x20))(param_1,param_2,param_3,param_4,param_5,uVar6);
      break;
    case 't':
      local_8 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4,param_5);
      break;
    case 'u':
      local_8 = (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4,param_5);
    }
    bVar2 = true;
    *(undefined4 *)((int)param_1 + 0x22) = 1;
switchD_662d6c8c_caseD_62:
  } while (!bVar2);
  if (((-1 < local_8) || (local_8 == -0x7ffbfc36)) && (*(int *)((int)param_1 + 0x22) == 0)) {
    if (local_8 < 0) {
      local_8 = 0;
    }
    if (param_4 < 0xe) {
      local_8 = -0x7ffbfff3;
    }
    if (-1 < local_8) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 2;
      param_3[0xc] = 2;
      param_3[0xd] = 0;
      *param_5 = 0xe;
      *param_2 = 0;
      *(undefined2 *)(param_2 + 1) = 0;
      *(undefined2 *)((int)param_2 + 6) = 0;
      *(undefined2 *)(param_2 + 2) = 2;
      *(undefined4 *)((int)param_1 + 0x22) = 1;
    }
  }
  return local_8;
}


