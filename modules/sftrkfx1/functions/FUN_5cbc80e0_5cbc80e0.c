/* Module: sftrkfx1.dll
   Function: FUN_5cbc80e0
   Address: 5cbc80e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cbc80e0(undefined4 *param_1,HWND param_2,int param_3)

{
  HWND pHVar1;
  bool bVar2;
  HWND pHVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  
  param_1[2] = param_2;
  *param_1 = *(undefined4 *)(param_3 + 0x20);
  param_1[3] = *(undefined4 *)(param_3 + 8);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar4 = (uint)(param_2 == *(HWND *)(param_3 + 0xc));
  param_1[1] = uVar4 << 3 | param_1[1] & 0xfffffff7;
  if (uVar4 == 0) {
    param_1[4] = 0;
    pHVar1 = *(HWND *)(param_3 + 0xc);
    pHVar3 = GetParent(param_2);
    if (pHVar3 != pHVar1) {
      param_1[4] = pHVar1;
    }
  }
  else {
    param_1[4] = param_2;
  }
  fVar8 = (float10)_DAT_5cc04270;
  param_1[0x22] = 0;
  fVar8 = (float10)log2(fVar8);
  param_1[5] = 0;
  param_1[0x1f] = 0x8000;
  param_1[0x21] = 0x7fff;
  param_1[0x23] = 0x3f000000;
  param_1[0x20] = 0;
  param_1[1] = param_1[1] & 0xfffffffb | 2;
  *(double *)(param_1 + 0x24) = (double)((float10)0.3010299956639812 * fVar8);
  _mbscpy((uchar *)(param_1 + 0x26),"%.1f");
  param_1[0x2a] = 1;
  param_1[0x2b] = 6;
  puVar7 = param_1 + 0x33;
  for (iVar5 = 0x36; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar6 = (*(uint *)(param_3 + 0x20) ^ param_1[1]) & 1 ^ param_1[1];
  param_1[1] = uVar6;
  uVar4 = (*(uint *)(param_3 + 0x20) >> 0xc & 1) << 6;
  param_1[1] = uVar4 | uVar6 & 0xffffffbf;
  param_1[1] = (*(uint *)(param_3 + 0x20) >> 0xd & 1) << 7 | uVar4 | uVar6 & 0xfffff73f;
  bVar2 = FUN_5cbc8260();
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[1] = (uint)bVar2 << 4 | param_1[1] & 0xffffffef;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  DAT_5cc10b48 = DAT_5cc10b48 + 1;
  if (DAT_5cc10b54 == (HDC)0x0) {
    DAT_5cc10b54 = CreateCompatibleDC((HDC)0x0);
    SetBkMode(DAT_5cc10b54,1);
  }
  return 1;
}


