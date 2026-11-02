/* Module: vegas30.exe
   Function: FUN_004e7ee0
   Address: 004e7ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e7ee0(undefined4 *param_1)

{
  LONG *pLVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG *pLVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = param_1;
  GetClientRect((HWND)*param_1,(LPRECT)(param_1 + 3));
  pLVar1 = param_1 + 0xf;
  *pLVar1 = ((LPRECT)(param_1 + 3))->left;
  param_1[0x10] = param_1[4];
  param_1[0x11] = param_1[5];
  param_1[0x12] = param_1[6];
  iVar3 = *pLVar1 + 1;
  *pLVar1 = iVar3;
  param_1[0x11] = param_1[0x11] + -1;
  param_1[0x10] = param_1[0x10] + 2;
  param_1[0x12] = param_1[0x12] + -1;
  if (param_1[0x6c] != 0) {
    iVar3 = param_1[2];
  }
  iVar5 = param_1[0x2f3] + -1;
  if (-1 < iVar5) {
    pLVar4 = param_1 + iVar5 * 0x14 + 0x73;
    param_1 = (undefined4 *)param_1[0x2f3];
    do {
      *pLVar4 = *pLVar1;
      pLVar4[1] = puVar2[0x10];
      pLVar4[2] = puVar2[0x11];
      pLVar4[3] = puVar2[0x12];
      iVar5 = pLVar4[2] - pLVar4[4];
      if (pLVar4[2] - pLVar4[4] < iVar3) {
        iVar5 = iVar3;
      }
      *pLVar4 = iVar5;
      iVar6 = iVar5 + -3;
      if (iVar5 + -3 < iVar3) {
        iVar6 = iVar3;
      }
      puVar2[0x11] = iVar6;
      pLVar4 = pLVar4 + -0x14;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
  }
  puVar2[0x13] = *pLVar1;
  puVar2[0x14] = puVar2[0x10];
  puVar2[0x15] = puVar2[0x11];
  puVar2[0x16] = puVar2[0x12];
  puVar2[0x13] = puVar2[2];
  InvalidateRect((HWND)*puVar2,(RECT *)0x0,0);
  return;
}


