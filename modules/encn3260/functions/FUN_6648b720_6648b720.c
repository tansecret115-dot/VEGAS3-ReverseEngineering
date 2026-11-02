/* Module: encn3260.dll
   Function: FUN_6648b720
   Address: 6648b720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648b720(void *this,void *param_1,void *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  byte *pbVar15;
  int local_24 [3];
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar3 = FUN_664bd670(param_2,s_Alert_664e2540);
  local_c = FUN_664bd670(param_2,s_MaximumASMBandwidth_664e2830);
  iVar4 = FUN_664bd670(param_2,s_DataConvertBuffer_664e281c);
  if (iVar3 == 0) {
    if (local_c == 0) {
      if (iVar4 == 0) {
        uVar14 = *(undefined4 *)((int)param_2 + 0xc);
        pbVar15 = &DAT_664e253c;
      }
      else {
        iVar3 = (**(code **)(**(int **)((int)param_1 + 0x68) + 0x30))
                          (*(int **)((int)param_1 + 0x68),s_DataConvertBuffer_664e281c,&DAT_664e2818
                           ,*(undefined4 *)((int)param_2 + 0x10));
        if (iVar3 == 0) {
          uVar14 = *(undefined4 *)((int)param_2 + 0xc);
          pbVar15 = &DAT_664e2538;
        }
        else {
          uVar14 = *(undefined4 *)((int)param_2 + 0xc);
          pbVar15 = &DAT_664e253c;
        }
      }
    }
    else {
      iVar3 = FUN_664bd670(param_2,s_Session_664e23cc);
      if (((iVar3 != 0) && (iVar3 = FUN_664be4b0(iVar3), iVar3 != 0)) &&
         (local_10 = (int *)FUN_664be280(iVar3), local_10 != (int *)0x0)) {
        local_18 = *(int *)((int)this + 0x44);
        local_14 = (int)this + 0x40;
        piVar9 = local_10;
        while (local_10 = piVar9, local_18 != 0) {
          if (local_18 == 0) {
            piVar11 = (int *)0x0;
          }
          else {
            puVar5 = (undefined4 *)FUN_664bab80(local_18);
            piVar11 = (int *)*puVar5;
          }
          piVar9 = FUN_664bb2e0(local_24,piVar9);
          pbVar15 = (byte *)*piVar9;
          pbVar7 = *(byte **)(*piVar11 + 0xe6);
          do {
            bVar2 = *pbVar7;
            bVar13 = bVar2 < *pbVar15;
            if (bVar2 != *pbVar15) {
LAB_6648b884:
              iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_6648b889;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar7[1];
            bVar13 = bVar2 < pbVar15[1];
            if (bVar2 != pbVar15[1]) goto LAB_6648b884;
            pbVar7 = pbVar7 + 2;
            pbVar15 = pbVar15 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_6648b889:
          FUN_664bb3e0(local_24);
          if (iVar3 == 0) {
            param_1 = (void *)*piVar11;
          }
          FUN_664bab40(&local_18);
          piVar9 = local_10;
        }
      }
      iVar3 = FUN_664be4b0(local_c);
      if ((iVar3 != 0) && (puVar5 = (undefined4 *)FUN_664be280(iVar3), puVar5 != (undefined4 *)0x0))
      {
        puVar8 = operator_new(0x28);
        if (puVar8 == (undefined4 *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)FUN_664bad50(puVar8);
        }
        uVar10 = 0xffffffff;
        local_10 = (int *)*piVar9;
        pcVar12 = (char *)*puVar5;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar3 = FUN_664bb8a0(puVar5,1);
        (*(code *)local_10[4])(piVar9,iVar3,uVar10);
        (**(code **)(*piVar9 + 4))(piVar9);
        local_8 = (**(code **)(**(int **)((int)param_1 + 0x68) + 0x34))
                            (*(int **)((int)param_1 + 0x68),0,s_MaximumASMBandwidth_664e2830,piVar9)
        ;
        (**(code **)(*piVar9 + 8))(piVar9);
      }
      if (local_8 == 0) {
        uVar14 = *(undefined4 *)((int)param_2 + 0xc);
        pbVar15 = &DAT_664e2538;
      }
      else {
        uVar14 = *(undefined4 *)((int)param_2 + 0xc);
        pbVar15 = &DAT_664e253c;
      }
    }
  }
  else {
    iVar3 = FUN_664be4b0(iVar3);
    if ((iVar3 != 0) && (puVar5 = (undefined4 *)FUN_664be280(iVar3), puVar5 != (undefined4 *)0x0)) {
      pcVar12 = (char *)*puVar5;
      puVar5 = (undefined4 *)FUN_664be2a0(iVar3);
      if (puVar5 != (undefined4 *)0x0) {
        uVar14 = *puVar5;
        iVar3 = **(int **)((int)param_1 + 0x68);
        lVar6 = strtol(pcVar12,(char **)0x0,10);
        local_8 = (**(code **)(iVar3 + 0x4c))(*(undefined4 *)((int)param_1 + 0x68),0,lVar6,uVar14);
      }
    }
    if (local_8 == 0) {
      uVar14 = *(undefined4 *)((int)param_2 + 0xc);
      pbVar15 = &DAT_664e2538;
    }
    else {
      uVar14 = *(undefined4 *)((int)param_2 + 0xc);
      pbVar15 = &DAT_664e253c;
    }
  }
  piVar9 = FUN_6648c780(uVar14,pbVar15);
  FUN_6648c8f0(param_1,piVar9,(char *)0x0,(char *)0x0);
  if (piVar9 != (int *)0x0) {
    (**(code **)*piVar9)(1);
  }
  return 0;
}


