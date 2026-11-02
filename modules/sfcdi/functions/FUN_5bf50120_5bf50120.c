/* Module: sfcdi.dll
   Function: FUN_5bf50120
   Address: 5bf50120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf50120(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = param_1;
  puVar1 = (uint *)*param_1;
  uVar2 = *puVar1;
  iVar6 = *(int *)(uVar2 + 0x34c);
  FUN_5bf47f70((int)param_1,uVar2);
  iVar5 = FUN_5bf47a60((int)param_1,0,0,0x96,0,0,0x20,0);
  if (-1 < iVar5) {
    iVar5 = FUN_5bf47a60((int)param_1,1,0,0x10,0,0,8,0);
    if (-1 < iVar5) {
      iVar5 = FUN_5bf47a60((int)param_1,2,0,1,0,0,9,0);
      if (-1 < iVar5) {
        iVar5 = FUN_5bf47a60((int)param_1,3,0,1,0,0,0x89,0);
        if (-1 < iVar5) {
          iVar5 = param_1[9];
          *(undefined1 *)((int)param_1 + 0x10e) = 0x22;
          param_1[0x44] = iVar5;
          param_1._0_2_ = CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)iVar5 >> 8),param_1._0_2_);
          param_1 = (int *)CONCAT13((char)iVar5,param_1._0_3_);
          piVar4[0x45] = (int)param_1;
          piVar4[0x46] = *(int *)(iVar6 + 0x10) << 0xb;
          iVar6 = *(int *)(iVar6 + 0x10) << 0xb;
          param_1._0_2_ = CONCAT11((char)((uint)iVar6 >> 0x10),(char)((uint)iVar6 >> 0x18));
          param_1 = (int *)(uint)CONCAT12((char)((uint)iVar6 >> 8),param_1._0_2_);
          piVar4[0x47] = (int)param_1;
          FUN_5bf41b20((char *)((int)piVar4 + 0xb2a),(char *)(piVar4 + 0x48));
          *(undefined1 *)((int)piVar4 + 0x127) = 2;
          *(undefined4 *)((int)piVar4 + 0x12a) = 0x1000001;
          *(undefined1 *)((int)piVar4 + 0x12e) = 1;
          iVar6 = FUN_5bf48540((int)piVar4,uVar2);
          if (-1 < iVar6) {
            uVar3 = piVar4[0x1b];
            param_1._0_2_ = CONCAT11((char)(uVar3 >> 0x10),(char)(uVar3 >> 0x18));
            param_1._0_3_ = CONCAT12((char)(uVar3 >> 8),param_1._0_2_);
            param_1 = (int *)CONCAT13((char)uVar3,param_1._0_3_);
            *(int **)((int)piVar4 + 0xfa) = param_1;
            *(uint *)((int)piVar4 + 0xf6) = uVar3;
            *(int *)((int)piVar4 + 0xfe) = piVar4[9];
            iVar6 = (uVar3 >> 0xb) + (uint)((uVar3 & 0x7ff) != 0);
            iVar5 = piVar4[9] + iVar6;
            param_1._0_2_ = CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18));
            param_1._0_3_ = CONCAT12((char)((uint)iVar5 >> 8),param_1._0_2_);
            param_1 = (int *)CONCAT13((char)iVar5,param_1._0_3_);
            *(int **)((int)piVar4 + 0x106) = param_1;
            iVar6 = FUN_5bf47a60((int)piVar4,9,0,iVar6,0,0,8,0);
            if (-1 < iVar6) {
              iVar6 = FUN_5bf47a60((int)piVar4,9,0,
                                   (uint)((piVar4[0x1b] & 0x7ffU) != 0) +
                                   ((uint)piVar4[0x1b] >> 0xb),0,0,8,0);
              if (-1 < iVar6) {
                iVar6 = FUN_5bf48740((int)piVar4,uVar2);
                if (-1 < iVar6) {
                  iVar6 = FUN_5bf48260(piVar4,uVar2);
                  if (-1 < iVar6) {
                    iVar6 = FUN_5bf47a60((int)piVar4,0x13,0,0x96,0,0,0,0);
                    if (-1 < iVar6) {
                      puVar1[3] = piVar4[9];
                      iVar6 = piVar4[9];
                      param_1._0_2_ =
                           CONCAT11((char)((uint)iVar6 >> 0x10),(char)((uint)iVar6 >> 0x18));
                      param_1._0_3_ = CONCAT12((char)((uint)iVar6 >> 8),param_1._0_2_);
                      param_1 = (int *)CONCAT13((char)iVar6,param_1._0_3_);
                      *(int *)((int)piVar4 + 0xc2) = iVar6;
                      *(int **)((int)piVar4 + 0xc6) = param_1;
                      iVar6 = FUN_5bf4feb0((uint)piVar4,uVar2);
                      if (-1 < iVar6) {
                        iVar6 = FUN_5bf49080(piVar4);
                        if (-1 < iVar6) {
                          iVar6 = FUN_5bf47a60((int)piVar4,0x15,0,0,0,0,0,0);
                          if (-1 < iVar6) {
                            piVar4[0xd] = (int)&LAB_5bf4fcd0;
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


