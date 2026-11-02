/* Module: rnco3260.dll
   Function: FUN_6370b9a0
   Address: 6370b9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370b9a0(ushort *param_1,short *param_2,ushort *param_3,int param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  short sVar8;
  int iVar9;
  ushort *local_8;
  uint uVar7;
  
  puVar1 = param_6;
  local_8 = param_1;
  param_1 = (ushort *)(param_4 >> 1);
  iVar2 = (param_4 * 2 - (int)param_1) / ((int)param_6 * 2);
  if (param_4 != 0) {
    uVar4 = *param_5;
    param_6 = param_5 + 1;
    uVar4 = ((uVar4 & 0xfc00 | uVar4 >> 3 & 0x1f0000) >> 2 | uVar4 & 0xf8) >> 3;
    param_5 = (uint *)(param_4 - iVar2);
    if (param_5 != (uint *)0x0) {
      do {
        uVar3 = (ushort)uVar4;
        sVar8 = ((ushort)((*local_8 ^ uVar4) >> 1) & 0x7bef) + (*local_8 & uVar3);
        do {
          *param_3 = uVar3;
          *param_2 = sVar8;
          local_8 = local_8 + 1;
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          if (param_5 == (uint *)0x0) goto joined_r0x6370bbef;
          param_1 = param_1 + -(int)puVar1;
        } while (-1 < (int)param_1);
        param_1 = (ushort *)((int)param_1 + param_4);
        uVar6 = *param_6;
        uVar6 = (uVar6 & 0xfc00 | uVar6 >> 3 & 0x1f0000) >> 2 | uVar6 & 0xf8;
        uVar7 = uVar6 >> 3;
        uVar5 = (ushort)uVar7;
        uVar4 = ((uVar7 ^ uVar4) >> 1 & 0x7bef) + (uVar7 & uVar4);
        uVar3 = (ushort)uVar4;
        sVar8 = ((ushort)((*local_8 ^ uVar4) >> 1) & 0x7bef) + (*local_8 & uVar3);
        do {
          *param_3 = uVar3;
          local_8 = local_8 + 1;
          *param_2 = sVar8;
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          if (param_5 == (uint *)0x0) goto joined_r0x6370bbef;
          param_1 = param_1 + -(int)puVar1;
        } while (-1 < (int)param_1);
        iVar9 = (int)param_1 + param_4;
        sVar8 = ((ushort)((*local_8 ^ uVar7) >> 1) & 0x7bef) + (*local_8 & uVar5);
        do {
          *param_3 = uVar5;
          local_8 = local_8 + 1;
          param_3 = param_3 + 1;
          *param_2 = sVar8;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          uVar3 = uVar5;
          if (param_5 == (uint *)0x0) goto joined_r0x6370bbef;
          iVar9 = iVar9 + (int)puVar1 * -2;
        } while (-1 < iVar9);
        param_1 = (ushort *)(iVar9 + param_4);
        uVar4 = param_6[1];
        uVar7 = (uVar4 & 0xfc00 | uVar4 >> 3 & 0x1f0000) >> 2 | uVar4 & 0xf8;
        param_6 = param_6 + 2;
        uVar4 = uVar7 >> 3;
        uVar6 = ((uVar6 & uVar7) >> 3) + ((uVar6 ^ uVar7) >> 4 & 0x7bef);
        uVar3 = (ushort)uVar6;
        sVar8 = ((ushort)((*local_8 ^ uVar6) >> 1) & 0x7bef) + (*local_8 & uVar3);
        do {
          local_8 = local_8 + 1;
          *param_3 = uVar3;
          param_3 = param_3 + 1;
          *param_2 = sVar8;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          if (param_5 == (uint *)0x0) goto joined_r0x6370bbef;
          param_1 = param_1 + -(int)puVar1;
        } while (-1 < (int)param_1);
        param_1 = (ushort *)((int)param_1 + param_4);
      } while( true );
    }
    sVar8 = (short)param_4;
    uVar3 = (ushort)uVar4;
joined_r0x6370bbef:
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = uVar3;
      *param_2 = sVar8;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


