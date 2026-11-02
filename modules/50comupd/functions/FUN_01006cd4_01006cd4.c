/* Module: 50comupd.exe
   Function: FUN_01006cd4
   Address: 01006cd4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006cd4(undefined4 *param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  ushort *puVar5;
  byte bVar6;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  
  puVar5 = param_2;
  puVar9 = param_1;
  bVar6 = *(byte *)((int)param_1 + 0xb2) & 0xf;
  if ((*(byte *)((int)param_1 + 0xb2) & 0xf) == 0) {
    uVar4 = *(ushort *)(param_1[0x12] + 4);
    *param_2 = uVar4;
    puVar9 = (undefined4 *)param_1[0xf];
    puVar10 = (undefined4 *)param_1[0x10];
    for (uVar8 = (uint)(uVar4 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    return 1;
  }
  if (bVar6 == 1) {
    param_1 = (undefined4 *)param_1[0x25];
    iVar7 = FUN_010059d6();
    if (iVar7 == 0) {
      *param_2 = (ushort)param_1;
      return 1;
    }
  }
  else {
    if (bVar6 == 2) {
      param_1 = (undefined4 *)(uint)*param_2;
      iVar7 = FUN_010059d6();
    }
    else {
      if (bVar6 != 3) {
        uVar11 = 6;
        goto LAB_01006d86;
      }
      piVar1 = param_1 + 0x12;
      piVar2 = param_1 + 0x10;
      piVar3 = param_1 + 0xf;
      puVar10 = param_1 + 0xd;
      param_1 = (undefined4 *)(uint)*param_2;
      bVar6 = FUN_01006f08((int *)*puVar10,*piVar3,(uint)*(ushort *)(*piVar1 + 4),*piVar2,
                           (uint *)&param_1);
      iVar7 = CONCAT31(extraout_var,bVar6);
    }
    if (iVar7 == 0) {
      *puVar5 = (ushort)param_1;
      return 1;
    }
  }
  uVar11 = 7;
LAB_01006d86:
  FUN_01006dcb((undefined4 *)*puVar9,uVar11,0);
  return 0;
}


