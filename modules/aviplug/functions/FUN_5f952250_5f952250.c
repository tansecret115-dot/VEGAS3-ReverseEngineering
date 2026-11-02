/* Module: aviplug.dll
   Function: FUN_5f952250
   Address: 5f952250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f952250(uint *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  int **ppiVar4;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  int local_d0;
  int iStack_cc;
  int *local_c8;
  int local_c4;
  int iStack_c0;
  int *local_bc [4];
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int iStack_5c;
  undefined4 local_58 [16];
  undefined4 uStack_18;
  
  if (param_3 == 0) {
    return -6;
  }
  ppiVar4 = local_bc;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar4 = (int *)0x0;
    ppiVar4 = ppiVar4 + 1;
  }
  local_c4 = 0;
  local_d8 = (int *)0x0;
  local_d4 = (int *)0x0;
  local_dc = (int *)0x0;
  local_d0 = FUN_5f9520e0(param_1,param_2,param_3);
  piVar1 = local_c8;
  if (local_d0 == 0) {
    FUN_5f951850(param_1[3],(uint)*(ushort *)(param_2 + 0xe),1000,&local_a0,local_58);
    local_d0 = FUN_5f951b90((int *)local_bc,(IID *)&DAT_5f9eec08,(int *)&DAT_5f9da560,&local_a0);
    piVar1 = local_c8;
    if (local_d0 == 0) {
      local_c4 = 1;
      FUN_5f94fbb0(&local_a0);
      local_9c = DAT_5f9eebbc;
      local_98 = DAT_5f9eebc0;
      local_a0 = DAT_5f9eebb8;
      local_90 = DAT_5f9eeba8;
      local_8c = DAT_5f9eebac;
      local_94 = DAT_5f9eebc4;
      local_84 = DAT_5f9eebb4;
      local_88 = DAT_5f9eebb0;
      piVar1 = (int *)(**(code **)(local_bc[3][1] + 0x50))(local_bc[3] + 1,&local_a0);
      if (-1 < (int)piVar1) {
        (**(code **)*local_bc[3])(local_bc[3],&DAT_5f9eeb58,&local_d8);
        piVar1 = (int *)(**(code **)(*local_c8 + 0x4c))(local_c8,1,&stack0xffffff20);
        if ((-1 < (int)piVar1) &&
           (piVar1 = (int *)(**(code **)(*local_bc[0] + 0x2c))(local_bc[0],local_d4,local_d8),
           -1 < (int)piVar1)) {
          piVar3 = (int *)((param_1[3] != 0) + 2000);
          (**(code **)*local_bc[1])(local_bc[1],&DAT_5f9da560,&local_dc);
          piVar1 = (int *)(**(code **)(*unaff_ESI + 0xc))
                                    (unaff_ESI,&local_d4,&local_d8,&iStack_cc,0,0);
          if (-1 < (int)piVar1) {
            if (((local_c8 != piVar3) || (iStack_cc != 0x7d7)) || (iStack_c0 != 0x7dc)) {
              FUN_5f951740(param_1[3],&local_a0,local_58);
              uStack_18 = 0;
              piVar1 = (int *)(**(code **)(local_bc[3][1] + 0x50))(local_bc[3] + 1,&local_a0);
              if (((int)piVar1 < 0) ||
                 (piVar1 = (int *)(**(code **)(*local_dc + 0x10))
                                            (local_dc,piVar3,iStack_cc,iStack_c0,0,0),
                 (int)piVar1 < 0)) goto LAB_5f952528;
            }
            FUN_5f94fbb0(&local_a0);
            piVar1 = (int *)(**(code **)(*local_bc[2] + 0x1c))(local_bc[2],&local_a0);
            if (-1 < (int)piVar1) {
              iStack_ac = iStack_5c;
              FUN_5f94fbb0(&local_a0);
              piVar1 = (int *)(**(code **)(local_bc[3][1] + 0x1c))(local_bc[3] + 1,&local_a0);
              if (-1 < (int)piVar1) {
                iStack_a8 = iStack_5c;
                *(undefined4 *)(iStack_5c + 0x40) = 0x64737664;
                *(uint *)(iStack_5c + 0x44) = (-(uint)(param_1[3] != 0) & 24000) + 120000;
                piVar1 = (int *)(**(code **)(local_bc[0][2] + 0x1c))(local_bc[0] + 2);
                if (-1 < (int)piVar1) {
                  uStack_a4 = 1;
                  FUN_5f951b50(local_bc,param_1 + 0xb);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_5f952528:
  if (local_dc != (int *)0x0) {
    (**(code **)(*local_dc + 8))(local_dc);
  }
  if (local_d8 != (int *)0x0) {
    (**(code **)(*local_d8 + 8))(local_d8);
  }
  if (local_d4 != (int *)0x0) {
    (**(code **)(*local_d4 + 8))(local_d4);
  }
  FUN_5f951ac0((int *)local_bc);
  if (local_c4 != 0) {
    local_d0 = FUN_5f951a50((int)piVar1);
  }
  return local_d0;
}


