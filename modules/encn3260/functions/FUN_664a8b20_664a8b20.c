/* Module: encn3260.dll
   Function: FUN_664a8b20
   Address: 664a8b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a8b20(int param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  int local_18;
  int local_c;
  int *local_8;
  
  iVar10 = 0;
  local_c = 0;
  local_18 = 0;
  bVar2 = false;
  bVar3 = false;
  local_8 = (int *)0x0;
  (**(code **)(*param_2 + 0x30))(param_2,&DAT_664e3650,&local_8);
  if (local_8 != (int *)0x0) {
    pbVar4 = (byte *)(**(code **)(*local_8 + 0x1c))(local_8);
    if ((pbVar4 != (byte *)0x0) && (0 < DAT_664e398c)) {
      ppuVar5 = &PTR_s_NoTransition_664e3984;
      do {
        pbVar7 = *ppuVar5;
        pbVar9 = pbVar4;
        if (pbVar7 != (byte *)0x0) {
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_664a8ba7:
              iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_664a8bac;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_664a8ba7;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_664a8bac:
          if (iVar8 == 0) {
            bVar2 = true;
            local_c = iVar10;
          }
        }
        iVar10 = iVar10 + 1;
        ppuVar5 = ppuVar5 + 3;
      } while (iVar10 < DAT_664e398c);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  iVar10 = 0;
  (**(code **)(*param_2 + 0x30))(param_2,s_subType_664e3648,&local_8);
  if (bVar2) {
    if (local_8 == (int *)0x0) goto LAB_664a8c90;
    pbVar4 = (byte *)(**(code **)(*local_8 + 0x1c))(local_8);
    if (pbVar4 != (byte *)0x0) {
      if (0 < *(int *)(&DAT_664e3988 + local_c * 0xc)) {
        puVar6 = (undefined4 *)((&PTR_PTR_664e3980)[local_c * 3] + 4);
        do {
          pbVar7 = (byte *)*puVar6;
          pbVar9 = pbVar4;
          if (pbVar7 != (byte *)0x0) {
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_664a8c5d:
                iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_664a8c62;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_664a8c5d;
              pbVar7 = pbVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_664a8c62:
            if (iVar8 == 0) {
              bVar3 = true;
              local_18 = iVar10;
            }
          }
          iVar10 = iVar10 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar10 < *(int *)(&DAT_664e3988 + local_c * 0xc));
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
LAB_664a8c90:
  if ((bVar3) && (bVar2)) {
    *(int *)(param_1 + 0x19c) = local_c;
    *(int *)(param_1 + 0x1a0) = local_18;
    *(undefined4 *)(param_1 + 0x1a8) =
         *(undefined4 *)((&PTR_PTR_664e3980)[local_c * 3] + local_18 * 8);
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    return 0;
  }
  return 0x80004005;
}


