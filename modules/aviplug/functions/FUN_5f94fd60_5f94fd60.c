/* Module: aviplug.dll
   Function: FUN_5f94fd60
   Address: 5f94fd60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94fd60(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piStack_40;
  int *piStack_3c;
  int **ppiStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined1 *puStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  
  if (param_1[4] != 0) {
    return -0x7fff0001;
  }
  uStack_18 = param_3;
  piStack_1c = param_1;
  piStack_20 = param_2;
  piStack_24 = (int *)0x5f94fd99;
  iVar1 = (**(code **)(*param_2 + 0x34))();
  if (-1 < iVar1) {
    param_1[4] = (int)param_2;
    piStack_24 = param_2;
    puStack_28 = (undefined1 *)0x5f94fdaa;
    (**(code **)(*param_2 + 4))();
    puStack_28 = &stack0xffffffec;
    piStack_2c = param_2;
    piStack_30 = (int *)0x5f94fdb5;
    iVar1 = (**(code **)(*param_2 + 0x28))();
    if (-1 < iVar1) {
      piStack_30 = piStack_1c;
      piStack_34 = (int *)0x5f94fdc9;
      (**(code **)(*piStack_1c + 0x14))();
      piStack_34 = (int *)&stack0xffffffec;
      ppiStack_38 = &piStack_24;
      piStack_3c = (int *)0x1;
      piStack_40 = piStack_20;
      iVar1 = (**(code **)(*piStack_20 + 0xc))();
      while (iVar1 == 0) {
        (**(code **)(*piStack_34 + 0x24))(piStack_34,&puStack_28);
        if (piStack_30 == (int *)0x1) {
          if (param_1[6] == 0) {
            param_1[6] = (int)piStack_3c;
            (**(code **)(*piStack_3c + 4))(piStack_3c);
          }
        }
        else if (param_1[5] == 0) {
          param_1[5] = (int)piStack_3c;
          (**(code **)(*piStack_3c + 4))(piStack_3c);
        }
        (**(code **)(*piStack_3c + 8))(piStack_3c);
        piStack_40 = (int *)0x0;
        iVar1 = (**(code **)(*piStack_3c + 0xc))(piStack_3c,1,&piStack_40,&piStack_30);
      }
      (**(code **)(*piStack_30 + 8))(piStack_30);
      piStack_1c = (int *)0x0;
      if ((param_1[6] == 0) || (param_1[5] == 0)) {
        iVar1 = -0x7fffbffe;
      }
    }
    if (piStack_20 != (int *)0x0) {
      piStack_30 = piStack_20;
      piStack_34 = (int *)0x5f94fe80;
      (**(code **)(*piStack_20 + 8))();
    }
    if (piStack_1c != (int *)0x0) {
      piStack_34 = (int *)0x5f94fe8e;
      piStack_30 = piStack_1c;
      (**(code **)(*piStack_1c + 8))();
    }
    if (iVar1 < 0) {
      piStack_30 = (int *)param_1[4];
      piStack_34 = param_1;
      ppiStack_38 = (int **)0x5f94fe9c;
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return iVar1;
}


