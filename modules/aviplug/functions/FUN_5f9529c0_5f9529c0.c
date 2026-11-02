/* Module: aviplug.dll
   Function: FUN_5f9529c0
   Address: 5f9529c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9529c0(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int *unaff_ESI;
  int **ppiVar2;
  int iVar3;
  int *local_d8;
  int local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int local_c4;
  int local_c0;
  int *local_bc [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_5c;
  undefined4 local_58 [13];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_3 == 0) {
    return -6;
  }
  ppiVar2 = local_bc;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppiVar2 = (int *)0x0;
    ppiVar2 = ppiVar2 + 1;
  }
  local_c4 = 0;
  local_cc = (int *)0x0;
  local_d0 = (int *)0x0;
  local_d8 = (int *)0x0;
  local_c8 = (int *)0x0;
  local_d4 = FUN_5f9527b0(param_1,param_2,param_3,(int *)&local_c8);
  iVar1 = local_c0;
  if (local_d4 == 0) {
    FUN_5f951740((int)local_c8,&local_a0,local_58);
    local_d4 = FUN_5f951b90((int *)local_bc,(IID *)&DAT_5f9eec18,(int *)&DAT_5f9da550,&local_a0);
    iVar1 = local_c0;
    if (local_d4 == 0) {
      local_c4 = 1;
      FUN_5f94fbb0(&local_a0);
      local_a0 = DAT_5f9eebb8;
      local_98 = DAT_5f9eebc0;
      local_9c = DAT_5f9eebbc;
      local_94 = DAT_5f9eebc4;
      local_8c = DAT_5f9eebdc;
      local_90 = DAT_5f9eebd8;
      local_88 = DAT_5f9eebe0;
      local_84 = DAT_5f9eebe4;
      iVar1 = (**(code **)(local_bc[3][1] + 0x50))(local_bc[3] + 1,&local_a0);
      if (-1 < iVar1) {
        (**(code **)*local_bc[3])(local_bc[3],&DAT_5f9eeb58,&local_cc);
        iVar1 = (**(code **)(*local_c8 + 0x4c))(local_c8,1,&stack0xffffff24);
        if ((-1 < iVar1) &&
           (iVar1 = (**(code **)(*local_bc[0] + 0x2c))(local_bc[0],local_d0,local_cc), -1 < iVar1))
        {
          iVar1 = *(int *)(param_3 + 4);
          iVar3 = -1;
          if (iVar1 < 0x169) {
            if (iVar1 == 0x168) {
              iVar3 = 0x3e9;
            }
            else if (iVar1 == 0x58) {
              iVar3 = 0x3eb;
            }
            else if (iVar1 == 0xb4) {
              iVar3 = 0x3ea;
            }
          }
          else if (iVar1 == 0x2d0) {
            iVar3 = 1000;
          }
          (**(code **)*local_bc[1])(local_bc[1],&DAT_5f9da550,&local_d8);
          iVar1 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,&local_cc);
          if (-1 < iVar1) {
            if (local_c0 != iVar3) {
              FUN_5f951850((int)local_c8,0x18,iVar3,&local_a0,local_58);
              uStack_24 = 0;
              uStack_20 = 0;
              iVar1 = (**(code **)(local_bc[3][1] + 0x50))(local_bc[3] + 1,&local_a0);
              if ((iVar1 < 0) ||
                 (iVar1 = (**(code **)(*local_d8 + 0x10))(local_d8,iVar3), iVar1 < 0))
              goto LAB_5f952c86;
            }
            FUN_5f94fbb0(&local_a0);
            iVar1 = (**(code **)(*local_bc[2] + 0x1c))(local_bc[2],&local_a0);
            if (-1 < iVar1) {
              uStack_ac = uStack_5c;
              FUN_5f94fbb0(&local_a0);
              iVar1 = (**(code **)(local_bc[3][1] + 0x1c))(local_bc[3] + 1,&local_a0);
              if (-1 < iVar1) {
                uStack_a8 = uStack_5c;
                iVar1 = (**(code **)(local_bc[0][2] + 0x1c))(local_bc[0] + 2);
                if (-1 < iVar1) {
                  uStack_a4 = 1;
                  FUN_5f951b50(local_bc,param_1 + 4);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_5f952c86:
  if (local_d8 != (int *)0x0) {
    (**(code **)(*local_d8 + 8))(local_d8);
  }
  if (local_cc != (int *)0x0) {
    (**(code **)(*local_cc + 8))(local_cc);
  }
  if (local_d0 != (int *)0x0) {
    (**(code **)(*local_d0 + 8))(local_d0);
  }
  FUN_5f951ac0((int *)local_bc);
  if (local_c4 != 0) {
    local_d4 = FUN_5f951a50(iVar1);
  }
  return local_d4;
}


