/* Module: stl2plg.dll
   Function: FUN_00407340
   Address: 00407340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407340(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int *piVar8;
  short *psVar9;
  bool bVar10;
  undefined **local_4;
  
  iVar6 = 0;
  *param_4 = 0;
  iVar5 = -0x7fffbffe;
  if (0 < DAT_004710e0) {
    local_4 = &PTR_FUN_004710cc;
    do {
      iVar4 = 5;
      bVar10 = true;
      psVar7 = (short *)local_4[-1];
      psVar9 = *(short **)(param_1 + 8);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar10 = *psVar7 == *psVar9;
        psVar7 = psVar7 + 1;
        psVar9 = psVar9 + 1;
      } while (bVar10);
      if (bVar10) {
        iVar4 = 4;
        bVar10 = true;
        piVar1 = &DAT_00465038;
        piVar8 = param_3;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar10 = *piVar1 == *piVar8;
          piVar1 = piVar1 + 1;
          piVar8 = piVar8 + 1;
        } while (bVar10);
        if (bVar10) {
          piVar1 = (int *)(*(code *)*local_4)();
          if (piVar1 == (int *)0x0) {
            iVar5 = -0x7ff8fff2;
          }
          else {
            iVar5 = (**(code **)(*piVar1 + 0x40))();
            if (iVar5 < 0) {
              (**(code **)(*piVar1 + 0x3c))(1);
            }
            else {
              (**(code **)(*piVar1 + 4))(piVar1);
              *param_4 = piVar1;
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      local_4 = local_4 + 2;
    } while (iVar6 < DAT_004710e0);
    if (iVar5 != -0x7fffbffe) {
      return iVar5;
    }
  }
  iVar6 = 5;
  bVar10 = true;
  psVar7 = &DAT_004654f8;
  psVar9 = *(short **)(param_1 + 8);
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar10 = *psVar7 == *psVar9;
    psVar7 = psVar7 + 1;
    psVar9 = psVar9 + 1;
  } while (bVar10);
  if (bVar10) {
    iVar6 = 4;
    bVar10 = true;
    piVar1 = &DAT_00465038;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar10 = *piVar1 == *param_3;
      piVar1 = piVar1 + 1;
      param_3 = param_3 + 1;
    } while (bVar10);
    if (bVar10) {
      pvVar2 = GlobalAlloc(0x40,0x14);
      puVar3 = GlobalLock(pvVar2);
      if ((puVar3 != (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_004076a0(puVar3), puVar3 != (undefined4 *)0x0)) {
        iVar5 = FUN_004076d0();
        if (-1 < iVar5) {
          iVar5 = (**(code **)*puVar3)(puVar3,&DAT_00465038,param_4);
          return iVar5;
        }
        FUN_004076c0(puVar3);
        pvVar2 = GlobalHandle(puVar3);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(puVar3);
        GlobalFree(pvVar2);
        return iVar5;
      }
      return -0x7ff8fff2;
    }
  }
  else {
    iVar6 = 5;
    bVar10 = true;
    psVar7 = &DAT_00465508;
    psVar9 = *(short **)(param_1 + 8);
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar10 = *psVar7 == *psVar9;
      psVar7 = psVar7 + 1;
      psVar9 = psVar9 + 1;
    } while (bVar10);
    if (bVar10) {
      iVar6 = 4;
      bVar10 = true;
      piVar1 = &DAT_00465038;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar10 = *piVar1 == *param_3;
        piVar1 = piVar1 + 1;
        param_3 = param_3 + 1;
      } while (bVar10);
      if (bVar10) {
        pvVar2 = GlobalAlloc(0x40,0x14);
        puVar3 = GlobalLock(pvVar2);
        if ((puVar3 != (undefined4 *)0x0) &&
           (puVar3 = (undefined4 *)FUN_00409c80(puVar3), puVar3 != (undefined4 *)0x0)) {
          iVar5 = FUN_00409cb0();
          if (-1 < iVar5) {
            iVar5 = (**(code **)*puVar3)(puVar3,&DAT_00465038,param_4);
            return iVar5;
          }
          FUN_00409ca0(puVar3);
          pvVar2 = GlobalHandle(puVar3);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(puVar3);
          GlobalFree(pvVar2);
          return iVar5;
        }
        return -0x7ff8fff2;
      }
    }
  }
  return iVar5;
}


