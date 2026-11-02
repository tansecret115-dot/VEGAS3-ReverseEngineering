/* Module: vegas30.exe
   Function: FUN_004a45f0
   Address: 004a45f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a45f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  uchar local_104 [260];
  
  iVar2 = *(int *)(param_2 + 0x218);
  local_114 = *(int *)(iVar2 + 0x20);
  local_110 = *(undefined4 *)(iVar2 + 0x24);
  local_10c = *(undefined4 *)(iVar2 + 0x28);
  local_108 = *(int *)(iVar2 + 0x2c);
  piVar1 = (int *)_SfGetUIFontSize_4(100);
  local_114 = local_114 + 2;
  local_10c = local_114 + *piVar1 * 0x1e;
  local_108 = local_108 + -2;
  local_110 = (local_108 - piVar1[1]) + -3;
  iVar2 = *(int *)(param_1 + 0xac8) + -4;
  if (iVar2 < local_10c) {
    local_114 = local_114 + (iVar2 - local_10c);
    local_10c = iVar2;
  }
  local_104[0] = '\0';
  if (*(uchar **)(param_2 + 0xc) != (uchar *)0x0) {
    _mbscpy(local_104,*(uchar **)(param_2 + 0xc));
  }
  iVar2 = FUN_00404d90(*(undefined4 *)(param_1 + 4),0xffffffff,&local_114,100,local_104,0x104);
  if (iVar2 == 0) {
    FUN_005c9a40(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_2 + 8),param_2,local_104);
  }
  return;
}


