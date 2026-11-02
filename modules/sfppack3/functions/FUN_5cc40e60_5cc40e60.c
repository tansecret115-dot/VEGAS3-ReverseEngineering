/* Module: sfppack3.dll
   Function: FUN_5cc40e60
   Address: 5cc40e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc40e60(void *this,float *param_1,int param_2,int param_3)

{
  double dVar1;
  float10 fVar2;
  double local_18;
  double local_10;
  
  if (param_2 == 1) {
    if (param_3 != 0) {
      do {
        fVar2 = (float10)*param_1;
        if (*(int *)((int)this + 0x78) == 0) {
          fVar2 = (float10)*(double *)((int)this + 0x58) * (float10)*(double *)((int)this + 0x68) +
                  fVar2 * (float10)*(double *)((int)this + 0x60);
          *(double *)((int)this + 0x68) = (double)fVar2;
          if (ABS(fVar2) < (float10)_DAT_5cc87d48) {
            *(undefined4 *)((int)this + 0x68) = 0;
            *(undefined4 *)((int)this + 0x6c) = 0;
          }
          if (*(int *)((int)this + 0x48) < 1) {
            fVar2 = (float10)*(double *)((int)this + 0x68);
          }
          else {
            fVar2 = (float10)*(double *)((int)this + 0x50) * (float10)*(double *)((int)this + 0x68);
          }
          if (*(short *)(*(int *)((int)this + 0x38) + 2) == 2) {
            dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x70) +
                    local_18 * *(double *)((int)this + 0x60);
            *(double *)((int)this + 0x70) = dVar1;
            if (ABS(dVar1) < _DAT_5cc87d48) {
              *(undefined4 *)((int)this + 0x70) = 0;
              *(undefined4 *)((int)this + 0x74) = 0;
            }
            if (*(int *)((int)this + 0x48) < 1) {
              local_10 = *(double *)((int)this + 0x70);
            }
            else {
              local_10 = *(double *)((int)this + 0x50) * *(double *)((int)this + 0x70);
            }
          }
          local_18 = local_10;
        }
        *param_1 = (float)fVar2;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      fVar2 = (float10)*param_1;
      local_18 = (double)param_1[1];
      if (*(int *)((int)this + 0x78) == 0) {
        fVar2 = (float10)*(double *)((int)this + 0x58) * (float10)*(double *)((int)this + 0x68) +
                fVar2 * (float10)*(double *)((int)this + 0x60);
        *(double *)((int)this + 0x68) = (double)fVar2;
        if (ABS(fVar2) < (float10)_DAT_5cc87d48) {
          *(undefined4 *)((int)this + 0x68) = 0;
          *(undefined4 *)((int)this + 0x6c) = 0;
        }
        if (*(int *)((int)this + 0x48) < 1) {
          fVar2 = (float10)*(double *)((int)this + 0x68);
        }
        else {
          fVar2 = (float10)*(double *)((int)this + 0x50) * (float10)*(double *)((int)this + 0x68);
        }
        if (*(short *)(*(int *)((int)this + 0x38) + 2) == 2) {
          dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x70) +
                  local_18 * *(double *)((int)this + 0x60);
          *(double *)((int)this + 0x70) = dVar1;
          if (ABS(dVar1) < _DAT_5cc87d48) {
            *(undefined4 *)((int)this + 0x70) = 0;
            *(undefined4 *)((int)this + 0x74) = 0;
          }
          if (*(int *)((int)this + 0x48) < 1) {
            local_10 = *(double *)((int)this + 0x70);
          }
          else {
            local_10 = *(double *)((int)this + 0x50) * *(double *)((int)this + 0x70);
          }
        }
        local_18 = local_10;
      }
      *param_1 = (float)fVar2;
      param_1[1] = (float)local_18;
      param_1 = param_1 + param_2;
    }
  }
  return 0;
}


