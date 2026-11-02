/* Module: vegas30.exe
   Function: FUN_00434740
   Address: 00434740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00434740(uchar *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_004eb2d0(1,0);
  if (iVar1 == 0) {
    return -0x7ffb1ff4;
  }
  iVar1 = FUN_005b9ca0();
  if (iVar1 == 0) {
    return -0x7ff8fff2;
  }
  piVar2 = (int *)FUN_005b87b0(iVar1);
  iVar3 = 0;
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
  }
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FUN_005cb5d0(iVar1,*(undefined4 *)(piVar2[2] + iVar3 * 4),0);
  }
  _SfSummary_Free_4(iVar1 + 0x1bc);
  FUN_005fb200(1);
  if (param_1 != (uchar *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c4) = 0;
    _mbscpy((uchar *)(iVar1 + 0xb8),param_1);
  }
  iVar3 = FUN_004e6c90(0x140);
  if (iVar3 == 0) {
    FUN_005b96f0(iVar1,0);
    return -0x7ff8fff2;
  }
  *(undefined1 **)(iVar3 + 0x20) = &LAB_00433be0;
  *(undefined4 *)(iVar3 + 0x2c) = 0x48;
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x32;
  *(undefined4 *)(iVar3 + 0x18) = 5;
  _mbscpy((uchar *)(iVar3 + 0x30),(uchar *)(iVar1 + 0xb8));
  *(int *)(iVar3 + 0x134) = iVar1;
  *(undefined4 *)(iVar3 + 0x138) = param_2;
  *(undefined4 *)(iVar3 + 0x13c) = 0;
  iVar3 = FUN_004e7190(iVar3);
  if (iVar3 < 0) {
    FUN_005b96f0(iVar1,0);
  }
  return iVar3;
}


