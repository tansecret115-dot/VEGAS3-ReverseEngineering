/* Module: sfppack3.dll
   Function: FUN_5cc411e0
   Address: 5cc411e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc411e0(void *this,double *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  if (param_2 == 1) {
    if (param_3 != 0) {
      do {
        dVar1 = *param_1;
        if (*(int *)((int)this + 0x78) == 0) {
          dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x68) +
                  dVar1 * *(double *)((int)this + 0x60);
          *(double *)((int)this + 0x68) = dVar1;
          if (ABS(dVar1) < _DAT_5cc87d48) {
            *(undefined4 *)((int)this + 0x68) = 0;
            *(undefined4 *)((int)this + 0x6c) = 0;
          }
          if (*(int *)((int)this + 0x48) < 1) {
            dVar1 = *(double *)((int)this + 0x68);
          }
          else {
            dVar1 = *(double *)((int)this + 0x50) * *(double *)((int)this + 0x68);
          }
          if (*(short *)(*(int *)((int)this + 0x38) + 2) == 2) {
            dVar2 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x70) +
                    (double)CONCAT44(uStack_14,local_18) * *(double *)((int)this + 0x60);
            *(double *)((int)this + 0x70) = dVar2;
            if (ABS(dVar2) < _DAT_5cc87d48) {
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
          local_18 = (undefined4)local_10;
          uStack_14 = local_10._4_4_;
        }
        *param_1 = dVar1;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      local_18 = *(undefined4 *)(param_1 + 1);
      uStack_14 = *(undefined4 *)((int)param_1 + 0xc);
      dVar2 = param_1[1];
      dVar1 = *param_1;
      if (*(int *)((int)this + 0x78) == 0) {
        dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x68) +
                dVar1 * *(double *)((int)this + 0x60);
        *(double *)((int)this + 0x68) = dVar1;
        if (ABS(dVar1) < _DAT_5cc87d48) {
          *(undefined4 *)((int)this + 0x68) = 0;
          *(undefined4 *)((int)this + 0x6c) = 0;
        }
        if (*(int *)((int)this + 0x48) < 1) {
          dVar1 = *(double *)((int)this + 0x68);
        }
        else {
          dVar1 = *(double *)((int)this + 0x50) * *(double *)((int)this + 0x68);
        }
        if (*(short *)(*(int *)((int)this + 0x38) + 2) == 2) {
          dVar2 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x70) +
                  dVar2 * *(double *)((int)this + 0x60);
          *(double *)((int)this + 0x70) = dVar2;
          if (ABS(dVar2) < _DAT_5cc87d48) {
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
        local_18 = (undefined4)local_10;
        uStack_14 = local_10._4_4_;
      }
      *param_1 = dVar1;
      *(undefined4 *)(param_1 + 1) = local_18;
      *(undefined4 *)((int)param_1 + 0xc) = uStack_14;
      param_1 = param_1 + param_2;
    }
  }
  return 0;
}


