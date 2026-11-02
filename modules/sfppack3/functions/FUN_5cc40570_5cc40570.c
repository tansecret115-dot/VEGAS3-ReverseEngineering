/* Module: sfppack3.dll
   Function: FUN_5cc40570
   Address: 5cc40570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc40570(void *this,short *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int local_24;
  double local_20;
  double local_18;
  
  if (param_2 == 1) {
    if (param_3 != 0) {
      do {
        if (*(int *)((int)this + 0x78) == 0) {
          dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x68) +
                  (double)(int)*param_1 * _DAT_5cc87d78 * *(double *)((int)this + 0x60);
          *(double *)((int)this + 0x68) = dVar1;
          if (ABS(dVar1) < _DAT_5cc87d48) {
            *(undefined4 *)((int)this + 0x68) = 0;
            *(undefined4 *)((int)this + 0x6c) = 0;
          }
          if (*(short *)(*(int *)((int)this + 0x38) + 2) == 2) {
            dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x70) +
                    local_20 * *(double *)((int)this + 0x60);
            *(double *)((int)this + 0x70) = dVar1;
            if (ABS(dVar1) < _DAT_5cc87d48) {
              *(undefined4 *)((int)this + 0x70) = 0;
              *(undefined4 *)((int)this + 0x74) = 0;
            }
            if (*(int *)((int)this + 0x48) < 1) {
              local_18 = *(double *)((int)this + 0x70);
            }
            else {
              local_18 = *(double *)((int)this + 0x50) * *(double *)((int)this + 0x70);
            }
          }
          local_20 = local_18;
        }
        iVar3 = ftol();
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
        else if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        *param_1 = (short)iVar3;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  else if (param_3 != 0) {
    local_24 = param_3;
    do {
      dVar1 = (double)(int)param_1[1] * _DAT_5cc87d78;
      if (*(int *)((int)this + 0x78) == 0) {
        dVar2 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x68) +
                (double)(int)*param_1 * _DAT_5cc87d78 * *(double *)((int)this + 0x60);
        *(double *)((int)this + 0x68) = dVar2;
        if (ABS(dVar2) < _DAT_5cc87d48) {
          *(undefined4 *)((int)this + 0x68) = 0;
          *(undefined4 *)((int)this + 0x6c) = 0;
        }
        if ((*(short *)(*(int *)((int)this + 0x38) + 2) == 2) &&
           (dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x70) +
                    dVar1 * *(double *)((int)this + 0x60), *(double *)((int)this + 0x70) = dVar1,
           ABS(dVar1) < _DAT_5cc87d48)) {
          *(undefined4 *)((int)this + 0x70) = 0;
          *(undefined4 *)((int)this + 0x74) = 0;
        }
      }
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      *param_1 = (short)iVar3;
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      param_1[1] = (short)iVar3;
      param_1 = param_1 + param_2;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return 0;
}


