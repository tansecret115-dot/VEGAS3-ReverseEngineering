/* Module: vegas30.exe
   Function: FUN_005eb740
   Address: 005eb740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int __fastcall
FUN_005eb740(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,uint param_5)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined2 uVar3;
  char *pcVar2;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined2 uVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  char local_11;
  char *local_10;
  uint local_c;
  
  uVar10 = 0;
  uVar4 = 4;
  local_c = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)(byte)param_3[2]) * 0x100 +
            CONCAT22((short)((uint)param_2 >> 0x10),(ushort)(byte)param_3[3]);
  local_10 = (char *)0x0;
  uVar3 = (undefined2)(local_c >> 0x10);
  local_11 = '\x10';
  if (*param_3 != -0x80) {
    if (4 < (ushort)param_5) {
      do {
        if (local_11 == '\0') {
          local_11 = '\x10';
          local_c = (uint)(byte)param_3[uVar4] * 0x100 + (uint)(byte)param_3[(ushort)(uVar4 + 1)];
          uVar4 = uVar4 + 2;
        }
        if ((local_c & 0x8000) == 0) {
          pcVar2 = (char *)((uint)local_10 & 0xffff);
          local_10 = local_10 + 1;
          pcVar2[(int)param_4] = param_3[uVar4];
          uVar4 = uVar4 + 1;
        }
        else {
          bVar1 = param_3[(ushort)(uVar4 + 1)];
          uVar6 = (ushort)(byte)param_3[uVar4] * 0x10 + (ushort)(bVar1 >> 4);
          if (uVar6 == 0) {
            pcVar2 = (char *)(uint)(ushort)(uVar4 + 2);
            uVar5 = (uint)bVar1 * 0x100 + 0x10 + (uint)(byte)pcVar2[(int)param_3];
            if ((short)uVar5 != 0) {
              pcVar8 = param_4 + ((uint)local_10 & 0xffff);
              pcVar2 = param_3 + (ushort)(uVar4 + 3);
              uVar12 = uVar5 & 0xffff;
              do {
                *pcVar8 = *pcVar2;
                pcVar8 = pcVar8 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            uVar4 = uVar4 + 4;
            local_10 = local_10 + uVar5;
          }
          else {
            pcVar2 = (char *)(bVar1 & 0xffffff0f);
            pcVar8 = pcVar2 + 3;
            uVar4 = uVar4 + 2;
            if ((short)pcVar8 != 0) {
              iVar13 = 0;
              pcVar7 = pcVar8;
              pcVar11 = param_4 + ((uint)local_10 & 0xffff);
              do {
                iVar9 = iVar13 - (uint)uVar6;
                iVar13 = iVar13 + 1;
                pcVar7 = pcVar7 + -1;
                pcVar2 = (char *)CONCAT31((int3)((uint)param_4 >> 8),
                                          param_4[iVar9 + ((uint)local_10 & 0xffff)]);
                *pcVar11 = param_4[iVar9 + ((uint)local_10 & 0xffff)];
                pcVar11 = pcVar11 + 1;
              } while (pcVar7 != (char *)0x0);
            }
            local_10 = local_10 + (int)pcVar8;
          }
        }
        uVar10 = SUB42(local_10,0);
        uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
        local_c = local_c << 1;
        local_11 = local_11 + -1;
      } while (uVar4 < (ushort)param_5);
    }
    return CONCAT22(uVar3,uVar10);
  }
  pcVar2 = param_3 + 1;
  for (uVar5 = (param_5 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_4 = param_4 + 4;
  }
  for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_4 = param_4 + 1;
  }
  return (param_5 & 0xffff) - 1;
}


