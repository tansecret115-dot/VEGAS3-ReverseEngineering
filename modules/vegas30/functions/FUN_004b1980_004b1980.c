/* Module: vegas30.exe
   Function: FUN_004b1980
   Address: 004b1980
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_004b1980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  
  iVar2 = FUN_004b12d0(param_2,param_6,param_7,param_8,param_9);
  if (-1 < iVar2) {
    pvVar3 = GlobalAlloc(0x40,0x2c);
    piVar4 = GlobalLock(pvVar3);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      piVar4[1] = 0;
      piVar4[2] = iVar2;
      piVar4[3] = -1;
      piVar4[4] = 0;
      piVar4[5] = 0xc;
      piVar4[6] = 100;
      piVar4[8] = 0;
      piVar4[9] = 0;
      *piVar4 = (int)&PTR_LAB_00613494;
      piVar4[10] = 0;
    }
    *(int **)(param_1 + 8) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
      iVar2 = FUN_004b14d0(param_2,param_5,param_6,param_7,param_9);
      if (iVar2 < 0) {
        return iVar2;
      }
      pvVar3 = GlobalAlloc(0x40,0x2c);
      piVar4 = GlobalLock(pvVar3);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x14);
        piVar4[1] = 0;
        piVar4[2] = iVar2;
        piVar4[3] = -1;
        piVar4[4] = 0;
        piVar4[5] = 0xc;
        piVar4[6] = 100;
        piVar4[8] = 0;
        piVar4[9] = 0;
        *piVar4 = (int)&PTR_LAB_00613454;
        piVar4[10] = 0;
      }
      *(int **)(param_1 + 0x10) = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        iVar2 = FUN_004b16d0(param_2,param_4,param_5,param_6,param_9,param_8,param_9);
        if (iVar2 < 0) {
          return iVar2;
        }
        pvVar3 = GlobalAlloc(0x40,0x2c);
        piVar4 = GlobalLock(pvVar3);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x1c);
          piVar4[1] = 0;
          piVar4[2] = iVar2;
          piVar4[3] = -1;
          piVar4[4] = 0;
          piVar4[5] = 0xc;
          piVar4[6] = 100;
          piVar4[8] = 0;
          piVar4[9] = 0;
          *piVar4 = (int)&PTR_LAB_00613414;
          piVar4[10] = 0;
        }
        *(int **)(param_1 + 0x18) = piVar4;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
          iVar2 = FUN_004b17e0(param_2);
          if (iVar2 < 0) {
            return iVar2;
          }
          pvVar3 = GlobalAlloc(0x40,0x2c);
          piVar4 = GlobalLock(pvVar3);
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            iVar1 = *(int *)(param_1 + 0x24);
            piVar4[1] = 0;
            piVar4[2] = iVar1;
            piVar4[3] = -1;
            piVar4[4] = 0;
            piVar4[5] = 0xc;
            piVar4[6] = 100;
            piVar4[8] = 0;
            piVar4[9] = 0;
            *piVar4 = (int)&PTR_LAB_006133d4;
            piVar4[10] = 0;
          }
          *(int **)(param_1 + 0x20) = piVar4;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 4))(piVar4);
            return iVar2;
          }
        }
      }
    }
    iVar2 = -0x7fffbffb;
  }
  return iVar2;
}


