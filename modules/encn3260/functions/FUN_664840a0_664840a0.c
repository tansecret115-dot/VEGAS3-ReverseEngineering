/* Module: encn3260.dll
   Function: FUN_664840a0
   Address: 664840a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664840a0(int *param_1,int *param_2,char *param_3,int param_4,int *param_5,undefined4 param_6
                ,int *param_7,int *param_8,int param_9,undefined2 param_10,uint param_11)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar2 = param_1;
  local_18 = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_8 = (int *)0x0;
  if (param_1[-0xb] == 0) {
    param_1[-0xb] = (int)param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  if (piVar2[0xe] == 0) {
    piVar2[0xe] = (int)param_5;
    (**(code **)(*param_5 + 4))(param_5);
  }
  piVar8 = (int *)piVar2[-10];
  piVar12 = piVar2 + -10;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    *piVar12 = 0;
  }
  iVar4 = (*(code *)**(undefined4 **)piVar2[-0xb])((undefined4 *)piVar2[-0xb],&DAT_664dc5f0);
  if (iVar4 != 0) {
    return (int)piVar12;
  }
  piVar8 = (int *)piVar2[0xd];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    piVar2[0xd] = 0;
  }
  (*(code *)**(undefined4 **)piVar2[-0xb])((undefined4 *)piVar2[-0xb],&DAT_664dc7a0,piVar2 + 0xd);
  iVar4 = (*(code *)**(undefined4 **)piVar2[-0xb])
                    ((undefined4 *)piVar2[-0xb],&DAT_664dcb00,&local_8);
  uVar9 = param_11;
  if (iVar4 == 0) {
    param_1 = (int *)0x0;
    param_5 = (int *)0x0;
    local_c = (int *)0x0;
    iVar4 = (**(code **)(*local_8 + 0xc))(local_8,s_ConnectionTimeOut_664e233c,&param_1);
    if (iVar4 == 0) {
      pcVar5 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      iVar4 = atoi(pcVar5);
      *(int *)((int)piVar2 + 0x15a) = iVar4;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    if (param_9 != 0) {
      iVar4 = (**(code **)(*local_8 + 0xc))(local_8,s_HTTPProxySupport_664e2328,&param_1);
      if (iVar4 == 0) {
        pcVar5 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
        iVar4 = atoi(pcVar5);
        if ((((iVar4 != 0) &&
             (iVar4 = (**(code **)(*local_8 + 0xc))(local_8,s_HTTPProxyHost_664e2318,&param_5),
             iVar4 == 0)) &&
            (iVar4 = (**(code **)(*local_8 + 0xc))(local_8,s_HTTPProxyPort_664e2308,&local_c),
            iVar4 == 0)) &&
           ((iVar4 = (**(code **)(*param_5 + 0x18))(param_5), iVar4 != 0 &&
            (iVar4 = (**(code **)(*local_c + 0x18))(local_c), iVar4 != 0)))) {
          *(undefined4 *)((int)piVar2 + 0x12e) = 1;
          pcVar5 = (char *)(**(code **)(*param_5 + 0x1c))(param_5);
          FUN_664bb5e0(piVar2 + 0x2a,pcVar5);
          pcVar5 = (char *)(**(code **)(*local_c + 0x1c))(local_c);
          iVar4 = atoi(pcVar5);
          *(short *)(piVar2 + 0x2d) = (short)iVar4;
        }
        if (param_5 != (int *)0x0) {
          (**(code **)(*param_5 + 8))(param_5);
          param_5 = (int *)0x0;
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
          local_c = (int *)0x0;
        }
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    iVar4 = (**(code **)(*local_8 + 0xc))(local_8,s_RTSPNoReuseConnection_664e22f0,&param_1);
    uVar9 = param_11;
    if (iVar4 == 0) {
      pcVar5 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      iVar4 = atoi(pcVar5);
      uVar9 = (uint)(iVar4 == 1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    iVar4 = (**(code **)(*local_8 + 0xc))(local_8,s_LoadTest_664e22e4,&param_1);
    if (iVar4 == 0) {
      pcVar5 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      iVar4 = atoi(pcVar5);
      *(uint *)((int)piVar2 + 0x13a) = (uint)(iVar4 == 1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  if (*(int *)((int)piVar2 + 0x102) == 0) {
    pvVar6 = operator_new(0x18);
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_664db520(pvVar6,10);
    }
    *(undefined4 *)((int)piVar2 + 0x102) = uVar7;
  }
  if (*(int *)((int)piVar2 + 0x106) == 0) {
    pvVar6 = operator_new(0x18);
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_664db520(pvVar6,10);
    }
    *(undefined4 *)((int)piVar2 + 0x106) = uVar7;
  }
  if (*(int *)((int)piVar2 + 0x10a) == 0) {
    pvVar6 = operator_new(0x18);
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_664db520(pvVar6,10);
    }
    *(undefined4 *)((int)piVar2 + 0x10a) = uVar7;
  }
  FUN_664bb5e0(piVar2 + 0x27,param_3);
  *(undefined2 *)(piVar2 + 10) = (undefined2)param_4;
  *(undefined4 *)((int)piVar2 + 0x2e) = param_6;
  *(int *)((int)piVar2 + 0x132) = param_9;
  *(undefined2 *)((int)piVar2 + 0x162) = param_10;
  *(uint *)((int)piVar2 + 0x136) = uVar9;
  if ((param_7 != (int *)0x0) && (piVar2[0x14] == 0)) {
    piVar2[0x14] = (int)param_7;
    (**(code **)(*param_7 + 4))(param_7);
  }
  piVar8 = (int *)piVar2[0x15];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    piVar2[0x15] = 0;
  }
  iVar4 = (**(code **)(*(int *)piVar2[-10] + 0xc))((int *)piVar2[-10],&DAT_664dd5a0,&local_18);
  if ((iVar4 != 0) ||
     (iVar4 = (**(code **)*local_18)(local_18,&DAT_664dd5a0,piVar2 + 0x15), piVar8 = param_8,
     iVar4 != 0)) goto LAB_664845e7;
  if (param_8 != (int *)0x0) {
    piVar1 = (int *)piVar2[0x13];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar2[0x13] = 0;
    }
    piVar2[0x13] = (int)piVar8;
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if (piVar2[0x17] == 0) {
    param_4 = 0;
    iVar4 = (*(code *)**(undefined4 **)piVar2[-0xb])
                      ((undefined4 *)piVar2[-0xb],&DAT_664dcb30,&param_4);
    if (iVar4 == 0) {
      piVar2[0x17] = param_4;
    }
  }
  if (piVar2[0x16] == 0) {
    iVar4 = (**(code **)*param_2)(param_2,&DAT_664dc710,&local_10);
    if ((iVar4 != 0) ||
       ((**(code **)(*local_10 + 0x18))(local_10,&local_14), local_14 == (int *)0x0))
    goto LAB_664845e7;
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    piVar8 = (int *)piVar2[0x16];
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
      piVar2[0x16] = 0;
    }
    piVar2[0x16] = (int)local_14;
    if (piVar2 == (int *)0x30) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = piVar2 + 4;
    }
    (**(code **)(*local_14 + 0xc))(local_14,piVar8);
    if ((*(int *)((int)piVar2 + 0x12e) == 0) && (*(int *)((int)piVar2 + 0x12a) == 0)) {
      bVar3 = FUN_664d02a0(piVar2[0x27],*(int *)(piVar2[0x27] + -8));
      if (CONCAT31(extraout_var,bVar3) != 0) {
        pbVar11 = (byte *)piVar2[0x27];
LAB_66484557:
        uVar9 = FUN_664d0320(pbVar11);
        iVar4 = FUN_664d0260(uVar9);
        (**(code **)(piVar2[4] + 0xc))(piVar2 + 4,0,iVar4);
        goto LAB_66484589;
      }
      piVar8 = (int *)piVar2[0x16];
      iVar4 = piVar2[0x27];
      iVar10 = *piVar8;
    }
    else {
      bVar3 = FUN_664d02a0(piVar2[0x2a],*(int *)(piVar2[0x2a] + -8));
      if (CONCAT31(extraout_var_00,bVar3) != 0) {
        pbVar11 = (byte *)piVar2[0x2a];
        goto LAB_66484557;
      }
      piVar8 = (int *)piVar2[0x16];
      iVar4 = piVar2[0x2a];
      iVar10 = *piVar8;
    }
    (**(code **)(iVar10 + 0x10))(piVar8,iVar4);
  }
LAB_66484589:
  piVar1 = (int *)piVar2[0x12];
  piVar8 = piVar2 + 0x12;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar8 = 0;
  }
  iVar4 = (*(code *)**(undefined4 **)piVar2[-0xb])((undefined4 *)piVar2[-0xb],&DAT_664dc6c0,piVar8);
  if ((((iVar4 == 0) && (iVar4 = *(int *)((int)piVar2 + 0x14e), iVar4 != 0)) &&
      (*(int *)(iVar4 + 0xc) != 0)) && (*piVar8 != 0)) {
    *(undefined4 *)(iVar4 + 0xc) = 0;
    (**(code **)(*(int *)*piVar8 + 0x14))
              ((int *)*piVar8,*(undefined4 *)(*(int *)((int)piVar2 + 0x14e) + 0x10));
  }
LAB_664845e7:
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
    local_18 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return (int)piVar12;
}


