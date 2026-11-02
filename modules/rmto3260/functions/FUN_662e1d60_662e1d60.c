/* Module: rmto3260.dll
   Function: FUN_662e1d60
   Address: 662e1d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_662e1d60(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  byte *pbVar8;
  ushort uVar9;
  uint uVar10;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint local_c;
  short local_8;
  
  if (param_1 == (byte *)0x0) {
    return (int *)0x0;
  }
  puVar3 = (ushort *)CONCAT22(uStack_10,uStack_12);
  while( true ) {
    if (param_2 != 0) {
      local_c = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                (uint)param_1[3];
      local_8 = CONCAT11(param_1[4],param_1[5]);
    }
    if (local_c != 0x4d4c5449) break;
    if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
      pbVar8 = (byte *)0x0;
    }
    else {
      bVar1 = param_1[4];
      bVar2 = param_1[5];
      pbVar8 = param_1 + 6;
      uVar10 = (uint)CONCAT11(bVar1,bVar2);
      puVar3 = operator_new(uVar10 * 2);
      puVar7 = puVar3;
      if (CONCAT11(bVar1,bVar2) != 0) {
        do {
          *puVar7 = (ushort)*pbVar8 << 8;
          *puVar7 = *puVar7 | (ushort)pbVar8[1];
          pbVar8 = pbVar8 + 2;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar10 != 0);
      }
      pbVar8 = pbVar8 + 2;
    }
    uVar9 = 0;
    if (*puVar3 != 0) {
      do {
        uVar9 = uVar9 + 1;
        pbVar8 = pbVar8 + CONCAT22(CONCAT11(*pbVar8,pbVar8[1]),CONCAT11(pbVar8[2],pbVar8[3])) + 4;
      } while (uVar9 < *puVar3);
    }
    param_2 = CONCAT22(CONCAT11(*pbVar8,pbVar8[1]),CONCAT11(pbVar8[2],pbVar8[3]));
    param_1 = pbVar8 + 4;
    if (puVar3 != (ushort *)0x0) {
      operator_delete(puVar3);
      puVar3 = (ushort *)0x0;
    }
    if (param_1 == (byte *)0x0) {
      return (int *)0x0;
    }
  }
  if (local_c != 0x2e7261fd) {
    return (int *)0x0;
  }
  if (local_8 == 3) {
    puVar4 = operator_new(0x3c);
    if (puVar4 != (undefined4 *)0x0) {
      piVar5 = FUN_662e1f30(puVar4);
      goto LAB_662e1f01;
    }
  }
  else if (local_8 == 4) {
    puVar4 = operator_new(0x65);
    if (puVar4 != (undefined4 *)0x0) {
      piVar5 = FUN_662e2480(puVar4);
      goto LAB_662e1f01;
    }
  }
  else {
    if (local_8 != 5) {
      return (int *)0x0;
    }
    puVar4 = operator_new(0x66);
    if (puVar4 != (undefined4 *)0x0) {
      piVar5 = FUN_662e2770(puVar4);
      goto LAB_662e1f01;
    }
  }
  piVar5 = (int *)0x0;
LAB_662e1f01:
  iVar6 = (**(code **)(*piVar5 + 0x1c))(param_1,param_2);
  if (iVar6 != 0) {
    if (piVar5 != (int *)0x0) {
      (**(code **)*piVar5)(1);
    }
    piVar5 = (int *)0x0;
  }
  return piVar5;
}


