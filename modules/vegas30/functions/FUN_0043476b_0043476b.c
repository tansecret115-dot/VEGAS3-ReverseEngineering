/* Module: vegas30.exe
   Function: FUN_0043476b
   Address: 0043476b
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043476b(undefined4 param_1,uchar *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  piVar1 = (int *)FUN_005b87b0(unaff_EDI);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_005cb5d0(unaff_EDI,*(undefined4 *)(piVar1[2] + iVar2 * 4),0);
  }
  _SfSummary_Free_4(unaff_EDI + 0x1bc);
  FUN_005fb200(1);
  if (param_2 != (uchar *)0x0) {
    *(undefined4 *)(unaff_EDI + 0x1c4) = 0;
    _mbscpy((uchar *)(unaff_EDI + 0xb8),param_2);
  }
  iVar2 = FUN_004e6c90(0x140);
  if (iVar2 == 0) {
    FUN_005b96f0(unaff_EDI,0);
    return -0x7ff8fff2;
  }
  *(undefined1 **)(iVar2 + 0x20) = &LAB_00433be0;
  *(undefined4 *)(iVar2 + 0x2c) = 0x48;
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x32;
  *(undefined4 *)(iVar2 + 0x18) = 5;
  _mbscpy((uchar *)(iVar2 + 0x30),(uchar *)(unaff_EDI + 0xb8));
  *(int *)(iVar2 + 0x134) = unaff_EDI;
  *(undefined4 *)(iVar2 + 0x138) = param_3;
  *(undefined4 *)(iVar2 + 0x13c) = 0;
  iVar2 = FUN_004e7190(iVar2);
  if (iVar2 < 0) {
    FUN_005b96f0(unaff_EDI,0);
  }
  return iVar2;
}


