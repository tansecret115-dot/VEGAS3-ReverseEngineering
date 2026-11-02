/* Module: aviplug.dll
   Function: FUN_5f974620
   Address: 5f974620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f974620(uint *param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_10;
  
  uVar6 = param_1[1];
  uVar5 = uVar6 >> 0x14;
  *param_3 = uVar5 & 7;
  param_3[1] = (int)uVar5 >> 3;
  local_10 = 0;
  lVar9 = __allshl(0xc,uVar6);
  *(longlong *)param_1 = lVar9;
  *param_1 = *param_1 | param_1[3] >> 0x14;
  param_1[1] = param_1[1];
  lVar9 = __allshl(0xc,param_1[3]);
  *(longlong *)(param_1 + 2) = lVar9;
  do {
    puVar7 = param_3 + 2;
    uVar6 = param_1[1] >> 0x18;
    iVar8 = uVar6 * 8;
    uVar1 = *(undefined2 *)(&DAT_5f9e0190 + uVar6 * 8);
    uVar10 = __aullshr((byte)uVar1,param_1[1]);
    sVar2 = *(short *)(&DAT_5f9e0196 + iVar8);
    iVar8 = (int)uVar10 + *(int *)(&DAT_5f9e0192 + iVar8);
    if ((int)param_2 < (int)sVar2) {
      uVar10 = __aullshr(0x20,param_1[1]);
      *puVar7 = (uint)uVar10;
      param_3[3] = local_10 << 0x10 | param_2;
      puVar3 = (undefined4 *)*param_4;
      *puVar3 = puVar7;
      *param_4 = puVar3 + 1;
      return;
    }
    uVar6 = *(uint *)(&DAT_5f9e1194 + iVar8 * 8);
    *puVar7 = *(uint *)(&DAT_5f9e1190 + iVar8 * 8);
    param_3[3] = uVar6;
    param_2 = param_2 - (int)sVar2;
    local_10 = local_10 + 1;
    lVar9 = __allshl((byte)sVar2,param_1[1]);
    *(longlong *)param_1 = lVar9;
    uVar10 = __aullshr((byte)uVar1,param_1[3]);
    *param_1 = *param_1 | (uint)uVar10;
    param_1[1] = param_1[1] | (uint)(uVar10 >> 0x20);
    lVar9 = __allshl((byte)sVar2,param_1[3]);
    *(longlong *)(param_1 + 2) = lVar9;
    param_3 = puVar7;
  } while (iVar8 != 4);
  iVar8 = param_4[1];
  bVar4 = (byte)iVar8 & 0x3f;
  puVar7 = (uint *)(param_4[2] + (iVar8 >> 6) * 8);
  uVar6 = param_1[1];
  param_4[1] = iVar8 + param_2;
  uVar10 = __aullshr(bVar4,uVar6);
  *puVar7 = *puVar7 | (uint)uVar10;
  uVar5 = param_1[3];
  puVar7[1] = puVar7[1] | (uint)(uVar10 >> 0x20);
  uVar10 = __aullshr(bVar4,uVar5);
  uVar11 = __allshl(0x40 - bVar4,uVar6);
  *(ulonglong *)(puVar7 + 2) = uVar10 | uVar11;
  lVar9 = __allshl(0x40 - bVar4,uVar5);
  *(longlong *)(puVar7 + 4) = lVar9;
  return;
}


