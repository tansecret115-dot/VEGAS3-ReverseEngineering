/* Module: tokr3260.dll
   Function: FUN_68052d30
   Address: 68052d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68052d30(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(param_3 + 0x68);
  puVar2 = (undefined4 *)(param_3 + 0x70);
  if ((((((param_1 != 0x21) && (param_1 != 0x2f)) && (param_1 != 0x42)) &&
       ((param_1 != 0x5e && (param_1 != 0x69)))) &&
      ((param_1 != 0x84 && ((param_1 != 0x92 && (param_1 != 0xb0)))))) &&
     ((param_1 != 0xbc &&
      ((((param_1 != 0xd2 && (param_1 != 0x108)) && (param_1 != 0x124)) && (param_1 != 0x160)))))) {
    return 0xfffffffd;
  }
  if (param_1 < 0x30) {
    if (param_1 != 0x2f) {
      if (param_1 != 0x21) goto switchD_68052f56_caseD_6a;
      if (param_2 != 0) {
        if (param_2 == 2) {
          *(undefined4 *)(param_3 + 0xc) = 2;
          *piVar1 = 0x30;
          *(undefined4 *)(param_3 + 0x6c) = 0x30;
          *puVar2 = 0xc1c;
          *(undefined4 *)(param_3 + 0x74) = 0xc1c;
          goto switchD_68052f56_caseD_6a;
        }
        if (param_2 != 0x12) goto switchD_68052f56_caseD_6a;
      }
      *(undefined4 *)(param_3 + 0xc) = 0x12;
      *piVar1 = 0x5b;
      *(undefined4 *)(param_3 + 0x6c) = 5;
      *puVar2 = 0x157c;
      *(undefined4 *)(param_3 + 0x74) = 100;
      goto switchD_68052f56_caseD_6a;
    }
    if (param_2 != 0) {
      if (param_2 == 2) {
        *(undefined4 *)(param_3 + 0xc) = 2;
        *piVar1 = 0x44;
        *(undefined4 *)(param_3 + 0x6c) = 0x44;
        *puVar2 = 0x157c;
        *(undefined4 *)(param_3 + 0x74) = 0x157c;
        goto switchD_68052f56_caseD_6a;
      }
      if (param_2 != 0x12) goto switchD_68052f56_caseD_6a;
    }
    *(undefined4 *)(param_3 + 0xc) = 0x12;
    *piVar1 = 0x83;
    *(undefined4 *)(param_3 + 0x6c) = 5;
    *puVar2 = 0x1a90;
    *(undefined4 *)(param_3 + 0x74) = 100;
    goto switchD_68052f56_caseD_6a;
  }
  if (param_1 < 0x5f) {
    if (param_1 != 0x5e) {
      if (param_1 != 0x42) goto switchD_68052f56_caseD_6a;
      if (param_2 != 0) {
        if (param_2 == 2) {
          *(undefined4 *)(param_3 + 0xc) = 2;
          *piVar1 = 0x60;
          *(undefined4 *)(param_3 + 0x6c) = 0x60;
          *puVar2 = 0x2008;
          *(undefined4 *)(param_3 + 0x74) = 0x2008;
          goto switchD_68052f56_caseD_6a;
        }
        if (param_2 != 0x12) goto switchD_68052f56_caseD_6a;
      }
      *(undefined4 *)(param_3 + 0xc) = 0x12;
      *piVar1 = 0x92;
      *(undefined4 *)(param_3 + 0x6c) = 0x2e;
      *puVar2 = 0x3070;
      *(undefined4 *)(param_3 + 0x74) = 0xc1c;
      goto switchD_68052f56_caseD_6a;
    }
    if (param_2 != 0) {
      if (param_2 == 2) {
        *(undefined4 *)(param_3 + 0xc) = 2;
        *piVar1 = 0x88;
        *(undefined4 *)(param_3 + 0x6c) = 0x88;
        *puVar2 = 11000;
        *(undefined4 *)(param_3 + 0x74) = 11000;
        goto switchD_68052f56_caseD_6a;
      }
      if (param_2 != 0x12) goto switchD_68052f56_caseD_6a;
    }
    *(undefined4 *)(param_3 + 0xc) = 0x12;
    *piVar1 = 0xba;
    *(undefined4 *)(param_3 + 0x6c) = 0x56;
    *puVar2 = 0x3afc;
    *(undefined4 *)(param_3 + 0x74) = 0x1d4c;
    goto switchD_68052f56_caseD_6a;
  }
  switch(param_1) {
  case 0x69:
    if ((param_2 == 0) || (param_2 == 2)) {
      *(undefined4 *)(param_3 + 0xc) = 2;
      *piVar1 = 0x98;
      *(undefined4 *)(param_3 + 0x6c) = 0x98;
      *puVar2 = 0x3584;
      *(undefined4 *)(param_3 + 0x74) = 0x3584;
    }
    else if (param_2 == 0x12) {
      *(undefined4 *)(param_3 + 0xc) = 0x12;
      *piVar1 = 0xba;
      *(undefined4 *)(param_3 + 0x6c) = 0x76;
      *puVar2 = 0x3afc;
      *(undefined4 *)(param_3 + 0x74) = 0x283c;
    }
    break;
  case 0x84:
    if ((param_2 == 0) || (param_2 == 2)) {
      *(undefined4 *)(param_3 + 0xc) = 2;
      *piVar1 = 0xc0;
      *(undefined4 *)(param_3 + 0x6c) = 0xc0;
      *puVar2 = 0x4074;
      *(undefined4 *)(param_3 + 0x74) = 0x4074;
    }
    else if (param_2 == 0x12) {
      *(undefined4 *)(param_3 + 0xc) = 0x12;
      *piVar1 = 0xd4;
      *(undefined4 *)(param_3 + 0x6c) = 0xac;
      *puVar2 = 0x4074;
      *(undefined4 *)(param_3 + 0x74) = 0x3584;
    }
    break;
  case 0x92:
    if ((param_2 == 0) || (param_2 == 2)) {
      *(undefined4 *)(param_3 + 0xc) = 2;
      *piVar1 = 0xd4;
      *(undefined4 *)(param_3 + 0x6c) = 0xd4;
      *puVar2 = 0x4074;
      *(undefined4 *)(param_3 + 0x74) = 0x4074;
    }
    else if (param_2 == 0x12) {
      *(undefined4 *)(param_3 + 0xc) = 0x12;
      *piVar1 = 0xfc;
      *(undefined4 *)(param_3 + 0x6c) = 0xac;
      *puVar2 = 0x4b00;
      *(undefined4 *)(param_3 + 0x74) = 0x3584;
    }
    break;
  case 0xb0:
    if ((param_2 == 0) || (param_2 == 2)) {
      *(undefined4 *)(param_3 + 0xc) = 2;
      *piVar1 = 0x100;
      *(undefined4 *)(param_3 + 0x6c) = 0x100;
      *puVar2 = 0x4b00;
      *(undefined4 *)(param_3 + 0x74) = 0x4b00;
    }
    else if (param_2 == 0x12) {
      *(undefined4 *)(param_3 + 0xc) = 0x12;
      *piVar1 = 300;
      *(undefined4 *)(param_3 + 0x6c) = 0xd4;
      *puVar2 = 22000;
      *(undefined4 *)(param_3 + 0x74) = 0x4074;
    }
    break;
  case 0xbc:
    if ((param_2 == 0) || (param_2 == 2)) {
      *(undefined4 *)(param_3 + 0xc) = 2;
      *piVar1 = 0x110;
      *(undefined4 *)(param_3 + 0x6c) = 0x110;
      *puVar2 = 0x4b00;
      *(undefined4 *)(param_3 + 0x74) = 0x4b00;
    }
    else if (param_2 == 0x12) {
      *(undefined4 *)(param_3 + 0xc) = 0x12;
      *piVar1 = 0x14c;
      *(undefined4 *)(param_3 + 0x6c) = 0xd4;
      *puVar2 = 22000;
      *(undefined4 *)(param_3 + 0x74) = 0x4074;
    }
    break;
  case 0xd2:
    if ((param_2 != 0) && (param_2 != 2)) {
      if (param_2 == 0x12) {
        *(undefined4 *)(param_3 + 0xc) = 0x12;
        *piVar1 = 0x18c;
        *(undefined4 *)(param_3 + 0x6c) = 0xd4;
        *puVar2 = 22000;
        *(undefined4 *)(param_3 + 0x74) = 0x4074;
      }
      break;
    }
    *(undefined4 *)(param_3 + 0xc) = 2;
    *piVar1 = 0x130;
    *(undefined4 *)(param_3 + 0x6c) = 0x130;
    goto LAB_6805325c;
  case 0x108:
    if ((param_2 != 0) && (param_2 != 2)) {
      if (param_2 == 0x12) {
        *(undefined4 *)(param_3 + 0xc) = 0x12;
        *piVar1 = 0x22c;
        *(undefined4 *)(param_3 + 0x6c) = 0xd4;
        *puVar2 = 22000;
        *(undefined4 *)(param_3 + 0x74) = 0x4074;
      }
      break;
    }
    *(undefined4 *)(param_3 + 0xc) = 2;
    *piVar1 = 0x180;
    *(undefined4 *)(param_3 + 0x6c) = 0x180;
    goto LAB_6805325c;
  case 0x124:
    if ((param_2 != 0) && (param_2 != 2)) {
      if (param_2 == 0x12) {
        *(undefined4 *)(param_3 + 0xc) = 0x12;
        *piVar1 = 0x27c;
        *(undefined4 *)(param_3 + 0x6c) = 0xd4;
        *puVar2 = 22000;
        *(undefined4 *)(param_3 + 0x74) = 0x4074;
      }
      break;
    }
    *(undefined4 *)(param_3 + 0xc) = 2;
    *piVar1 = 0x1a8;
    *(undefined4 *)(param_3 + 0x6c) = 0x1a8;
    goto LAB_6805325c;
  case 0x160:
    if ((param_2 != 0) && (param_2 != 2)) {
      if (param_2 == 0x12) {
        *(undefined4 *)(param_3 + 0xc) = 0x12;
        *piVar1 = 0x32c;
        *(undefined4 *)(param_3 + 0x6c) = 0xd4;
        *puVar2 = 22000;
        *(undefined4 *)(param_3 + 0x74) = 0x4074;
      }
      break;
    }
    *(undefined4 *)(param_3 + 0xc) = 2;
    *piVar1 = 0x200;
    *(undefined4 *)(param_3 + 0x6c) = 0x200;
LAB_6805325c:
    *puVar2 = 22000;
    *(undefined4 *)(param_3 + 0x74) = 22000;
  }
switchD_68052f56_caseD_6a:
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar3 == 0x12) {
    iVar5 = *(int *)(param_3 + 0x6c) + *piVar1;
  }
  else {
    iVar5 = *piVar1;
  }
  iVar4 = FUN_68052000(2,iVar3,0xac44,1,0,piVar1,(int)puVar2,1,1,param_3);
  if (iVar4 == -999999) {
    return 0xffffffff;
  }
  if (iVar3 == 0x12) {
    *(int *)(param_3 + 0x60) = *(int *)(param_3 + 0x14) * iVar5;
  }
  else {
    *(int *)(param_3 + 0x60) = *(int *)(param_3 + 0x14) * iVar5 * 2;
  }
  *(undefined4 *)(param_3 + 0x78) = 0x400;
  *(undefined4 *)(param_3 + 0x7c) = 0x400;
  *(undefined4 *)(param_3 + 0x80) = 0x400;
  return 0;
}


