/* Module: vegas30.exe
   Function: FUN_005a52a0
   Address: 005a52a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a52a0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
                int param_6,int *param_7,undefined4 param_8)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  iVar3 = param_5;
  puVar8 = param_3;
  puVar2 = param_1;
  if ((param_5 < 1) || (param_5 = 1, param_6 < 1)) {
    param_5 = 0;
  }
  puVar6 = param_1;
  for (iVar5 = 0x36; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  param_1[2] = param_4;
  *param_1 = param_3;
  param_1[3] = iVar3;
  param_1[4] = param_6;
  param_1[5] = param_8;
  if ((param_5 == 0) || (param_7 == (int *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  uVar7 = (param_1[0x34] ^ uVar7) & 1 ^ param_1[0x34];
  param_1[0x34] = uVar7;
  if ((uVar7 & 1) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = FUN_005a5270(iVar3,param_6,param_4);
    piVar4 = (int *)(iVar3 * (int)puVar8 + (int)param_7);
  }
  puVar2[6] = piVar4;
  puVar2[0xe] = 0xffffffff;
  puVar2[0xf] = 0xffffffff;
  iVar3 = _SfList_CreateExZ_32(puVar2 + 1,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  if (-1 < iVar3) {
    param_6 = 0;
    if (0 < param_2) {
      do {
        iVar3 = _SfList_AllocItem_12(puVar2[1],0x460,&param_1);
        puVar8 = param_1;
        piVar4 = (int *)0x0;
        param_3 = param_1;
        param_7 = (int *)0x0;
        if ((iVar3 < 0) ||
           (iVar3 = _SfList_InsertList_16(puVar2[1],0xffffffff,0,0xffffffff), iVar3 < 0))
        goto LAB_005a5479;
        if (param_5 != 0) {
          iVar3 = _SfDibAlloc_28(&param_7,param_4,puVar2[3],puVar2[4],0,0xffffffff,0);
          if (iVar3 < 0) goto LAB_005a5479;
          if (param_7[4] == 0) {
            if (((param_7[8] != 0) || (uVar1 = *(ushort *)((int)param_7 + 0xe), uVar1 == 0)) ||
               (8 < uVar1)) goto LAB_005a541d;
            iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_005a5420:
            piVar4 = (int *)(*param_7 + iVar5 * 4 + (int)param_7);
          }
          else {
            if (param_7[4] != 3) {
LAB_005a541d:
              iVar5 = param_7[8];
              goto LAB_005a5420;
            }
            piVar4 = param_7 + 0xd;
          }
          iVar5 = FUN_005a5270(puVar2[3],puVar2[4],puVar2[2]);
          puVar2[7] = puVar2[7] + iVar5;
        }
        for (iVar5 = 0x118; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        param_3[0x114] = param_8;
        *param_3 = param_7;
        param_3[0x10b] = piVar4;
        param_6 = param_6 + 1;
      } while (param_6 < param_2);
    }
    if (-1 < iVar3) {
      return iVar3;
    }
  }
LAB_005a5479:
  FUN_005a5490(puVar2);
  return iVar3;
}


