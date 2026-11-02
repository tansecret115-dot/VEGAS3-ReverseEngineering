/* Module: vidcap30.exe
   Function: FUN_00576040
   Address: 00576040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00576040(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if ((int)param_2 < 0x7cd) {
    *param_1 = 0;
    return 0x80004005;
  }
  iVar2 = param_2 - 0x7cd;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) + iVar2 * 0x16d + param_4;
  iVar3 = 1;
  if (1 < param_3) {
    piVar4 = &DAT_005ba160;
    do {
      if (0x5ba18b < (int)piVar4) break;
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  param_2 = param_2 & 0x80000003;
  bVar5 = param_2 == 0;
  if ((int)param_2 < 0) {
    bVar5 = (param_2 - 1 | 0xfffffffc) == 0xffffffff;
  }
  if ((bVar5) && (2 < param_3)) {
    iVar2 = iVar2 + 1;
  }
  *param_1 = iVar2;
  return 0;
}


