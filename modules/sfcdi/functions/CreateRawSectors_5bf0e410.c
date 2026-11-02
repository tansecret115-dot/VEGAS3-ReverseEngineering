/* Module: sfcdi.dll
   Function: CreateRawSectors
   Address: 5bf0e410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall CreateRawSectors(unsigned char *,unsigned char *,long,unsigned int,unsigned int)
    */

long CreateRawSectors(uchar *param_1,uchar *param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uchar *puVar9;
  uint uVar10;
  byte *local_10;
  uint local_4;
  
  uVar1 = param_4 & 0x8000;
                    /* 0xe410  7  ?CreateRawSectors@@YGJPAE0JII@Z */
  uVar5 = param_4 & 0xf;
  if (param_5 == 0) {
    return 0;
  }
  local_4 = param_5;
  local_10 = param_1 + 0xe;
  param_5 = (uint)(param_1 + 1);
  pbVar6 = param_1 + 0xd;
  pbVar7 = param_1;
  param_1 = param_1 + 0xc;
  do {
    *pbVar7 = 0;
    pbVar7[0xb] = 0;
    *(undefined4 *)param_5 = 0xffffffff;
    *(undefined4 *)(param_5 + 4) = 0xffffffff;
    *(undefined2 *)(param_5 + 8) = 0xffff;
    *param_1 = (uchar)((uint)param_3 / 0x1194);
    uVar10 = (uint)param_3 / 0x1194 & 0xff;
    uVar2 = param_3 + uVar10 * -0x1194;
    bVar4 = (byte)(uVar2 / 0x4b);
    *pbVar6 = bVar4;
    param_4._0_1_ = (byte)uVar5;
    *local_10 = (char)uVar2 + bVar4 * -0x4b;
    pbVar7[0xf] = (byte)param_4;
    FUN_5bf2b870(param_1,uVar10);
    FUN_5bf2b870(pbVar6,(uint)*pbVar6);
    FUN_5bf2b870(local_10,(uint)*local_10);
    if (uVar1 != 0) {
      *param_1 = *param_1 | 0xa0;
    }
    pbVar8 = pbVar7 + 0x10;
    if (uVar5 == 1) {
      if (param_2 == (uchar *)0x0) {
        for (iVar3 = 0x24c; iVar3 != 0; iVar3 = iVar3 + -1) {
          pbVar8[0] = 0;
          pbVar8[1] = 0;
          pbVar8[2] = 0;
          pbVar8[3] = 0;
          pbVar8 = pbVar8 + 4;
        }
      }
      else {
        puVar9 = param_2;
        for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pbVar8 = *(undefined4 *)puVar9;
          puVar9 = puVar9 + 4;
          pbVar8 = pbVar8 + 4;
        }
      }
      uVar2 = FUN_5bf0e1c0(0,pbVar7,0x810);
      *(uint *)(pbVar7 + 0x810) = uVar2;
      pbVar7[0x814] = 0;
      pbVar7[0x815] = 0;
      pbVar7[0x816] = 0;
      pbVar7[0x817] = 0;
      pbVar7[0x818] = 0;
      pbVar7[0x819] = 0;
      pbVar7[0x81a] = 0;
      pbVar7[0x81b] = 0;
      FUN_5bf0e220((int)pbVar7,pbVar7 + 0x81c);
      FUN_5bf0e2f0((int)pbVar7,pbVar7 + 0x8c8);
      local_10 = local_10 + 0x930;
      param_1 = param_1 + 0x930;
      pbVar8 = pbVar7 + 0x930;
      param_5 = param_5 + 0x930;
      pbVar6 = pbVar6 + 0x930;
      FUN_5bf0e3e0((int)pbVar7);
      if (param_2 != (uchar *)0x0) {
        param_2 = param_2 + 0x800;
      }
    }
    else {
      iVar3 = 0x24c;
      puVar9 = param_2;
      if (uVar5 == 2) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pbVar8 = *(undefined4 *)puVar9;
          puVar9 = puVar9 + 4;
          pbVar8 = pbVar8 + 4;
        }
        param_5 = param_5 + 0x940;
        local_10 = local_10 + 0x940;
        param_1 = param_1 + 0x940;
        pbVar8 = pbVar7 + 0x940;
        pbVar6 = pbVar6 + 0x940;
        param_2 = param_2 + 0x930;
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          pbVar8[0] = 0;
          pbVar8[1] = 0;
          pbVar8[2] = 0;
          pbVar8[3] = 0;
          pbVar8 = pbVar8 + 4;
        }
        param_5 = param_5 + 0x940;
        pbVar8 = pbVar7 + 0x940;
        pbVar6 = pbVar6 + 0x940;
        local_10 = local_10 + 0x940;
        param_1 = param_1 + 0x940;
      }
    }
    param_3 = param_3 + 1;
    local_4 = local_4 - 1;
    pbVar7 = pbVar8;
  } while (local_4 != 0);
  return 0;
}


