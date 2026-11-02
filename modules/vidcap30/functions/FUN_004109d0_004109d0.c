/* Module: vidcap30.exe
   Function: FUN_004109d0
   Address: 004109d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004109d0(undefined4 *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar4 = param_1;
  GetClientRect((HWND)*param_1,(LPRECT)(param_1 + 3));
  puVar6 = (undefined4 *)_SfGetUIFontSize_4(100);
  pLVar1 = param_1 + 0xf;
  param_1[7] = *puVar6;
  LVar3 = ((LPRECT)(param_1 + 3))->left;
  param_1[8] = puVar6[1];
  *pLVar1 = LVar3;
  param_1[0x10] = param_1[4];
  param_1[0x11] = param_1[5];
  param_1[0x12] = param_1[6];
  iVar7 = param_1[0x10];
  param_1[0x11] = param_1[0x11] + -2;
  *pLVar1 = *pLVar1 + 1;
  param_1[0x10] = iVar7 + 1;
  pLVar2 = param_1 + 0x13;
  param_1[0x12] = param_1[8] + 5 + iVar7 + 1;
  *pLVar2 = *pLVar1;
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  puVar6 = param_1 + 0x12;
  param_1 = (undefined4 *)0x3;
  puVar4[0x16] = *puVar6;
  *pLVar2 = puVar4[2];
  do {
    pLVar2 = puVar4 + (int)param_1 * 0x21 + 0x6f;
    *pLVar2 = *pLVar1;
    puVar4[(int)param_1 * 0x21 + 0x70] = puVar4[0x10];
    puVar4[(int)param_1 * 0x21 + 0x71] = puVar4[0x11];
    puVar4[(int)param_1 * 0x21 + 0x72] = puVar4[0x12];
    iVar7 = puVar4[(int)param_1 * 0x21 + 0x71] - puVar4[(int)param_1 * 0x21 + 0x73];
    if ((int)(puVar4[(int)param_1 * 0x21 + 0x71] - puVar4[(int)param_1 * 0x21 + 0x73]) < *pLVar1) {
      iVar7 = *pLVar1;
    }
    *pLVar2 = iVar7;
    puVar4[(int)param_1 * 0x21 + 0x70] = puVar4[(int)param_1 * 0x21 + 0x70] + 1;
    if (param_1 == (undefined4 *)0x3) {
      iVar7 = iVar7 + -7;
      iVar5 = *pLVar1;
      if (iVar7 < *pLVar1) {
LAB_00410abf:
        iVar7 = iVar5;
      }
    }
    else {
      iVar7 = iVar7 + -3;
      iVar5 = *pLVar1;
      if (iVar7 < *pLVar1) goto LAB_00410abf;
    }
    puVar4[0x11] = iVar7;
    FUN_00405f80(DAT_005ba4c0,*puVar4,*(undefined4 *)((int)param_1 * 4 + 0x5b2748),pLVar2);
    param_1 = (undefined4 *)((int)param_1 + -1);
    if ((int)param_1 < 0) {
      InvalidateRect((HWND)*puVar4,(RECT *)0x0,0);
      return;
    }
  } while( true );
}


