/* Module: vegas30.exe
   Function: FUN_004b3b90
   Address: 004b3b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b3b90(HWND param_1,uint param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  HWND pHVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  CHAR *lpString;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_200 [256];
  CHAR local_100 [256];
  
  iVar6 = *param_4;
  uVar1 = FUN_004b2d00(*(undefined4 *)(iVar6 + 0x2050),*(undefined4 *)(iVar6 + 0x2054),
                       *(undefined4 *)(iVar6 + 0x2044));
  if (((param_2 & 0xffff) != 9) && ((param_2 & 0xffff) != 8)) goto LAB_004b3cdc;
  lpString = local_100;
  iVar6 = 0x100;
  pHVar2 = GetDlgItem(param_1,0x461);
  iVar6 = GetWindowTextA(pHVar2,lpString,iVar6);
  if (iVar6 == 0) goto LAB_004b3cdc;
  _SfTextToDoubleToken_8(local_100,0);
  uVar5 = ftol();
  uVar4 = 10000 - (uint)uVar5;
  iVar6 = -(uint)(10000 < (uint)uVar5) - (int)((ulonglong)uVar5 >> 0x20);
  if (iVar6 < 1) {
    if ((iVar6 < 0) || (uVar4 < 10000000)) {
      uVar4 = 10000000;
      goto LAB_004b3c85;
    }
    if ((-1 < iVar6) && ((0 < iVar6 || (50000000 < uVar4)))) goto LAB_004b3c80;
  }
  else {
LAB_004b3c80:
    uVar4 = 50000000;
LAB_004b3c85:
    iVar6 = 0;
  }
  uVar1 = FUN_004b2d00(uVar4,iVar6,*(undefined4 *)(*param_4 + 0x2044));
  uVar5 = __alldiv(uVar4,iVar6,10000,0);
  SfPrintF(local_200,&DAT_0061360c,uVar5);
  puVar7 = local_200;
  pHVar2 = GetDlgItem(param_1,0x461);
  SfSetWindowText(pHVar2,puVar7);
LAB_004b3cdc:
  iVar3 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,4,uVar1);
  iVar6 = *param_4;
  iVar6 = FUN_004b2d00(*(undefined4 *)(iVar6 + 0x2050),*(undefined4 *)(iVar6 + 0x2054),
                       *(undefined4 *)(iVar6 + 0x2044));
  if (iVar3 != iVar6) {
    uVar5 = FUN_004b2cd0(iVar3,*(undefined4 *)(*param_4 + 0x2044));
    *(undefined8 *)(*param_4 + 0x2050) = uVar5;
    uVar1 = __alldiv(*(undefined4 *)(*param_4 + 0x2050),*(undefined4 *)(*param_4 + 0x2054),10000,0);
    SfPrintF(local_200,&DAT_0061360c,uVar1);
    puVar7 = local_200;
    pHVar2 = GetDlgItem(param_1,0x461);
    SfSetWindowText(pHVar2,puVar7);
    param_4[2] = 1;
    param_4[0x1d] = 1;
  }
  FUN_004b3200(param_1,param_4);
  param_4[2] = 1;
  return 1;
}


