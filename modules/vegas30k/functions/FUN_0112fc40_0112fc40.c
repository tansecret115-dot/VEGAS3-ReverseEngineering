/* Module: vegas30k.dll
   Function: FUN_0112fc40
   Address: 0112fc40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0112fc40(HWND param_1,undefined4 param_2,int param_3,LPCSTR param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  CHAR *pCVar6;
  LPCSTR pCVar7;
  
  piVar2 = (int *)FUN_0112eb70(param_1,param_2);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if (iVar3 + -1 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)piVar2[2];
  }
  if (iVar3 == 0) {
    return -100;
  }
  if (param_3 == -0x10000) {
    piVar2 = (int *)GetWindowLongA(param_1,-0x15);
  }
  else {
    piVar2 = (int *)FUN_0112eb70(param_1,param_3);
  }
  iVar3 = *(int *)(iVar3 + 4);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if ((iVar3 < 0) || (iVar5 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar2[2] + iVar3 * 4);
  }
  if (iVar3 == 0) {
    return -100;
  }
  uVar1 = *(ushort *)(iVar3 + 0x10);
  pCVar6 = (CHAR *)(iVar3 + 0x14);
  pCVar7 = param_4;
  for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar7 = *pCVar6;
    pCVar6 = pCVar6 + 1;
    pCVar7 = pCVar7 + 1;
  }
  FUN_010527d0(iVar3,param_4);
  iVar3 = lstrlenA(param_4);
  return iVar3;
}


