/* Module: mp3plug.dll
   Function: FUN_5f6ea570
   Address: 5f6ea570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ea570(void)

{
  bool bVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_EBP;
  int iVar6;
  int local_4c [4];
  int local_3c [2];
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_20;
  int local_14;
  
  iVar2 = in_EAX[1];
  if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 3)) || ((iVar2 == 4 || (iVar2 == 6)))) {
    unaff_EBP = (int *)&DAT_5f741598;
  }
  else if (iVar2 == 2) {
    unaff_EBP = (int *)&DAT_5f7415a8;
  }
  else if (iVar2 == 5) {
    unaff_EBP = (int *)&DAT_5f7415b8;
  }
  local_30 = in_EAX + 0x2a;
  local_3c[1] = *in_EAX;
  iVar2 = 0;
  local_20 = -4;
  local_34 = unaff_EBP;
  local_2c = in_EAX;
  do {
    iVar5 = 0;
    bVar1 = false;
    if (local_30 == (int *)0x0) {
      local_14 = -1;
      iVar6 = iVar2 + local_34[local_20 + 4];
      if (iVar2 < iVar6) {
        piVar3 = local_2c + iVar2;
        do {
          if (iVar5 < piVar3[3]) {
            iVar5 = piVar3[3];
          }
          piVar3 = piVar3 + 1;
        } while ((int)piVar3 < (int)(local_2c + iVar6));
        bVar1 = false;
        local_14 = -1;
      }
    }
    else {
      iVar6 = iVar2 + local_34[local_20 + 4];
      local_14 = -1;
      if (iVar2 < iVar6) {
        bVar1 = false;
        piVar3 = local_2c + iVar2;
        do {
          iVar2 = piVar3[0x2a];
          if (iVar2 == 0) {
            if (iVar5 < piVar3[3]) {
              iVar5 = piVar3[3];
            }
          }
          else if (iVar2 == 1) {
            if (local_14 < piVar3[3]) {
              local_14 = piVar3[3];
            }
          }
          else if (iVar2 == 2) {
            bVar1 = true;
          }
          piVar3 = piVar3 + 1;
        } while ((int)piVar3 < (int)(local_2c + iVar6));
      }
    }
    iVar2 = iVar6;
    iVar6 = 0;
    local_14 = local_14 + 1;
    if (local_14 < iVar5) {
      local_14 = iVar5;
    }
    if (bVar1) {
      if (local_3c[1] == 0) {
        if (local_14 < 7) {
          local_14 = 7;
        }
      }
      else if (local_14 == 0) {
        local_14 = 1;
      }
    }
    for (; 7 < local_14; local_14 = local_14 >> 4) {
      iVar6 = iVar6 + 4;
    }
    if (local_14 < 2) {
      if (0 < local_14) {
        iVar6 = iVar6 + 1;
      }
    }
    else {
      if (local_14 < 4) {
        iVar5 = 2;
      }
      else {
        iVar5 = 3;
      }
      iVar6 = iVar6 + iVar5;
    }
    iVar5 = local_20 + 1;
    local_3c[local_20] = iVar6;
    local_20 = iVar5;
  } while (iVar5 != 0);
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar4 = 0;
    iVar6 = local_34[iVar5];
    if (0 < iVar6) {
      do {
        if (local_2c[iVar2 + 0x2a] == 2) {
          local_2c[iVar2 + 3] = 7;
          iVar6 = local_34[iVar5];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar4 < iVar6);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  local_2c[0x82] = *local_34;
  local_2c[0x83] = local_34[1];
  local_2c[0x84] = local_34[2];
  local_2c[0x85] = local_34[3];
  if (local_4c[1] < local_4c[0]) {
    local_4c[1] = local_4c[0];
  }
  if (local_4c[3] < local_4c[2]) {
    local_4c[3] = local_4c[2];
  }
  iVar2 = *(int *)(&DAT_5f741548 + local_4c[3] * 4 + local_4c[1] * 0x10);
  iVar6 = 0;
  local_2c[0x81] = iVar2;
  iVar5 = *(int *)(&DAT_5f7414c8 + iVar2 * 4);
  local_2c[0x86] = iVar5;
  local_2c[0x87] = iVar5;
  iVar2 = *(int *)(&DAT_5f741508 + iVar2 * 4);
  local_2c[0x89] = iVar2;
  local_2c[0x88] = iVar2;
  for (piVar3 = local_2c;
      (int)piVar3 < (int)(((int)(local_2c + 4) - (int)local_2c & 0xfffffff8U) + (int)local_2c);
      piVar3 = piVar3 + 2) {
    iVar6 = iVar6 + piVar3[0x86] * piVar3[0x82] + piVar3[0x87] * piVar3[0x83];
  }
  for (; (int)piVar3 < (int)(local_2c + 4); piVar3 = piVar3 + 1) {
    iVar6 = iVar6 + piVar3[0x86] * piVar3[0x82];
  }
  local_2c[0x8a] = iVar6;
  return;
}


