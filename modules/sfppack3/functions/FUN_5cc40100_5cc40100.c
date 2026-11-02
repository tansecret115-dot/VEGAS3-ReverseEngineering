/* Module: sfppack3.dll
   Function: FUN_5cc40100
   Address: 5cc40100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc40100(void *this,byte *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  int local_1c;
  double local_18;
  double local_10;
  
  if (param_2 == 1) {
    if (param_3 != 0) {
      do {
        if (*(int *)((int)this + 0x78) == 0) {
          dVar1 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x68) +
                  (double)(int)(char)(*param_1 ^ 0x80) * _DAT_5cc87d68 *
                  *(double *)((int)this + 0x60);
          *(double *)((int)this + 0x68) = dVar1;
          if (ABS(dVar1) < _DAT_5cc87d48) {
            *(undefined4 *)((int)this + 0x68) = 0;
            *(undefined4 *)((int)this + 0x6c) = 0;
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
        iVar4 = ftol();
        if (iVar4 < -0x80) {
          bVar3 = 0;
        }
        else if (iVar4 < 0x80) {
          bVar3 = (byte)iVar4 ^ 0x80;
        }
        else {
          bVar3 = 0xff;
        }
        *param_1 = bVar3;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  else if (param_3 != 0) {
    local_1c = param_3;
    do {
      dVar1 = (double)(int)(char)(param_1[1] ^ 0x80) * _DAT_5cc87d68;
      if (*(int *)((int)this + 0x78) == 0) {
        dVar2 = *(double *)((int)this + 0x58) * *(double *)((int)this + 0x68) +
                (double)(int)(char)(*param_1 ^ 0x80) * _DAT_5cc87d68 * *(double *)((int)this + 0x60)
        ;
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
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar3 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar3 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar3 = 0xff;
      }
      *param_1 = bVar3;
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar3 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar3 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar3 = 0xff;
      }
      param_1[1] = bVar3;
      param_1 = param_1 + param_2;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return 0;
}


