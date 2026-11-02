/* Module: vegas30.exe
   Function: FUN_005eb380
   Address: 005eb380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005eb380(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte local_d;
  int local_c;
  int local_4;
  
  puVar1 = param_2;
  puVar9 = &DAT_0065c0e0;
  for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  uVar7 = 0;
  uVar4 = 2;
  local_d = 0;
  uVar5 = 4;
  *param_2 = 0x40;
  uVar6 = 2;
  if ((short)param_3 != 0) {
    do {
      uVar4 = uVar6;
      if ((ushort)param_3 < uVar5) break;
      uVar6 = uVar5;
      if (0xf < local_d) {
        puVar1[uVar4] = (char)((uint)local_c >> 8);
        local_d = 0;
        puVar1[(ushort)(uVar4 + 1)] = (char)local_c;
        uVar6 = uVar5 + 2;
        uVar4 = uVar5;
      }
      uVar8 = uVar7 & 0xffff;
      param_2 = (undefined1 *)0x1;
      if (*(char *)(uVar8 + (int)param_1) == *(char *)(uVar8 + 1 + (int)param_1)) {
        do {
          if ((0xffe < (ushort)param_2) || ((param_3 & 0xffff) <= ((uint)param_2 & 0xffff) + uVar8))
          break;
          param_2 = (undefined1 *)((int)param_2 + 1);
        } while (*(char *)(uVar8 + (int)param_1) ==
                 *(char *)(((uint)param_2 & 0xffff) + uVar8 + (int)param_1));
        if ((ushort)param_2 < 0x10) goto LAB_005eb4b9;
        puVar1[uVar6] = 0;
        puVar1[(ushort)(uVar6 + 1)] = (char)((int)param_2 - 0x10U >> 8);
        puVar1[(ushort)(uVar6 + 2)] = (char)param_2 + -0x10;
        uVar5 = uVar6 + 4;
        puVar1[(ushort)(uVar6 + 3)] = *(undefined1 *)(uVar8 + (int)param_1);
        local_c = local_c * 2 + 1;
        uVar7 = uVar7 + (int)param_2;
      }
      else {
LAB_005eb4b9:
        sVar2 = FUN_005eb5c0(param_1,uVar7,param_3,&DAT_0065c0e0,&param_2,&local_4);
        if (sVar2 == 0) {
          uVar5 = uVar6 + 1;
          uVar7 = uVar7 + 1;
          puVar1[uVar6] = *(undefined1 *)(uVar8 + (int)param_1);
          local_c = local_c << 1;
        }
        else {
          iVar3 = (local_4 * 0xfff + uVar7) * 0x10 + -3 + (int)param_2;
          puVar1[uVar6] = (char)((uint)iVar3 >> 8);
          uVar5 = uVar6 + 2;
          puVar1[(ushort)(uVar6 + 1)] = (char)iVar3;
          uVar7 = uVar7 + (int)param_2;
          local_c = local_c * 2 + 1;
        }
      }
      local_d = local_d + 1;
      uVar6 = uVar4;
    } while ((ushort)uVar7 < (ushort)param_3);
  }
  iVar3 = local_c << (0x10 - local_d & 0x1f);
  puVar1[uVar4] = (char)((uint)iVar3 >> 8);
  puVar1[(ushort)(uVar4 + 1)] = (char)iVar3;
  if (uVar5 <= (ushort)param_3) {
    return CONCAT22((short)((uint)iVar3 >> 0x10),uVar5);
  }
  puVar9 = (undefined4 *)(puVar1 + 1);
  for (uVar7 = (param_3 & 0xffff) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = *param_1;
    param_1 = param_1 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *puVar1 = 0x80;
  return (param_3 & 0xffff) + 1;
}


