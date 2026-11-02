/* Module: rmto3260.dll
   Function: FUN_662c3f70
   Address: 662c3f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c3f70(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int local_24 [3];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  iVar6 = param_1[0xd];
  local_8 = 0;
  local_c = *(int *)(iVar6 + 4);
  if (iVar6 == 0) {
    param_1._0_2_ = 0;
  }
  else {
    param_1._0_2_ = (ushort)*(undefined4 *)(iVar6 + 0x10);
  }
  local_10 = 0;
  if ((ushort)param_1 != 0) {
    do {
      if (local_8 != 0) break;
      puVar4 = (undefined4 *)FUN_662ed930(&local_c);
      pvVar1 = (void *)*puVar4;
      if (pvVar1 == (void *)0x0) {
        local_8 = -0x7ffbff7f;
      }
      if (-1 < local_8) {
        piVar5 = operator_new(0x2a);
        if (piVar5 == (int *)0x0) {
          local_8 = -0x7ff8fff2;
        }
        if (-1 < local_8) {
          piVar5[2] = 0;
          piVar5[3] = 0;
          uVar3 = FUN_662dee20((int)pvVar1);
          *(undefined2 *)(piVar5 + 1) = uVar3;
          *(undefined2 *)((int)piVar5 + 6) = 0;
          *(undefined4 *)((int)piVar5 + 0x1a) = 0;
          *(undefined4 *)((int)piVar5 + 0x1e) = 0;
          *(undefined4 *)((int)piVar5 + 0x26) = 0;
          *(undefined4 *)((int)piVar5 + 0x16) = 0;
          iVar6 = FUN_66305590((int)pvVar1);
          *piVar5 = iVar6;
          FUN_662deca0(pvVar1,&local_18,&local_14);
          piVar5[4] = local_14;
          FUN_662dedc0(pvVar1,local_24);
          iVar6 = FUN_662ef820(local_24,s_multirate__6630a140);
          if (iVar6 == -1) {
            *(undefined4 *)((int)piVar5 + 0x16) = 1;
            *(short *)(piVar2 + 0x17) = (short)piVar2[0x17] + 1;
            if (piVar2[0xb] == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = piVar2[0xb] + 8;
            }
            piVar5[2] = *(int *)(iVar6 + 0x2a);
            iVar7 = (**(code **)(*piVar2 + 0x80))
                              (piVar2,CONCAT22((short)((uint)(piVar5 + 3) >> 0x10),(short)piVar5[1])
                               ,*(undefined4 *)(iVar6 + 0x26),piVar5 + 3);
            if (iVar7 < 0) {
              piVar5[3] = *(int *)(iVar6 + 0x26);
            }
          }
          else {
            *(undefined4 *)((int)piVar5 + 0x16) = 0;
          }
          FUN_662ed8a0((void *)piVar2[0x11],piVar5);
          FUN_662ef0f0(local_24);
        }
      }
      local_10 = local_10 + 1;
    } while ((ushort)local_10 < (ushort)param_1);
  }
  if (-1 < local_8) {
    iVar6 = piVar2[0xe];
    if (iVar6 == 0) {
      param_1._0_2_ = 0;
    }
    else {
      param_1._0_2_ = (ushort)*(undefined4 *)(iVar6 + 0x10);
    }
    local_c = *(int *)(iVar6 + 4);
    uVar8 = 0;
    if ((ushort)param_1 != 0) {
      do {
        if (local_8 != 0) break;
        puVar4 = (undefined4 *)FUN_662ed930(&local_c);
        pvVar1 = (void *)*puVar4;
        if (pvVar1 == (void *)0x0) {
          local_8 = -0x7ffbff7f;
        }
        if (-1 < local_8) {
          FUN_662dedc0(pvVar1,local_24);
          iVar6 = FUN_662ef820(local_24,s_logical__6630a12c);
          if (iVar6 == 0) {
            iVar6 = FUN_662ef820(local_24,s_logical_fileinfo_6630a118);
            if (iVar6 == 0) {
              piVar2[8] = (int)pvVar1;
            }
            else {
              local_8 = (**(code **)(*piVar2 + 0x4c))(piVar2,pvVar1);
            }
          }
          FUN_662ef0f0(local_24);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ushort)param_1);
    }
    if (-1 < local_8) {
      if (piVar2[8] != 0) {
        local_8 = (**(code **)(*piVar2 + 0x58))(piVar2,piVar2[8]);
      }
      if ((-1 < local_8) && (local_8 = (**(code **)(*piVar2 + 0x60))(piVar2), -1 < local_8)) {
        local_8 = (**(code **)(*piVar2 + 0x5c))(piVar2);
      }
    }
  }
  return local_8;
}


