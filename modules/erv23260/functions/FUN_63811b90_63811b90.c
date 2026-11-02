/* Module: erv23260.dll
   Function: FUN_63811b90
   Address: 63811b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63811b90(void *this,int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *local_24;
  uint local_20;
  char *local_1c;
  int local_18;
  int local_10;
  
  iVar2 = (int)param_2 * *(int *)((int)this + 0x118);
  uVar7 = *(int *)((int)this + 0x14) * *param_1 + param_1[1];
  pcVar8 = (char *)(*(int *)(*(int *)((int)this + 0x110) + uVar7 * 4) + *(int *)((int)this + 0x120)
                   + iVar2);
  param_2 = pcVar8 + *(int *)((int)this + 0x118) * 8;
  iVar2 = iVar2 + *(int *)(*(int *)((int)this + 0x114) + uVar7 * 4);
  local_24 = (char *)(*(int *)((int)this + 0x128) + iVar2);
  local_1c = (char *)(*(int *)((int)this + 0x124) + iVar2);
  if ((*(int *)((int)this + 0x30) == 4) ||
     (local_18 = *(int *)((int)this + 8), local_10 = *(int *)((int)this + 0x10),
     *(int *)((int)this + 0x30) == 5)) {
    local_18 = *(int *)((int)this + 0x10);
    local_10 = *(int *)((int)this + 8);
  }
  if (uVar7 < uVar7 + param_1[2]) {
    pcVar9 = local_1c + 5;
    pcVar10 = local_24 + 5;
    pbVar4 = (byte *)(pcVar8 + 5);
    local_20 = uVar7;
    do {
      switch(param_2[3]) {
      case '\x01':
      case 'A':
        if (param_2[3] == '\x01') {
          cVar5 = (&DAT_6382e450)[*pcVar8];
          cVar1 = (&DAT_6382e450)[(char)pbVar4[-4]];
        }
        else {
          cVar5 = (&DAT_6382e590)
                  [(int)*param_2 + (int)param_2[8] + (int)(char)pbVar4[3] + (int)*pcVar8];
          cVar1 = (&DAT_6382e590)
                  [(int)(char)pbVar4[-4] + (int)param_2[1] + (int)param_2[9] + (int)(char)pbVar4[4]]
          ;
        }
        pcVar9[-4] = cVar1;
        *local_1c = cVar5;
        pcVar10[-4] = cVar1;
        *local_24 = cVar5;
        iVar6 = (int)(cVar5 >> 1);
        *(int *)(pcVar9 + -1) =
             (int)(cVar1 >> 1) * *(int *)((int)this + 0x118) +
             *(int *)(local_20 * 4 + *(int *)((int)this + 0x114)) + *(int *)(local_18 + 8) + iVar6;
        iVar3 = (int)(cVar1 >> 1) * *(int *)((int)this + 0x118) +
                *(int *)(local_20 * 4 + *(int *)((int)this + 0x114));
        iVar2 = local_18;
        goto LAB_63811d93;
      case -0x7f:
        cVar5 = (&DAT_6382e450)[*pcVar8];
        cVar1 = (&DAT_6382e450)[(char)pbVar4[-4]];
        *local_1c = cVar5;
        pcVar9[-4] = cVar1;
        pcVar10[-4] = cVar1;
        *local_24 = cVar5;
        iVar6 = (int)(cVar5 >> 1);
        *(int *)(pcVar9 + -1) =
             (int)(cVar1 >> 1) * *(int *)((int)this + 0x118) +
             *(int *)(local_20 * 4 + *(int *)((int)this + 0x114)) + *(int *)(local_10 + 8) + iVar6;
        iVar3 = (int)(cVar1 >> 1) * *(int *)((int)this + 0x118) +
                *(int *)(local_20 * 4 + *(int *)((int)this + 0x114));
        iVar2 = local_10;
LAB_63811d93:
        *(int *)(pcVar10 + -1) = iVar3 + *(int *)(iVar2 + 0xc) + iVar6;
        break;
      case -0x3f:
        cVar5 = *(char *)((int)&PTR_LAB_6382e3f0 + (uint)pbVar4[-1]) + '`';
        pcVar10[-1] = cVar5;
        pcVar9[-1] = cVar5;
        cVar5 = *(char *)((int)&PTR_LAB_6382e3f0 + (uint)pbVar4[1]) + '`';
        pcVar10[1] = cVar5;
        pcVar9[1] = cVar5;
        cVar5 = *(char *)((int)&PTR_LAB_6382e3f0 + (uint)*pbVar4) + '`';
        *pcVar10 = cVar5;
        *pcVar9 = cVar5;
        cVar5 = *(char *)((int)&PTR_LAB_6382e3f0 + (uint)pbVar4[2]) + '`';
        pcVar10[2] = cVar5;
        pcVar9[2] = cVar5;
      }
      param_2 = param_2 + 0x10;
      pcVar8 = pcVar8 + 0x10;
      local_1c = local_1c + 8;
      pcVar9 = pcVar9 + 8;
      local_24 = local_24 + 8;
      pcVar10 = pcVar10 + 8;
      pbVar4 = pbVar4 + 0x10;
      local_20 = local_20 + 1;
    } while (local_20 < uVar7 + param_1[2]);
  }
  return;
}


