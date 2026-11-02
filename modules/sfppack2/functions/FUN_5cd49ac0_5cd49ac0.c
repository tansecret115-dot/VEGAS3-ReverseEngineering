/* Module: sfppack2.dll
   Function: FUN_5cd49ac0
   Address: 5cd49ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd49ac0(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  if ((int)param_2 < 0x7cd) {
    *param_1 = 0;
    return 0x80004005;
  }
  iVar2 = param_2 - 0x7cd;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) + iVar2 * 0x16d + param_4;
  iVar3 = 1;
  if (1 < param_3) {
    piVar4 = &DAT_5cd67478;
    do {
      if (0x5cd674a3 < (int)piVar4) break;
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  uVar5 = param_2 & 0x80000003;
  bVar6 = uVar5 == 0;
  if ((int)uVar5 < 0) {
    bVar6 = (uVar5 - 1 | 0xfffffffc) == 0xffffffff;
  }
  if ((bVar6) && (2 < param_3)) {
    iVar2 = iVar2 + 1;
  }
  *param_1 = iVar2;
  return 0;
}


