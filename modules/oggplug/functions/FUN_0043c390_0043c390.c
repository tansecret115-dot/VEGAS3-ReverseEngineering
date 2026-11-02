/* Module: oggplug.dll
   Function: FUN_0043c390
   Address: 0043c390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043c390(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar7 = param_4 - param_3;
  iVar9 = param_2 - param_1;
  iVar2 = (int)uVar7 / iVar9;
  if ((int)uVar7 < 0) {
    param_4 = iVar2 + -1;
  }
  else {
    param_4 = iVar2 + 1;
  }
  uVar5 = iVar2 * iVar9 >> 0x1f;
  puVar6 = (undefined4 *)(&DAT_00452df0 + param_3 * 4);
  *(undefined4 *)(param_5 + param_1 * 4) = *(undefined4 *)(&DAT_00452df0 + param_3 * 4);
  iVar3 = param_1 + 1;
  if (iVar3 < param_2) {
    puVar8 = (undefined4 *)(param_5 + iVar3 * 4);
    iVar3 = param_2 - iVar3;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + (((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) -
                      ((iVar2 * iVar9 ^ uVar5) - uVar5));
      iVar1 = iVar2;
      if (iVar9 <= iVar4) {
        iVar4 = iVar4 - iVar9;
        iVar1 = param_4;
      }
      puVar6 = puVar6 + iVar1;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


