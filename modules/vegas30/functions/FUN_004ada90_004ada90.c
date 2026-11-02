/* Module: vegas30.exe
   Function: FUN_004ada90
   Address: 004ada90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ada90(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = param_1;
  iVar6 = 0;
  uVar5 = param_3 & 0x100;
  local_c = 0;
  if (uVar5 == 0) {
    iVar2 = 0;
    local_c = FUN_004aa1a0(param_2);
    if (0 < local_c) {
      do {
        iVar7 = FUN_004aa240(param_2,iVar6);
        if (1 < iVar7) {
          iVar2 = iVar2 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_c);
    }
  }
  else {
    iVar2 = FUN_004aa440(param_2);
    iVar2 = iVar2 + -1;
  }
  iVar7 = 0;
  iVar6 = 1;
  if (0 < iVar2) {
    if (uVar5 != 0) {
      param_3 = 0;
      bVar9 = true;
      while( true ) {
        uVar11 = 0;
        uVar10 = 0;
        uVar3 = FUN_004a9cd0(iVar7);
        pbVar4 = (byte *)FUN_004aa2f0(param_2,uVar3,uVar10,uVar11);
        if ((((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x40) == 0)) && (*(int *)(pbVar4 + 0x50) != 0))
           && (param_3 = FUN_005d9be0(param_1,0,*(int *)(pbVar4 + 0x50)), param_3 != 0)) break;
        iVar7 = iVar7 + 1;
        if (5 < iVar7) {
LAB_004adb4f:
          iVar6 = FUN_004e9f70(param_1,0x28,"DDSDropMakeGroups");
          bVar8 = iVar6 < 0;
          if ((!bVar8) && (bVar9)) {
            FUN_004ea880(param_1);
            iVar6 = FUN_005d9840(param_1,DAT_0064a580,&param_3,0);
            bVar8 = iVar6 < 0;
          }
          if ((-1 < iVar6) && (param_3 != 0)) {
            param_1 = 0;
            do {
              uVar11 = 0;
              uVar10 = 0;
              uVar3 = FUN_004a9cd0(param_1);
              pbVar4 = (byte *)FUN_004aa2f0(param_2,uVar3,uVar10,uVar11);
              if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x40) == 0)) &&
                 (iVar2 = FUN_005d9be0(uVar1,0,*(undefined4 *)(pbVar4 + 0x50)), param_3 != iVar2)) {
                iVar6 = FUN_004ea750(uVar1,*(undefined4 *)(pbVar4 + 0x50),2,1);
                if (-1 < iVar6) {
                  iVar6 = FUN_005d9da0(uVar1,param_3,*(undefined4 *)(pbVar4 + 0x50));
                }
                bVar8 = iVar6 < 0;
              }
              param_1 = param_1 + 1;
            } while (param_1 < 6);
          }
          if (bVar8 == false) {
            FUN_004eb2b0(uVar1);
          }
          FUN_004ea040(uVar1,bVar8);
          return iVar6;
        }
      }
      bVar9 = false;
      goto LAB_004adb4f;
    }
    param_3 = 0;
    if (0 < local_c) {
      do {
        iVar2 = param_3;
        iVar7 = FUN_004aa240(param_2,param_3);
        local_4 = iVar7;
        if (1 < iVar7) {
          local_8 = 0;
          FUN_004e9f70(uVar1,0x28,"DDSDropMakeGroups");
          FUN_004ea880(uVar1);
          iVar6 = FUN_005d9840(uVar1,DAT_0064a580,&local_8,0);
          bVar9 = iVar6 < 0;
          if (!bVar9) {
            param_1 = 0;
            if (0 < iVar7) {
              do {
                pbVar4 = (byte *)FUN_004aa0b0(param_2,param_3,param_1,0);
                if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x40) == 0)) {
                  FUN_004ea750(uVar1,*(undefined4 *)(pbVar4 + 0x50),2,1);
                  iVar6 = FUN_005d9da0(uVar1,local_8,*(undefined4 *)(pbVar4 + 0x50));
                  if ((bVar9 != false) || (iVar6 < 0)) {
                    bVar9 = true;
                  }
                }
                param_1 = param_1 + 1;
              } while (param_1 < local_4);
              if (bVar9 != false) goto LAB_004add19;
            }
            FUN_004eb2b0(uVar1);
          }
LAB_004add19:
          FUN_004ea040(uVar1,bVar9);
          iVar2 = param_3;
        }
        param_3 = iVar2 + 1;
      } while ((int)param_3 < local_c);
    }
  }
  return iVar6;
}


