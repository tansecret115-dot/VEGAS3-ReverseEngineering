/* Module: encn3260.dll
   Function: FUN_6648a1b0
   Address: 6648a1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6648a1b0(void *this,int param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  long lVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  char local_124 [255];
  undefined1 local_25;
  void *local_24;
  long local_20;
  int local_1c;
  int local_18;
  int *local_14;
  long local_10;
  int local_c;
  undefined1 local_5;
  
  local_14 = (int *)0x0;
  local_24 = this;
  if (param_1 != 0) {
    local_20 = 0;
    local_10 = 0;
    local_5 = 0;
    puVar4 = (undefined4 *)FUN_664be280(param_1);
    strncpy(local_124,(char *)*puVar4,0xff);
    local_25 = 0;
    puVar4 = (undefined4 *)FUN_664be2a0(param_1);
    while (puVar4 != (undefined4 *)0x0) {
      pbVar7 = (byte *)*puVar4;
      pcVar13 = s_client_port_664e2414;
      pbVar9 = pbVar7;
      do {
        bVar2 = *pbVar9;
        bVar15 = bVar2 < (byte)*pcVar13;
        if (bVar2 != *pcVar13) {
LAB_6648a23b:
          iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_6648a240;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar15 = bVar2 < (byte)pcVar13[1];
        if (bVar2 != pcVar13[1]) goto LAB_6648a23b;
        pbVar9 = pbVar9 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_6648a240:
      if (iVar10 == 0) {
        pcVar13 = (char *)puVar4[3];
        pcVar5 = strchr(pcVar13,0x2d);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
        local_20 = strtol(pcVar13,(char **)0x0,10);
      }
      else {
        pcVar13 = s_server_port_664e278c;
        pbVar9 = pbVar7;
        do {
          bVar2 = *pbVar9;
          bVar15 = bVar2 < (byte)*pcVar13;
          if (bVar2 != *pcVar13) {
LAB_6648a29b:
            iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_6648a2a0;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar9[1];
          bVar15 = bVar2 < (byte)pcVar13[1];
          if (bVar2 != pcVar13[1]) goto LAB_6648a29b;
          pbVar9 = pbVar9 + 2;
          pcVar13 = pcVar13 + 2;
        } while (bVar2 != 0);
        iVar10 = 0;
LAB_6648a2a0:
        if (iVar10 == 0) {
          pcVar13 = (char *)puVar4[3];
          pcVar5 = strchr(pcVar13,0x2d);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
          local_10 = strtol(pcVar13,(char **)0x0,10);
        }
        else {
          pcVar13 = s_interleaved_664e2780;
          pbVar9 = pbVar7;
          do {
            bVar2 = *pbVar9;
            bVar15 = bVar2 < (byte)*pcVar13;
            if (bVar2 != *pcVar13) {
LAB_6648a2fb:
              iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_6648a300;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar15 = bVar2 < (byte)pcVar13[1];
            if (bVar2 != pcVar13[1]) goto LAB_6648a2fb;
            pbVar9 = pbVar9 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_6648a300:
          if (iVar10 == 0) {
            pcVar13 = (char *)puVar4[3];
            pcVar5 = strchr(pcVar13,0x2d);
            if (pcVar5 != (char *)0x0) {
              *pcVar5 = '\0';
            }
            lVar6 = strtol(pcVar13,(char **)0x0,10);
            local_5 = (undefined1)lVar6;
          }
          else {
            pcVar13 = s_unicast_664e2778;
            pbVar9 = pbVar7;
            do {
              bVar2 = *pbVar9;
              bVar15 = bVar2 < (byte)*pcVar13;
              if (bVar2 != *pcVar13) {
LAB_6648a35b:
                iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_6648a360;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar9[1];
              bVar15 = bVar2 < (byte)pcVar13[1];
              if (bVar2 != pcVar13[1]) goto LAB_6648a35b;
              pbVar9 = pbVar9 + 2;
              pcVar13 = pcVar13 + 2;
            } while (bVar2 != 0);
            iVar10 = 0;
LAB_6648a360:
            if (iVar10 == 0) {
              pcVar13 = s__unicast_664e276c;
            }
            else {
              pcVar13 = s_multicast_664e2760;
              do {
                bVar2 = *pbVar7;
                bVar15 = bVar2 < (byte)*pcVar13;
                if (bVar2 != *pcVar13) {
LAB_6648a39e:
                  iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_6648a3a3;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar15 = bVar2 < (byte)pcVar13[1];
                if (bVar2 != pcVar13[1]) goto LAB_6648a39e;
                pbVar7 = pbVar7 + 2;
                pcVar13 = pcVar13 + 2;
              } while (bVar2 != 0);
              iVar10 = 0;
LAB_6648a3a3:
              if (iVar10 != 0) goto LAB_6648a3d7;
              pcVar13 = s__multicast_664e2754;
            }
            uVar11 = 0xffffffff;
            do {
              pcVar5 = pcVar13;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar5 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar5;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            iVar10 = -1;
            pcVar13 = local_124;
            do {
              pcVar14 = pcVar13;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar14 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar1 != '\0');
            pcVar13 = pcVar5 + -uVar11;
            pcVar5 = pcVar14 + -1;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
          }
        }
      }
LAB_6648a3d7:
      puVar4 = (undefined4 *)FUN_664be2a0(param_1);
      this = local_24;
    }
    iVar10 = FUN_6648c430(local_124);
    local_18 = (int)this + 0x10a;
    local_1c = *(int *)((int)this + 0x10e);
    if (local_1c != 0) {
      piVar8 = (int *)0x0;
      if (local_1c == 0) goto LAB_6648a424;
      do {
        puVar4 = (undefined4 *)FUN_664bab80(local_1c);
        piVar8 = (int *)*puVar4;
LAB_6648a424:
        if (*piVar8 == iVar10) {
          *(undefined2 *)(piVar8 + 1) = (undefined2)local_20;
          *(undefined2 *)((int)piVar8 + 6) = (undefined2)local_10;
          *(undefined1 *)(piVar8 + 2) = local_5;
          local_14 = piVar8;
        }
        else {
          *(undefined4 *)((int)piVar8 + 9) = 1;
        }
        FUN_664bab40(&local_1c);
      } while (local_1c != 0);
    }
  }
  local_c = *(int *)((int)this + 0x112);
  if (local_c != 0) {
    do {
      puVar4 = (undefined4 *)FUN_664bab80(local_c);
      pvVar3 = (void *)*puVar4;
      if (*(int *)((int)pvVar3 + 9) == 0) {
        FUN_664bab60(&local_c);
      }
      else {
        if (pvVar3 != (void *)0x0) {
          FUN_66483730((int)pvVar3);
          operator_delete(pvVar3);
        }
        local_c = (**(code **)(*(int *)((int)this + 0x10a) + 0xc))(local_c);
      }
    } while (local_c != 0);
  }
  return local_14;
}


