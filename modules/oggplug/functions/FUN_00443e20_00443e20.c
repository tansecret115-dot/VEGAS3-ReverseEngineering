/* Module: oggplug.dll
   Function: FUN_00443e20
   Address: 00443e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00443e20(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  int local_14;
  uint local_10;
  uint local_c;
  
  piVar1 = param_1;
  do {
    if (param_1[0x16] == 4) {
      iVar3 = FUN_00441bc0(param_1 + 0x1e,&local_20);
      uVar2 = local_c;
      uVar4 = local_10;
      if (iVar3 == -1) {
        return 0xfffffffd;
      }
      if (0 < iVar3) {
        iVar3 = FUN_00432370(param_1 + 0x94,&local_20);
        if (iVar3 == 0) {
          piVar10 = param_1 + 0x78;
          iVar3 = FUN_00432040((int)piVar10,(undefined4 *)0x0);
          FUN_00431c60((int)piVar10,param_1 + 0x94);
          iVar5 = FUN_00432040((int)piVar10,(undefined4 *)0x0);
          *(double *)(param_1 + 0x1c) = (double)(iVar5 - iVar3) + *(double *)(param_1 + 0x1c);
          *(double *)(param_1 + 0x1a) = (double)(local_1c * 8) + *(double *)(param_1 + 0x1a);
          if (((uVar4 & uVar2) != 0xffffffff) && (local_14 == 0)) {
            if (param_1[1] == 0) {
              param_1 = (int *)0x0;
            }
            else {
              param_1 = (int *)param_1[0x18];
            }
            uVar6 = FUN_00432040((int)piVar10,(undefined4 *)0x0);
            uVar9 = uVar4 - uVar6;
            iVar3 = (uVar2 - ((int)uVar6 >> 0x1f)) - (uint)(uVar4 < uVar6);
            if (0 < (int)param_1) {
              puVar7 = (uint *)piVar1[0x11];
              do {
                bVar11 = CARRY4(uVar9,*puVar7);
                uVar9 = uVar9 + *puVar7;
                iVar3 = iVar3 + puVar7[1] + (uint)bVar11;
                puVar7 = puVar7 + 2;
                param_1 = (int *)((int)param_1 + -1);
              } while (param_1 != (int *)0x0);
            }
            piVar1[0x14] = uVar9;
            piVar1[0x15] = iVar3;
          }
          return 1;
        }
      }
    }
    if (2 < param_1[0x16]) {
      if (param_2 == 0) {
        return 0;
      }
      uVar4 = FUN_00442990(param_1,&local_30,0xffffffff);
      if ((int)uVar4 < 0) {
        return 0xfffffffe;
      }
      *(double *)(param_1 + 0x1a) = (double)(local_2c * 8) + *(double *)(param_1 + 0x1a);
      if (param_1[0x16] == 4) {
        iVar3 = FUN_00440f10(&local_30);
        if (param_1[0x17] != iVar3) {
          FUN_00443750((int)param_1);
          if (param_1[1] == 0) {
            FUN_00430070((undefined4 *)param_1[0x12]);
            FUN_0042ffd0((int *)param_1[0x13]);
          }
        }
      }
    }
    if (param_1[0x16] != 4) {
      if (param_1[0x16] < 3) {
        if (param_1[1] == 0) {
          FUN_00442850(param_1,(uint *)param_1[0x12],(int *)param_1[0x13],param_1 + 0x17,&local_30);
          param_1[0x18] = param_1[0x18] + 1;
        }
        else {
          iVar5 = FUN_00440f10(&local_30);
          iVar3 = param_1[0xd];
          iVar8 = 0;
          param_1[0x17] = iVar5;
          if (0 < iVar3) {
            piVar10 = (int *)param_1[0x10];
            do {
              if (*piVar10 == iVar5) break;
              iVar8 = iVar8 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar8 < iVar3);
          }
          if (iVar8 == iVar3) {
            return 0xffffff77;
          }
          param_1[0x18] = iVar8;
          FUN_00440fa0(param_1 + 0x1e,iVar5);
          FUN_00441b70((int)(param_1 + 0x1e));
          param_1[0x16] = 3;
        }
      }
      FUN_00443dd0((int)param_1);
    }
    FUN_00441860(param_1 + 0x1e,&local_30);
  } while( true );
}


