/* Module: vegas30.exe
   Function: FUN_004b3740
   Address: 004b3740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b3740(HWND param_1,uint param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  CHAR *lpString;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_200 [256];
  CHAR local_100 [256];
  
  uVar1 = __alldiv(*(undefined4 *)(*param_4 + 0x2060),*(undefined4 *)(*param_4 + 0x2064),10000,0);
  if (((param_2 & 0xffff) == 9) || ((param_2 & 0xffff) == 8)) {
    lpString = local_100;
    iVar7 = 0x100;
    pHVar2 = GetDlgItem(param_1,0x45d);
    iVar7 = GetWindowTextA(pHVar2,lpString,iVar7);
    if (iVar7 != 0) {
      _SfTextToDoubleToken_8(local_100,0);
      uVar1 = ftol();
      SfPrintF(local_200,&DAT_0061360c,uVar1);
      puVar8 = local_200;
      pHVar2 = GetDlgItem(param_1,0x45d);
      SfSetWindowText(pHVar2,puVar8);
    }
  }
  iVar3 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,100,uVar1);
  iVar7 = *param_4;
  iVar4 = __alldiv(*(undefined4 *)(iVar7 + 0x2060),*(undefined4 *)(iVar7 + 0x2064),10000,0);
  if (iVar3 == iVar4) goto LAB_004b391d;
  uVar6 = __allmul(iVar3,0,10000,0);
  *(undefined8 *)(iVar7 + 0x2060) = uVar6;
  iVar7 = *param_4;
  iVar3 = *(int *)(iVar7 + 0x2064);
  uVar5 = *(uint *)(iVar7 + 0x2060);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar5 = 0;
      goto LAB_004b38b4;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (200000000 < uVar5)))) goto LAB_004b38af;
  }
  else {
LAB_004b38af:
    uVar5 = 200000000;
LAB_004b38b4:
    iVar3 = 0;
  }
  *(uint *)(iVar7 + 0x2060) = uVar5;
  *(int *)(iVar7 + 0x2064) = iVar3;
  uVar1 = __alldiv(*(undefined4 *)(*param_4 + 0x2060),*(undefined4 *)(*param_4 + 0x2064),10000,0);
  SfPrintF(local_200,&DAT_0061360c,uVar1);
  puVar8 = local_200;
  pHVar2 = GetDlgItem(param_1,0x45d);
  SfSetWindowText(pHVar2,puVar8);
  param_4[2] = 1;
  param_4[0x1d] = 1;
LAB_004b391d:
  FUN_004b2de0(param_1,param_4);
  return param_4[2];
}


