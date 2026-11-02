/* Module: rmme3260.dll
   Function: FUN_66264d70
   Address: 66264d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66264d70(void *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  char local_818 [2052];
  int local_14;
  char *local_10;
  int *local_c;
  int local_8;
  
  iVar8 = 0;
  bVar3 = false;
  bVar2 = false;
  *(undefined4 *)((int)this + 6) = 1;
  cVar1 = *param_1;
  pcVar10 = param_1;
  do {
    if (cVar1 == '\0') {
      *(short *)((int)this + 4) = (short)iVar8;
      local_c = this;
      local_8 = iVar8;
      piVar5 = operator_new(iVar8 * 8 + 4);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar8;
        piVar5 = piVar5 + 1;
        piVar9 = piVar5;
        iVar8 = local_8;
        if (-1 < local_8 + -1) {
          do {
            FUN_66264c70(piVar9);
            iVar8 = iVar8 + -1;
            piVar9 = piVar9 + 2;
          } while (iVar8 != 0);
        }
      }
      local_8 = 0;
      *local_c = (int)piVar5;
      piVar5 = local_c;
      if (*param_1 != '\0') {
        local_14 = 0;
        pcVar10 = param_1;
        do {
          iVar4 = local_14;
          cVar1 = *pcVar10;
          iVar8 = 0;
          uVar7 = 0;
          bVar2 = false;
          local_10 = (char *)0x0;
          while ((cVar1 != '\0' &&
                 ((bVar2 || ((param_1 = pcVar10, cVar1 != ',' && (cVar1 != ';'))))))) {
            if ((cVar1 == '\'') && (!bVar2)) {
              uVar7 = (uint)(local_10 == (char *)0x0);
              local_10 = (char *)uVar7;
            }
            if (cVar1 == '\"') {
              if (uVar7 == 0) {
                bVar2 = !bVar2;
                piVar5 = local_c;
                goto LAB_66264e75;
              }
LAB_66264e8d:
              local_818[iVar8] = cVar1;
              iVar8 = iVar8 + 1;
              param_1 = pcVar10;
              if (0x7ff < iVar8) break;
            }
            else {
LAB_66264e75:
              if (((uVar7 != 0) || (bVar2)) ||
                 ((cVar1 != ' ' && (((cVar1 != '\n' && (cVar1 != '\r')) && (cVar1 != '\t'))))))
              goto LAB_66264e8d;
            }
            pcVar11 = pcVar10 + 1;
            pcVar10 = pcVar10 + 1;
            param_1 = pcVar10;
            cVar1 = *pcVar11;
          }
          cVar1 = *pcVar10;
          local_818[iVar8] = '\0';
          if ((cVar1 == ',') || (cVar1 == ';')) {
            if (local_818[0] == '#') {
              param_1 = pcVar10;
              if (local_8 == 0) {
                FUN_66264d20((void *)(*piVar5 + local_14),local_818 + 1);
                FUN_66264d60(*piVar5 + iVar4);
                local_8 = 1;
                *(int *)((int)piVar5 + 6) =
                     *(int *)((int)piVar5 + 6) + **(int **)(*piVar5 + 4 + iVar4);
              }
            }
            else {
              local_10 = strtok(local_818,&DAT_6627cc08);
              pcVar10 = strtok((char *)0x0,&DAT_6627cc08);
              puVar6 = operator_new(0x28);
              if (puVar6 == (undefined4 *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                piVar5 = (int *)FUN_662522d0(puVar6);
              }
              (**(code **)(*piVar5 + 4))(piVar5);
              if (*pcVar10 == '\"') {
                pcVar10 = pcVar10 + 1;
                uVar7 = 0xffffffff;
                pcVar11 = pcVar10;
                do {
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                } while (cVar1 != '\0');
                pcVar10[~uVar7 - 2] = '\0';
              }
              uVar7 = 0xffffffff;
              pcVar11 = pcVar10;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar1 != '\0');
              (**(code **)(*piVar5 + 0x10))(piVar5,pcVar10,~uVar7);
              (**(code **)(**(int **)(*local_c + local_14) + 0x2c))
                        (*(int **)(*local_c + local_14),local_10,piVar5);
              (**(code **)(*piVar5 + 8))(piVar5);
              piVar5 = local_c;
            }
            if (*param_1 == ';') {
              local_8 = 0;
              local_14 = local_14 + 8;
            }
            pcVar10 = param_1 + 1;
            param_1 = pcVar10;
          }
        } while (*pcVar10 != '\0');
      }
      return piVar5;
    }
    if ((cVar1 == '\'') && (!bVar2)) {
      bVar3 = !bVar3;
    }
    if (cVar1 == '\"') {
      if (!bVar3) {
        bVar2 = !bVar2;
        goto LAB_66264dbc;
      }
    }
    else {
LAB_66264dbc:
      if (((!bVar3) && (!bVar2)) && (cVar1 == ';')) {
        iVar8 = iVar8 + 1;
      }
    }
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 1;
  } while( true );
}


