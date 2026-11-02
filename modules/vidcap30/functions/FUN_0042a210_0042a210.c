/* Module: vidcap30.exe
   Function: FUN_0042a210
   Address: 0042a210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0042a43a) */

HRESULT FUN_0042a210(int param_1)

{
  LPVOID *ppv;
  HRESULT HVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piStack_128;
  int *piStack_124;
  int *piStack_120;
  int *piStack_11c;
  int *piStack_118;
  int *piStack_114;
  undefined4 auStack_110 [67];
  int iStack_4;
  
  ppv = (LPVOID *)(param_1 + 0x3f8);
  HVar1 = CoCreateInstance((IID *)&DAT_005a2dc8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,ppv);
  if ((-1 < HVar1) &&
     (HVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                        (*(int **)(param_1 + 0x350),*ppv,L"SF:C-DV Splitter"), -1 < HVar1)) {
    piStack_11c = (int *)0x0;
    HVar1 = FUN_00420460(&stack0xfffffecc,3,0,0,0,*ppv,&piStack_11c,&stack0xfffffed0);
    if (-1 < HVar1) {
      piStack_128 = (int *)0x0;
      HVar1 = FUN_00420930(param_1,"Smart Tee",0,&DAT_005a35a8,1,&piStack_128,&stack0xfffffed4);
      if (-1 < HVar1) {
        HVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                          (*(int **)(param_1 + 0x350),piStack_128,piStack_11c);
        if (-1 < HVar1) {
          piStack_120 = (int *)0x0;
          HVar1 = FUN_00420460(&stack0xfffffecc,3,&DAT_005a35f8,0,0,*ppv,&piStack_120,
                               &stack0xfffffed0);
          if (-1 < HVar1) {
            HVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                              (*(int **)(param_1 + 0x350),piStack_120,0);
            if ((-1 < HVar1) && (iStack_4 != 0)) {
              piStack_118 = (int *)0x0;
              HVar1 = FUN_00420460(&stack0xfffffecc,3,&DAT_005a35e8,0,0,*ppv,&piStack_118,
                                   &stack0xfffffed0);
              if (-1 < HVar1) {
                piStack_114 = (int *)0x0;
                puVar3 = auStack_110;
                for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar3 = 0;
                  puVar3 = puVar3 + 1;
                }
                HVar1 = (**(code **)(iRam00000000 + 0x20))(0,&piStack_114);
                if (-1 < HVar1) {
                  piStack_124 = (int *)0x0;
                  HVar1 = FUN_00420460(&stack0xfffffecc,1,0,0,0,piStack_114,&piStack_124,
                                       &stack0xfffffed0);
                  if (-1 < HVar1) {
                    HVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                                      (*(int **)(param_1 + 0x350),piStack_118,piStack_124);
                    if (piStack_124 != (int *)0x0) {
                      (**(code **)(*piStack_124 + 8))(piStack_124);
                    }
                    piStack_124 = (int *)0x0;
                  }
                  (**(code **)(*piStack_114 + 8))(piStack_114);
                }
                if (piStack_118 != (int *)0x0) {
                  (**(code **)(*piStack_118 + 8))(piStack_118);
                }
              }
            }
            if (piStack_120 != (int *)0x0) {
              (**(code **)(*piStack_120 + 8))(piStack_120);
            }
          }
        }
        if (piStack_128 != (int *)0x0) {
          (**(code **)(*piStack_128 + 8))(piStack_128);
        }
        piStack_128 = (int *)0x0;
      }
      if (piStack_11c != (int *)0x0) {
        (**(code **)(*piStack_11c + 8))(piStack_11c);
      }
    }
  }
  return HVar1;
}


