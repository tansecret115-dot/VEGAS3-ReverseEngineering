/* Module: vegas30.exe
   Function: FUN_004b3940
   Address: 004b3940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b3940(HWND param_1,uint param_2,undefined4 param_3,int *param_4)

{
  float10 fVar1;
  longlong lVar2;
  undefined4 uVar3;
  HWND pHVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined8 uVar9;
  CHAR *lpString;
  int iVar10;
  undefined1 *puVar11;
  undefined1 local_200 [256];
  CHAR local_100 [256];
  
  uVar3 = __alldiv(*(undefined4 *)(*param_4 + 0x2068),*(undefined4 *)(*param_4 + 0x206c),10000,0);
  if (((param_2 & 0xffff) == 9) || ((param_2 & 0xffff) == 8)) {
    lpString = local_100;
    iVar10 = 0x100;
    pHVar4 = GetDlgItem(param_1,0x45e);
    iVar10 = GetWindowTextA(pHVar4,lpString,iVar10);
    if (iVar10 != 0) {
      fVar8 = (float10)_SfTextToDoubleToken_8(local_100,0);
      fVar1 = (float10)_DAT_006105d0;
      lVar2 = FUN_004b2cd0(4,*(undefined4 *)(*param_4 + 0x2044));
      if ((double)(fVar8 * fVar1) < (double)lVar2) {
        FUN_004b2cd0(4,*(undefined4 *)(*param_4 + 0x2044));
      }
      uVar3 = ftol();
      uVar9 = ftol();
      uVar5 = __alldiv(uVar9,10000,0);
      SfPrintF(local_200,&DAT_0061360c,uVar5);
      puVar11 = local_200;
      pHVar4 = GetDlgItem(param_1,0x45e);
      SfSetWindowText(pHVar4,puVar11);
    }
  }
  uVar9 = FUN_004b2cd0(4,*(undefined4 *)(*param_4 + 0x2044));
  iVar10 = __alldiv(uVar9,10000,0);
  iVar6 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,iVar10,iVar10 * 2,uVar3);
  iVar10 = *param_4;
  iVar7 = __alldiv(*(undefined4 *)(iVar10 + 0x2068),*(undefined4 *)(iVar10 + 0x206c),10000,0);
  if (iVar6 != iVar7) {
    *(int *)(iVar10 + 0x2068) = iVar6;
    *(undefined4 *)(iVar10 + 0x206c) = 0;
    iVar10 = *param_4;
    uVar9 = __allmul(*(undefined4 *)(iVar10 + 0x2068),*(undefined4 *)(iVar10 + 0x206c),10000,0);
    *(undefined8 *)(iVar10 + 0x2068) = uVar9;
    uVar3 = __alldiv(*(undefined4 *)(*param_4 + 0x2068),*(undefined4 *)(*param_4 + 0x206c),10000,0);
    SfPrintF(local_200,&DAT_0061360c,uVar3);
    puVar11 = local_200;
    pHVar4 = GetDlgItem(param_1,0x45e);
    SfSetWindowText(pHVar4,puVar11);
    param_4[2] = 1;
    param_4[0x1d] = 1;
  }
  FUN_004b2ff0(param_1,param_4);
  return param_4[2];
}


