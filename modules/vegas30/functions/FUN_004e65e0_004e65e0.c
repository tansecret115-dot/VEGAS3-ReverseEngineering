/* Module: vegas30.exe
   Function: FUN_004e65e0
   Address: 004e65e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e65e0(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  RECT local_10;
  
  iVar5 = param_2;
  bVar2 = _DAT_006129c8 <= *(double *)(param_2 + 0x40);
  iVar1 = *(int *)(param_2 + 0x4c);
  iVar8 = *(int *)(param_2 + 0x54);
  iVar7 = param_3 * 4;
  if (param_5 == 0) {
    return;
  }
  iVar3 = ftol();
  iVar4 = ftol();
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(int *)(param_2 + 0x28) + -1;
    if (iVar4 <= param_2) goto LAB_004e667d;
  }
  iVar4 = param_2;
LAB_004e667d:
  param_2 = iVar4;
  param_3 = ftol();
  param_3 = param_3 + 3;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (*(int *)(iVar5 + 0x28) < param_3) {
    param_3 = *(int *)(iVar5 + 0x28);
  }
  iVar5 = ftol();
  psVar6 = (short *)(iVar8 + iVar7 + 2 + param_2 * iVar1 * 4);
  iVar7 = iVar5 + iVar3 + param_6;
  iVar8 = param_4 - (int)*psVar6 / param_5;
  MoveToEx(param_1,iVar7,iVar8,(LPPOINT)0x0);
  if (bVar2) {
    local_10.top = iVar8 + -1;
    local_10.left = iVar7 + -1;
    local_10.right = iVar7 + 2;
    local_10.bottom = iVar8 + 2;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  for (; param_2 <= param_3; param_2 = param_2 + 1) {
    iVar7 = ftol();
    iVar7 = iVar7 + iVar3 + param_6;
    iVar8 = param_4 - (int)*psVar6 / param_5;
    LineTo(param_1,iVar7,iVar8);
    if (bVar2) {
      local_10.top = iVar8 + -1;
      local_10.left = iVar7 + -1;
      local_10.right = iVar7 + 2;
      local_10.bottom = iVar8 + 2;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    }
    psVar6 = psVar6 + iVar1 * 2;
  }
  return;
}


