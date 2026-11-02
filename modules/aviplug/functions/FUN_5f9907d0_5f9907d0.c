/* Module: aviplug.dll
   Function: FUN_5f9907d0
   Address: 5f9907d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9907d0(ushort *param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  bool bVar8;
  
  uVar2 = (uint)param_1[6] * param_3;
  if (uVar2 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 < 0xfe02) {
    if (uVar1 < 0xfe00) {
      if (uVar1 == 1) goto LAB_5f990868;
      if (uVar1 != 3) {
        return 0x80004005;
      }
    }
  }
  else if (uVar1 == 0xfe02) {
LAB_5f990868:
    if (param_1[7] == 8) {
      uVar3 = 0x80808080;
      goto LAB_5f99080c;
    }
  }
  else {
    if (uVar1 != 0xfffe) {
      return 0x80004005;
    }
    iVar5 = 4;
    bVar8 = true;
    puVar6 = param_1 + 0xc;
    piVar7 = &DAT_5f9f36e8;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *(int *)puVar6 == *piVar7;
      puVar6 = puVar6 + 2;
      piVar7 = piVar7 + 1;
    } while (bVar8);
    if (!bVar8) {
      return 0;
    }
    if (param_1[7] == 8) {
      uVar3 = 0x80808080;
      goto LAB_5f99080c;
    }
  }
  uVar3 = 0;
LAB_5f99080c:
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = uVar3;
    param_2 = param_2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)param_2 = (char)uVar3;
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return 0;
}


