/* Module: vegas30.exe
   Function: FUN_005f5810
   Address: 005f5810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f5810(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EBP;
  int iVar7;
  undefined4 unaff_retaddr;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *piStack_14;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  int *piStack_4;
  
  iVar3 = param_2;
  iVar4 = FUN_005f68f0(&local_34);
  if (-1 < iVar4) {
    piVar10 = &param_2;
    param_2 = 0;
    (**(code **)*local_34)(local_34,&DAT_00610db0);
    if (piStack_4 != (int *)0x0) {
      FUN_004eb0f0(piStack_8,0x25,*(undefined4 *)(iVar3 + 8));
      piVar5 = (int *)(**(code **)(*piStack_4 + 0x4c))(piStack_4,unaff_retaddr,param_1);
      if (piVar5 == (int *)0x0) {
        *(undefined4 *)(iVar3 + 0x20) = unaff_retaddr;
        *(undefined4 *)(iVar3 + 0x24) = param_1;
        piStack_c = piVar5;
        iVar4 = (**(code **)*unaff_EBP)(unaff_EBP,&DAT_0060ef78,&piStack_c);
        if ((-1 < iVar4) && (piStack_c != (int *)0x0)) {
          (**(code **)(*piStack_c + 0x34))(piStack_c,iVar3 + 0x80);
          (**(code **)(*piStack_14 + 8))(piStack_14);
        }
        piVar10 = (int *)0x0;
        iVar4 = *(int *)piStack_8[0x77];
        iStack_2c = iVar4;
        if (0 < iVar4) {
          do {
            iVar9 = 0;
            iVar1 = *(int *)(*(int *)(piStack_8[0x77] + 8) + (int)piVar10 * 4);
            iStack_30 = **(int **)(iVar1 + 0x24);
            if (0 < iStack_30) {
              do {
                iVar8 = 1;
                iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + iVar9 * 4);
                if (*(int *)(iVar4 + 4) == 3) {
                  if ((*(undefined4 **)(iVar4 + 0x54) == (undefined4 *)0x0) ||
                     (puVar6 = (undefined4 *)**(undefined4 **)(iVar4 + 0x54), local_34 = puVar6,
                     puVar6 == (undefined4 *)0x0)) {
                    if ((*(int *)(iVar4 + 0x50) != 0) &&
                       (*(int *)(*(int *)(iVar4 + 0x50) + 0x18) == *(int *)(iVar3 + 8))) {
                      FUN_004ea750(piStack_14,iVar4,2,0);
                      uStack_20 = *(undefined4 *)(iVar3 + 0x20);
                      uStack_1c = *(undefined4 *)(iVar3 + 0x24);
                      FUN_005c7320(iVar4,0,0,&uStack_20);
                    }
                  }
                  else {
                    iVar7 = 0;
                    if (0 < (int)puVar6) {
                      do {
                        iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0x54) + 8) + iVar7 * 4);
                        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == *(int *)(iVar3 + 8))) {
                          if (iVar8 != 0) {
                            FUN_004ea750(piStack_14,iVar4,2,0);
                            iVar8 = 0;
                          }
                          uStack_28 = *(undefined4 *)(iVar3 + 0x20);
                          uStack_24 = *(undefined4 *)(iVar3 + 0x24);
                          FUN_005c7320(iVar4,iVar2,0,&uStack_28);
                          puVar6 = local_34;
                        }
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < (int)puVar6);
                    }
                  }
                  if ((*(int *)(iVar4 + 0x50) != 0) &&
                     (*(int *)(*(int *)(iVar4 + 0x50) + 0x18) == *(int *)(iVar3 + 8))) {
                    FUN_005435b0(*(undefined4 *)(*(int *)(iVar4 + 0x218) + 0xdc));
                  }
                }
                iVar9 = iVar9 + 1;
                iVar4 = iStack_2c;
              } while (iVar9 < iStack_30);
            }
            piVar10 = (int *)((int)piVar10 + 1);
            piStack_8 = piStack_14;
          } while ((int)piVar10 < iVar4);
        }
      }
      *(uint *)(*(int *)(iVar3 + 8) + 0x134) = *(uint *)(*(int *)(iVar3 + 8) + 0x134) | 0x80;
      *(uint *)(*(int *)(iVar3 + 8) + 0x134) = *(uint *)(*(int *)(iVar3 + 8) + 0x134) | 0x10;
      DAT_0064767c = DAT_0064767c | 0x100;
      if (*(int *)(DAT_0064762c + 0xa0) != 0) {
        FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
      }
      if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
        FUN_0051f0b0(*(int *)(DAT_0064762c + 0xa4));
      }
      (**(code **)(*piStack_10 + 8))(piStack_10);
      iVar4 = iStack_30;
    }
    (**(code **)(*piVar10 + 8))(piVar10);
  }
  return iVar4;
}


