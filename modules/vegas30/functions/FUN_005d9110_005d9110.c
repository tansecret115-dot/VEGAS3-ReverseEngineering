/* Module: vegas30.exe
   Function: FUN_005d9110
   Address: 005d9110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d9110(HWND param_1,int param_2)

{
  undefined2 uVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT *pLVar4;
  LRESULT *pLVar5;
  float10 fVar6;
  undefined8 uVar7;
  UINT UVar8;
  CHAR *pCVar9;
  WPARAM WVar10;
  int iVar11;
  LPARAM LVar12;
  LRESULT local_128 [6];
  undefined4 local_110;
  undefined4 local_10c;
  CHAR local_100 [256];
  
  pCVar9 = local_100;
  iVar11 = 0x100;
  pHVar2 = GetDlgItem(param_1,0x438);
  GetWindowTextA(pHVar2,pCVar9,iVar11);
  uVar1 = _SfTextToLongToken_8(local_100,0);
  LVar12 = 0;
  WVar10 = 0;
  UVar8 = 0x147;
  *(undefined2 *)(param_2 + 0xd2a) = uVar1;
  pHVar2 = GetDlgItem(param_1,0x434);
  WVar10 = SendMessageA(pHVar2,UVar8,WVar10,LVar12);
  LVar12 = 0;
  UVar8 = 0x150;
  pHVar2 = GetDlgItem(param_1,0x434);
  LVar3 = SendMessageA(pHVar2,UVar8,WVar10,LVar12);
  LVar12 = 0;
  WVar10 = 0;
  UVar8 = 0x147;
  *(short *)(param_2 + 0xd28) = (short)LVar3;
  pHVar2 = GetDlgItem(param_1,0x435);
  WVar10 = SendMessageA(pHVar2,UVar8,WVar10,LVar12);
  LVar12 = 0;
  UVar8 = 0x150;
  pHVar2 = GetDlgItem(param_1,0x435);
  LVar3 = SendMessageA(pHVar2,UVar8,WVar10,LVar12);
  pCVar9 = local_100;
  iVar11 = 0x100;
  *(LRESULT *)(param_2 + 0xd08) = LVar3;
  pHVar2 = GetDlgItem(param_1,0x47a);
  iVar11 = GetWindowTextA(pHVar2,pCVar9,iVar11);
  if (iVar11 != 0) {
    pLVar4 = (LRESULT *)(param_2 + 0xd08);
    pLVar5 = local_128;
    for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pLVar5 = *pLVar4;
      pLVar4 = pLVar4 + 1;
      pLVar5 = pLVar5 + 1;
    }
    local_110 = 0;
    local_10c = 0;
    uVar7 = _SfTextToNanoTimeToken_16(local_100,local_128,0,0);
    *(int *)(param_2 + 0xd20) = -(int)uVar7;
    *(uint *)(param_2 + 0xd24) = -((int)((ulonglong)uVar7 >> 0x20) + (uint)((int)uVar7 != 0));
  }
  pCVar9 = local_100;
  iVar11 = 0x100;
  pHVar2 = GetDlgItem(param_1,0x471);
  iVar11 = GetWindowTextA(pHVar2,pCVar9,iVar11);
  if ((iVar11 == 0) ||
     (fVar6 = (float10)_SfTextToDoubleToken_8(local_100,0), fVar6 < (float10)_DAT_006106d0)) {
    fVar6 = (float10)_DAT_006106d0;
  }
  else if ((float10)_DAT_0062a490 < fVar6) {
    fVar6 = (float10)_DAT_0062a490;
  }
  *(double *)(param_2 + 0xd18) = (double)fVar6;
  return 1;
}


