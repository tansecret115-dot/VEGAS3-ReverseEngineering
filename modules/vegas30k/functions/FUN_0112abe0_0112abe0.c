/* Module: vegas30k.dll
   Function: FUN_0112abe0
   Address: 0112abe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0112abe0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = param_1;
  piVar1 = (int *)*param_1;
  iVar6 = *piVar1;
  iVar5 = *(int *)(iVar6 + 0x34c);
  FUN_01012de0(param_1,iVar6);
  iVar4 = FUN_010128d0(param_1,0,0,0x96,0,0,0x20,0);
  if (-1 < iVar4) {
    iVar4 = FUN_010128d0(param_1,1,0,0x10,0,0,8,0);
    if (-1 < iVar4) {
      iVar4 = FUN_010128d0(param_1,2,0,1,0,0,9,0);
      if (-1 < iVar4) {
        iVar4 = FUN_010128d0(param_1,3,0,1,0,0,0x89,0);
        if (-1 < iVar4) {
          iVar4 = param_1[9];
          *(undefined1 *)((int)param_1 + 0x10e) = 0x22;
          param_1[0x44] = iVar4;
          param_1._0_2_ = CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)iVar4 >> 8),param_1._0_2_);
          param_1 = (int *)CONCAT13((char)iVar4,param_1._0_3_);
          piVar3[0x45] = (int)param_1;
          piVar3[0x46] = *(int *)(iVar5 + 0x10) << 0xb;
          iVar5 = *(int *)(iVar5 + 0x10) << 0xb;
          param_1._0_2_ = CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18));
          param_1 = (int *)(uint)CONCAT12((char)((uint)iVar5 >> 8),param_1._0_2_);
          piVar3[0x47] = (int)param_1;
          ISO9660_BuildShortDateTime
                    ((_SYSTEMTIME *)((int)piVar3 + 0xb2a),(tagISO9660_DATE_TIME *)(piVar3 + 0x48));
          *(undefined1 *)((int)piVar3 + 0x127) = 2;
          *(undefined4 *)((int)piVar3 + 0x12a) = 0x1000001;
          *(undefined1 *)((int)piVar3 + 0x12e) = 1;
          iVar5 = FUN_010133b0(piVar3,iVar6);
          if (-1 < iVar5) {
            uVar2 = piVar3[0x1b];
            param_1._0_2_ = CONCAT11((char)(uVar2 >> 0x10),(char)(uVar2 >> 0x18));
            param_1._0_3_ = CONCAT12((char)(uVar2 >> 8),param_1._0_2_);
            param_1 = (int *)CONCAT13((char)uVar2,param_1._0_3_);
            *(int **)((int)piVar3 + 0xfa) = param_1;
            *(uint *)((int)piVar3 + 0xf6) = uVar2;
            *(int *)((int)piVar3 + 0xfe) = piVar3[9];
            iVar5 = (uVar2 >> 0xb) + (uint)((uVar2 & 0x7ff) != 0);
            iVar4 = piVar3[9] + iVar5;
            param_1._0_2_ = CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18));
            param_1._0_3_ = CONCAT12((char)((uint)iVar4 >> 8),param_1._0_2_);
            param_1 = (int *)CONCAT13((char)iVar4,param_1._0_3_);
            *(int **)((int)piVar3 + 0x106) = param_1;
            iVar5 = FUN_010128d0(piVar3,9,0,iVar5,0,0,8,0);
            if (-1 < iVar5) {
              iVar5 = FUN_010128d0(piVar3,9,0,
                                   (uint)((piVar3[0x1b] & 0x7ffU) != 0) +
                                   ((uint)piVar3[0x1b] >> 0xb),0,0,8,0);
              if (-1 < iVar5) {
                iVar5 = FUN_010135b0(piVar3,iVar6);
                if (-1 < iVar5) {
                  iVar5 = FUN_010130d0(piVar3,iVar6);
                  if (-1 < iVar5) {
                    iVar5 = FUN_010128d0(piVar3,0x13,0,0x96,0,0,0,0);
                    if (-1 < iVar5) {
                      piVar1[3] = piVar3[9];
                      iVar5 = piVar3[9];
                      param_1._0_2_ =
                           CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18));
                      param_1._0_3_ = CONCAT12((char)((uint)iVar5 >> 8),param_1._0_2_);
                      param_1 = (int *)CONCAT13((char)iVar5,param_1._0_3_);
                      *(int *)((int)piVar3 + 0xc2) = iVar5;
                      *(int **)((int)piVar3 + 0xc6) = param_1;
                      iVar6 = FUN_0112a970(piVar3,iVar6);
                      if (-1 < iVar6) {
                        iVar6 = FUN_01013ef0(piVar3);
                        if (-1 < iVar6) {
                          iVar6 = FUN_010128d0(piVar3,0x15,0,0,0,0,0,0);
                          if (-1 < iVar6) {
                            piVar3[0xd] = (int)&LAB_0112a790;
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
      }
    }
  }
  return;
}


