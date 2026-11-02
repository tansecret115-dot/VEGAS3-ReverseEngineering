/* Module: erv23260.dll
   Function: FUN_63804a30
   Address: 63804a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63804a30(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (100 < param_1) {
    return 10;
  }
  if (*(uint *)((int)this + 0x7c8) < 0x15) {
    if (0x14 < param_1) {
      local_c = (**(code **)(*(int *)((int)this + -0x6c) + 0x30))();
      goto LAB_63804ae0;
    }
    if (*(uint *)((int)this + 0x7c8) < 0x15) goto LAB_63804ae0;
  }
  if (((param_1 < 0x15) &&
      (local_c = FUN_638025b0((void *)((int)this + -0x6c),-1,&local_10,&local_8), local_c == 0)) &&
     (local_10 <= local_8)) {
    piVar2 = (int *)(local_10 * 0x77c + 0x5e8 + (int)this);
    iVar1 = local_10;
    do {
      if (piVar2[-0x145] != 4) {
        *(undefined1 *)(piVar2 + 0x5c) = 1;
      }
      if (*piVar2 != 0) {
        FUN_63809980(*piVar2);
      }
      if (piVar2[1] != 0) {
        FUN_63809980(piVar2[1]);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x1df;
    } while (iVar1 <= local_8);
  }
LAB_63804ae0:
  if (local_c == 0) {
    *(uint *)((int)this + 0x7c8) = param_1;
  }
  iVar1 = FUN_638025b0((void *)((int)this + -0x6c),-1,&local_10,&local_8);
  if ((iVar1 == 0) && (local_10 <= local_8)) {
    piVar2 = (int *)(local_10 * 0x77c + 0x734 + (int)this);
    do {
      if (param_1 < 0x32) {
        piVar2[3] = (int)&DAT_6382de70;
      }
      else {
        piVar2[3] = (int)&DAT_6382d9f0;
      }
      if (param_1 < 0x46) {
        if (param_1 < 0x3c) {
          if (param_1 < 0x32) {
            *piVar2 = (param_1 < 0x28) + 3;
          }
          else {
            *piVar2 = 2;
          }
        }
        else {
          *piVar2 = 1;
        }
      }
      else {
        *piVar2 = 0;
      }
      local_10 = local_10 + 1;
      piVar2 = piVar2 + 0x1df;
    } while (local_10 <= local_8);
  }
  return iVar1;
}


