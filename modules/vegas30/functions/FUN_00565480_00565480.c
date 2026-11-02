/* Module: vegas30.exe
   Function: FUN_00565480
   Address: 00565480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00565480(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL hMem;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint *unaff_retaddr;
  int *piStack_350;
  int *local_34c;
  int *local_348;
  int local_344;
  undefined8 local_340;
  int iStack_338;
  int iStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  int iStack_328;
  undefined1 auStack_314 [4];
  WCHAR aWStack_310 [258];
  undefined1 auStack_10c [2];
  undefined2 uStack_10a;
  int iStack_4;
  
  local_34c = (int *)0x0;
  local_344 = 0;
  local_348 = (int *)0x0;
  local_340._0_4_ = 0;
  (**(code **)(*param_3 + 4))(param_3);
  iVar3 = FUN_005f6990(&local_344);
  if (-1 < iVar3) {
    uVar10 = ftol();
    local_340 = ftol();
    hMem = GlobalAlloc(0x40,0x20);
    local_34c = GlobalLock(hMem);
    if (local_34c == (int *)0x0) {
      local_34c = (int *)0x0;
      iVar3 = -0x7ff8fff2;
    }
    else {
      local_34c[2] = 0;
      local_34c[4] = 0;
      *local_34c = (int)&PTR_LAB_0061b574;
      local_34c[1] = 0;
      local_34c[3] = 0;
      local_34c[5] = 0;
      local_34c[6] = 0;
      (**(code **)(*local_34c + 4))(local_34c);
      if (local_348 == (int *)0x0) {
        (**(code **)(*(int *)local_34c[6] + 8))((int *)local_34c[6]);
        local_34c[2] = 0;
        local_34c[4] = 0;
        local_34c[6] = 0;
        local_34c[3] = 0;
        local_34c[5] = 0;
      }
      else {
        local_34c[6] = (int)local_348;
        (**(code **)(*local_348 + 4))(local_348);
        *(undefined8 *)(local_34c + 2) = uVar10;
        local_34c[4] = (int)local_348;
        local_34c[5] = local_344;
      }
      iVar3 = (**(code **)(*DAT_0064b510 + 0x54))(DAT_0064b510,&stack0xfffffca8,L".avi");
      if (-1 < iVar3) {
        uVar4 = (**(code **)(*piStack_350 + 0x10))(piStack_350);
        iVar3 = iStack_4;
        puVar8 = (undefined4 *)((int)&local_340 + 4);
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        iVar6 = *(int *)(iVar3 + 0x30);
        local_340._4_4_ = 0x28;
        iStack_338 = *(int *)(iVar6 + 4);
        iStack_334 = *(int *)(iVar6 + 8);
        uStack_32c = 0;
        puVar8 = (undefined4 *)(iVar3 + 0x38);
        iStack_328 = (iStack_338 * 3 + 3U & 0xfffffffc) * iStack_334;
        uStack_330 = 0x180001;
        iVar3 = (**(code **)(*DAT_0064b510 + 0x74))
                          (DAT_0064b510,uVar4,0,0,0,(int)&local_340 + 4,1,puVar8,1);
        if (-1 < iVar3) {
          uVar4 = FUN_005653f0(iStack_334,uStack_330,unaff_retaddr[0x14],unaff_retaddr[0x15]);
          iVar3 = (**(code **)(*piStack_350 + 0x44))(piStack_350,uVar4);
          if (iVar3 < 0) {
            iVar3 = -0x7fffbfff;
          }
          else {
            unaff_EBX = (int *)0x0;
            iVar3 = (**(code **)(*piStack_350 + 0x60))(piStack_350,&stack0xfffffcac);
            if (-1 < iVar3) {
              if (param_4 == 0) {
                local_340._0_4_ = *(undefined4 *)(iRam00000424 + 0x12);
                *(undefined4 *)(iRam00000424 + 0x12) = 0;
                puVar7 = puVar8;
                puVar9 = (undefined4 *)(iRam00000428 + 8);
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar9 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar9 = puVar9 + 1;
                }
                puVar7 = (undefined4 *)(iRam00000428 + 0x50);
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar7 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar7 = puVar7 + 1;
                }
                iVar3 = (**(code **)(*piStack_350 + 100))(piStack_350,0);
                *(int **)(*(int *)(unaff_ESI + 0x424) + 0x12) = local_348;
                (**(code **)(*unaff_EBP + 0x68))(unaff_EBP,unaff_ESI);
              }
              else {
                puVar7 = puVar8;
                puVar9 = (undefined4 *)(iRam00000428 + 8);
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar9 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar9 = puVar9 + 1;
                }
                puVar7 = (undefined4 *)(iRam00000428 + 0x50);
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar7 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar7 = puVar7 + 1;
                }
                iVar3 = (**(code **)(*piStack_350 + 100))(piStack_350,0);
              }
              if (-1 < iVar3) {
                iVar3 = (**(code **)(*piStack_350 + 0x34))(piStack_350,&local_348,0,0,0);
                if (-1 < iVar3) {
                  iVar3 = (**(code **)(*local_348 + 0x3c))(local_348,local_34c,0);
                  if (-1 < iVar3) {
                    MultiByteToWideChar(0,1,(LPCSTR)param_3,-1,aWStack_310,0x104);
                    uStack_10a = 0;
                    iVar3 = (**(code **)(*local_348 + 0x1c))(local_348,aWStack_310);
                    if (-1 < iVar3) {
                      iVar3 = (**(code **)(*local_348 + 0x44))(local_348,param_2);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(*param_2 + 8))(param_2);
  if (local_348 != (int *)0x0) {
    (**(code **)(*local_348 + 8))(local_348);
  }
  if (piStack_350 != (int *)0x0) {
    (**(code **)(*piStack_350 + 8))(piStack_350);
  }
  if (local_34c != (int *)0x0) {
    (**(code **)(*local_34c + 8))(local_34c);
  }
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  if ((-1 < iVar3) && (iVar6 = *(int *)(iStack_4 + 8), 2 < *(int *)(iVar6 + 0x128))) {
    piStack_350 = *(int **)(iVar6 + 0x154);
    if (piStack_350 == (int *)0x0) {
      piStack_350 = (int *)&DAT_0060f98c;
    }
    uVar5 = *(uint *)(iVar6 + 0x110) + *unaff_retaddr;
    uVar1 = unaff_retaddr[3];
    iVar6 = *(int *)(iVar6 + 0x114) + unaff_retaddr[1] +
            (uint)CARRY4(*(uint *)(iVar6 + 0x110),*unaff_retaddr);
    uVar2 = unaff_retaddr[2];
    SfPrintF(auStack_314,"%I64d",uVar5,iVar6);
    SfPrintF(auStack_10c,"%I64d",uVar2 + uVar5,uVar1 + iVar6 + (uint)CARRY4(uVar2,uVar5));
    FUN_0057e990(param_2,piStack_350,auStack_314,auStack_10c);
  }
  return iVar3;
}


