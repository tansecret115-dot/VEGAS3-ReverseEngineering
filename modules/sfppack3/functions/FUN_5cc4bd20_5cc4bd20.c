/* Module: sfppack3.dll
   Function: FUN_5cc4bd20
   Address: 5cc4bd20
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cc4bd20(undefined2 *param_1)

{
  void *this;
  int iVar1;
  CHAR *pCVar2;
  undefined2 local_15c [2];
  CHAR local_158 [36];
  CHAR local_134 [128];
  CHAR local_b4 [132];
  undefined2 *local_30;
  undefined4 local_28;
  int local_14 [5];
  
  this = DAT_5cc982c8;
  if (DAT_5cc982d0 != 0) {
    return false;
  }
  pCVar2 = local_158;
  for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2[0] = '\0';
    pCVar2[1] = '\0';
    pCVar2[2] = '\0';
    pCVar2[3] = '\0';
    pCVar2 = pCVar2 + 4;
  }
  local_30 = param_1;
  local_28 = 0x52a;
  FUN_5cc78d70(DAT_5cc982c8,local_158,0xb);
  FUN_5cc7eb60(local_134,0x80);
  FUN_5cc7eef0(local_b4,0x80);
  iVar1 = FUN_5cc7bb20(this,local_14,(int *)local_15c,1);
  if (iVar1 < 0) goto switchD_5cc4bde3_default;
  *param_1 = local_15c[0];
  if (DAT_5cc982d4 != 0) {
switchD_5cc4bde3_caseD_4e12c:
    return true;
  }
  switch(iVar1) {
  case 0x4e12c:
  case 0x4e12d:
  case 0x4e12e:
  case 0x4e131:
  case 0x4e132:
    goto switchD_5cc4bde3_caseD_4e12c;
  case 0x4e12f:
    if (7 < local_14[0]) {
      return true;
    }
    break;
  case 0x4e130:
    if (*(int *)((int)this + 0x680) != 0) {
      return true;
    }
  }
switchD_5cc4bde3_default:
  DAT_5cc982d4 = 1;
  return *(int *)((int)this + 0x680) != 0;
}


