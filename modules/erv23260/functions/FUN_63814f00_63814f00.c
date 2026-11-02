/* Module: erv23260.dll
   Function: FUN_63814f00
   Address: 63814f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63814f00(void *this,int param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
            int param_7,byte *param_8,int param_9,int *param_10,int *param_11)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int local_20;
  int local_10;
  int local_c;
  code *local_8;
  
  bVar1 = true;
  bVar2 = true;
  local_c = 2;
  local_10 = 2;
  pbVar7 = param_4 + param_10[1];
  iVar9 = param_3 + *param_10;
  local_8 = (code *)0x0;
  if (iVar9 == param_5) {
    local_c = 3;
  }
  if (iVar9 == param_7) {
    local_c = local_c + -1;
  }
  if (pbVar7 == (byte *)param_6) {
    local_10 = 3;
  }
  if (pbVar7 == param_8) {
    local_10 = local_10 + -1;
  }
  if ((iVar9 == param_5) && (iVar9 == param_7)) {
    bVar1 = false;
  }
  if ((pbVar7 == (byte *)param_6) && (pbVar7 == param_8)) {
    bVar2 = false;
  }
  param_7 = 2 - local_c;
  iVar9 = *param_11;
  param_6 = 2 - local_10;
  if (*(int *)(param_9 + 0x18) == 4) goto LAB_638151ce;
  local_20 = 0x11;
  pbVar6 = *(byte **)((int)this + 0xe4);
  pbVar10 = pbVar6 + 0x2c;
  pbVar7 = (byte *)((int)(pbVar7 + -1) * param_2 + param_3 + param_1 + -1 + *param_10);
  param_8 = pbVar7;
  do {
    param_8 = param_8 + param_2;
    iVar8 = 0;
    pbVar3 = pbVar7;
    pbVar5 = pbVar10 + 1;
    param_4 = pbVar6;
    do {
      *param_4 = *pbVar3;
      (pbVar5 + 2)[(int)(pbVar6 + (-2 - (int)pbVar10))] =
           (byte)((int)(pbVar3[1] + 1 + (uint)*pbVar3) >> 1);
      pbVar5[-1] = (byte)((int)(pbVar3[(int)param_8 - (int)pbVar7] + 1 + (uint)*pbVar3) >> 1);
      *pbVar5 = (byte)((int)((uint)param_8[iVar8 + 1] + (uint)pbVar3[1] +
                             (uint)pbVar3[(int)param_8 - (int)pbVar7] + 2 + (uint)*pbVar3) >> 2);
      iVar8 = iVar8 + 1;
      pbVar3 = pbVar3 + 1;
      param_4 = param_4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (iVar8 < 0x11);
    pbVar7 = pbVar7 + param_2;
    pbVar6 = pbVar6 + 0x58;
    pbVar10 = pbVar10 + 0x58;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  switch(*(undefined4 *)(param_9 + 0x18)) {
  case 0:
  case 1:
  case 2:
    local_8 = FUN_63815b60;
    break;
  case 3:
    local_8 = FUN_63815ea0;
  }
  iVar8 = local_c + local_10 * 0x2c + -0x2c + *(int *)((int)this + 0xe4);
  if ((bVar1) && (bVar2)) {
    param_8 = (byte *)0xffffffff;
    do {
      iVar11 = -1;
      do {
        iVar4 = (*local_8)(*(undefined4 *)((int)this + 0xe0),iVar11 + iVar8,0x10,0x2c,iVar9);
        if (iVar4 < iVar9) {
          param_6 = (int)param_8;
          iVar9 = iVar4;
          param_7 = iVar11;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 2);
      iVar8 = iVar8 + 0x2c;
      param_8 = param_8 + 1;
    } while ((int)param_8 < 2);
    goto LAB_638151ce;
  }
  if (bVar1) {
    if (!bVar2) {
      iVar11 = -1;
      do {
        iVar4 = (*local_8)(*(undefined4 *)((int)this + 0xe0),iVar11 + iVar8 + 0x2c,0x10,0x2c,iVar9);
        if (iVar4 < iVar9) {
          param_6 = 0;
          iVar9 = iVar4;
          param_7 = iVar11;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 2);
      goto LAB_638151ce;
    }
    if (!bVar1) goto LAB_63815174;
  }
  else {
LAB_63815174:
    if (bVar2) {
      iVar11 = -1;
      do {
        iVar4 = (*local_8)(*(undefined4 *)((int)this + 0xe0),iVar8,0x10,0x2c,iVar9);
        if (iVar4 < iVar9) {
          param_7 = 0;
          iVar9 = iVar4;
          param_6 = iVar11;
        }
        iVar8 = iVar8 + 0x2c;
        iVar11 = iVar11 + 1;
      } while (iVar11 < 2);
      goto LAB_638151ce;
    }
  }
  iVar8 = (*local_8)(*(undefined4 *)((int)this + 0xe0),iVar8 + 0x2c,0x10,0x2c,iVar9);
  if (iVar8 < iVar9) {
    param_7 = 0;
    param_6 = 0;
    iVar9 = iVar8;
  }
LAB_638151ce:
  *param_11 = iVar9;
  *param_10 = param_7 + *param_10 * 2 + -2 + local_c;
  param_10[1] = param_6 + param_10[1] * 2 + -2 + local_10;
  return;
}


