/* Module: vidcap30.exe
   Function: FUN_00423290
   Address: 00423290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00423290(int param_1,undefined4 param_2)

{
  LPVOID *ppv;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_28 = param_1 + 0x32c;
  uStack_2c = 0;
  uStack_30 = param_2;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x38))();
  if (-1 < iVar1) {
    ppv = (LPVOID *)(param_1 + 0x328);
    iVar1 = CoCreateInstance((IID *)&DAT_005a3018,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,ppv);
    if (((((-1 < iVar1) && (iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))(), -1 < iVar1))
         && (iVar1 = FUN_00454ed0(*(int *)(param_1 + 0x31c) + 0x28), -1 < iVar1)) &&
        ((*(int *)(param_1 + 0x360) != 0 &&
         (iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))(*(int **)(param_1 + 0x350)),
         -1 < iVar1)))) &&
       ((iVar1 = CoCreateInstance((IID *)&DAT_005a2db8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,
                                  (LPVOID *)(param_1 + 0x324)), -1 < iVar1 &&
        (iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                           (*(int **)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x324),L"SF:DV Mux"
                           ), -1 < iVar1)))) {
      piVar5 = (int *)0x0;
      uStack_2c = 1;
      uStack_30 = 1;
      iVar1 = FUN_00420460(&uStack_2c,1,0,0,0,*(undefined4 *)(param_1 + 0x32c),&stack0xffffffc8,
                           &uStack_30);
      if (-1 < iVar1) {
        piVar4 = (int *)0x0;
        uStack_2c = 0;
        uStack_30 = 1;
        iVar1 = FUN_00420460(&uStack_2c,1,0,0,0,*ppv,&stack0xffffffc0,&uStack_30);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                            (*(int **)(param_1 + 0x350),piVar5,piVar4);
          if (-1 < iVar1) {
            piVar3 = (int *)0x0;
            uStack_2c = 0;
            uStack_30 = 1;
            iVar1 = FUN_00420460(&uStack_2c,1,&DAT_005a35a8,0,0,*(undefined4 *)(param_1 + 0x360),
                                 &stack0xffffffbc,&uStack_30);
            if (-1 < iVar1) {
              piVar2 = (int *)0x0;
              uStack_2c = 1;
              uStack_30 = 1;
              iVar1 = FUN_00420460(&uStack_2c,1,&DAT_005a35a8,0,0,*ppv,&stack0xffffffb8,&uStack_30);
              if (iVar1 < 0) {
                iVar1 = FUN_004235a0(param_1,*ppv,1);
                if (-1 < iVar1) {
                  if (((*(uint *)(param_1 + 0x148) & 0x10) != 0) && (DAT_005bb4d0 != 0)) {
                    iVar1 = FUN_004235a0(param_1,*ppv,0);
                  }
                  if (-1 < iVar1) {
                    uStack_2c = 1;
                    uStack_30 = 1;
                    piVar2 = (int *)0x0;
                    iVar1 = FUN_00420460(&uStack_2c,1,0,0,0,*(undefined4 *)(param_1 + 0x324),
                                         &stack0xffffffc4,&uStack_30);
                    if ((-1 < iVar1) &&
                       (iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                                          (*(int **)(param_1 + 0x350),piVar2,piVar3),
                       piVar2 != (int *)0x0)) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                    }
                  }
                }
              }
              else {
                iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                                  (*(int **)(param_1 + 0x350),piVar2,piVar3);
                if (piVar2 != (int *)0x0) {
                  (**(code **)(*piVar2 + 8))(piVar2);
                }
              }
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 8))(piVar3);
              }
            }
          }
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))(piVar4);
          }
        }
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
      }
    }
  }
  return iVar1;
}


