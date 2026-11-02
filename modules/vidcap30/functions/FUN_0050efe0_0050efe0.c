/* Module: vidcap30.exe
   Function: FUN_0050efe0
   Address: 0050efe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050efe0(undefined4 *param_1,HWND param_2,int param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  
  param_1[2] = param_2;
  *param_1 = *(undefined4 *)(param_3 + 0x20);
  param_1[3] = *(undefined4 *)(param_3 + 8);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar3 = (uint)(param_2 == *(HWND *)(param_3 + 0xc));
  param_1[1] = uVar3 << 3 | param_1[1] & 0xfffffff7;
  if (uVar3 == 0) {
    param_1[4] = 0;
    pHVar1 = *(HWND *)(param_3 + 0xc);
    pHVar2 = GetParent(param_2);
    if (pHVar2 != pHVar1) {
      param_1[4] = pHVar1;
    }
  }
  else {
    param_1[4] = param_2;
  }
  fVar7 = (float10)_DAT_0059a1a0;
  param_1[0x22] = 0;
  fVar7 = (float10)log2(fVar7);
  param_1[5] = 0;
  param_1[0x1f] = 0x8000;
  param_1[0x21] = 0x7fff;
  param_1[0x23] = 0x3f000000;
  param_1[0x20] = 0;
  param_1[1] = param_1[1] & 0xfffffffb | 2;
  *(double *)(param_1 + 0x24) = (double)((float10)0.3010299956639812 * fVar7);
  _mbscpy((uchar *)(param_1 + 0x26),"%.1f");
  param_1[0x2a] = 1;
  param_1[0x2b] = 6;
  puVar6 = param_1 + 0x33;
  for (iVar4 = 0x36; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar5 = (*(uint *)(param_3 + 0x20) ^ param_1[1]) & 1 ^ param_1[1];
  param_1[1] = uVar5;
  uVar3 = (*(uint *)(param_3 + 0x20) >> 0xc & 1) << 6;
  param_1[1] = uVar3 | uVar5 & 0xffffffbf;
  param_1[1] = (*(uint *)(param_3 + 0x20) >> 0xd & 1) << 7 | uVar3 | uVar5 & 0xfffff73f;
  uVar3 = FUN_0050f160(param_1);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[1] = (uVar3 & 1) << 4 | param_1[1] & 0xffffffef;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  DAT_005b8050 = DAT_005b8050 + 1;
  if (DAT_005b805c == (HDC)0x0) {
    DAT_005b805c = CreateCompatibleDC((HDC)0x0);
    SetBkMode(DAT_005b805c,1);
  }
  return 1;
}


