/* Module: vegas30.exe
   Function: FUN_00533aa0
   Address: 00533aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00533aa0(undefined4 param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  void *pvVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int local_8;
  int iStack_4;
  
  iVar2 = param_2;
  if (((*(byte *)(param_2 + 4) & 2) == 0) || (uVar8 = 0, *(int *)(param_2 + 0x8b8) == 0)) {
    return 0x4e001;
  }
  *(undefined4 *)(param_3 + 0x13c) = 0;
  *(undefined4 *)(param_3 + 0x138) = 0;
  pvVar3 = calloc(1,*(int *)(param_2 + 0x8b8) << 2);
  *(void **)(param_3 + 0x13c) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    pvVar3 = calloc(1,*(int *)(param_2 + 0x8b8) << 2);
    *(void **)(param_3 + 0x138) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      if (*(int *)(param_2 + 0x8b8) != 0) {
        do {
          pvVar3 = calloc(1,0x104);
          *(void **)(*(int *)(param_3 + 0x138) + uVar8 * 4) = pvVar3;
          if (*(int *)(*(int *)(param_3 + 0x138) + uVar8 * 4) == 0) goto LAB_00533c97;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_2 + 0x8b8));
      }
      hMem = GlobalAlloc(0x40,0x48);
      pvVar4 = GlobalLock(hMem);
      if (pvVar4 != (LPVOID)0x0) {
        piVar5 = (int *)FUN_004b22f0();
        if (piVar5 != (int *)0x0) {
          uVar6 = FUN_005ba4b0(param_1,0);
          iVar7 = FUN_00533930(param_1,param_2);
          if (-1 < iVar7) {
            dVar1 = (double)*(longlong *)(param_2 + 0x8e0) * _DAT_006106c8 *
                    *(double *)(param_2 + 0x888) + _DAT_006106c0;
            uVar9 = ftol();
            uVar12 = 0;
            uVar10 = ftol(0,uVar9);
            uVar11 = ftol(uVar10);
            iVar7 = FUN_004b25e0(param_1,uVar6,param_2 + 0x450,param_2 + 0x878,uVar11,uVar10,uVar12,
                                 uVar9);
            if (-1 < iVar7) {
              (**(code **)*piVar5)
                        (piVar5,&DAT_0060ef48,
                         *(int *)(param_3 + 0x13c) + *(int *)(param_3 + 0x140) * 4);
              (**(code **)(*piVar5 + 8))(piVar5);
              iStack_4 = (int)((ulonglong)dVar1 >> 0x20);
              iStack_4 = iStack_4 + 1;
              uVar6 = _SfGetString_8(DAT_00647204,0x50e3);
              SfPrintF(*(undefined4 *)(*(int *)(param_3 + 0x138) + *(int *)(param_3 + 0x140) * 4),
                       uVar6,iStack_4);
              *(int *)(param_3 + 0x140) = *(int *)(param_3 + 0x140) + 1;
              local_8 = SUB84(dVar1,0);
              return local_8;
            }
          }
          param_2 = iVar7;
          (**(code **)(*piVar5 + 8))(piVar5);
          goto LAB_00533ca7;
        }
      }
    }
  }
LAB_00533c97:
  param_2 = -0x7ff8fff2;
LAB_00533ca7:
  if (*(int *)(param_3 + 0x13c) != 0) {
    uVar8 = 0;
    if (*(int *)(iVar2 + 0x8b8) != 0) {
      do {
        piVar5 = *(int **)(*(int *)(param_3 + 0x13c) + uVar8 * 4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(iVar2 + 0x8b8));
    }
    free(*(void **)(param_3 + 0x13c));
    *(undefined4 *)(param_3 + 0x13c) = 0;
  }
  if (*(int *)(param_3 + 0x138) != 0) {
    uVar8 = 0;
    if (*(int *)(iVar2 + 0x8b8) != 0) {
      do {
        pvVar3 = *(void **)(*(int *)(param_3 + 0x138) + uVar8 * 4);
        if (pvVar3 != (void *)0x0) {
          free(pvVar3);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(iVar2 + 0x8b8));
    }
    free(*(void **)(param_3 + 0x138));
    *(undefined4 *)(param_3 + 0x138) = 0;
  }
  return param_2;
}


