/* Module: rmto3260.dll
   Function: FUN_662c4c80
   Address: 662c4c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c4c80(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  bVar1 = false;
  iVar8 = *(int *)(param_1 + 0x44);
  local_18 = 0;
  local_1c = *(int *)(iVar8 + 4);
  if (iVar8 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(iVar8 + 0x10);
  }
  bVar2 = false;
  bVar3 = false;
  local_10 = 0;
  local_14 = 0;
  sVar4 = FUN_662dee20(*(int *)(param_1 + 0x24));
  sVar5 = FUN_662dee20(*(int *)(param_1 + 0x28));
  local_c = 0;
  if ((ushort)local_8 != 0) {
    do {
      if (bVar1) goto LAB_662c4d8a;
      piVar6 = (int *)FUN_662ed930(&local_1c);
      iVar8 = *piVar6;
      if ((*(short *)(iVar8 + 6) != sVar4) || (bVar2)) {
        if ((*(short *)(iVar8 + 6) == sVar5) && (!bVar3)) {
          if (((*(int *)(iVar8 + 0x1a) != 0) && (*(int *)(iVar8 + 0x1e) == 0)) ||
             (*(int *)(iVar8 + 0x16) != 0)) goto LAB_662c4d75;
          if (*(int *)(iVar8 + 0x10) == param_3) {
            bVar3 = true;
            local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(iVar8 + 4));
          }
        }
LAB_662c4d64:
        if ((bVar2) && (bVar3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else if (((*(int *)(iVar8 + 0x1a) == 0) || (*(int *)(iVar8 + 0x1e) != 0)) &&
              (*(int *)(iVar8 + 0x16) == 0)) {
        if (*(int *)(iVar8 + 0x10) == param_2) {
          bVar2 = true;
          local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)(iVar8 + 4));
        }
        goto LAB_662c4d64;
      }
LAB_662c4d75:
      local_c = local_c + 1;
    } while ((ushort)local_c < (ushort)local_8);
  }
  iVar8 = local_18;
  if (bVar1) {
LAB_662c4d8a:
    puVar7 = operator_new(4);
    iVar8 = -0x7ff8fff2;
    if (puVar7 != (undefined2 *)0x0) {
      iVar8 = local_18;
    }
    if (-1 < iVar8) {
      *puVar7 = (undefined2)local_10;
      puVar7[1] = (undefined2)local_14;
      FUN_662ed8a0(*(void **)(param_1 + 0x40),puVar7);
      return iVar8;
    }
  }
  return iVar8;
}


