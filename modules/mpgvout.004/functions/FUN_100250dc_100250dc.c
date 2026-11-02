/* Module: mpgvout.004
   Function: FUN_100250dc
   Address: 100250dc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100250dc(int param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x5bc) == 3) {
    if (*(int *)(param_1 + 0x98) == 0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        if (*(int *)(param_1 + 0x584) == 0) {
          dVar1 = _DAT_100250cc / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
        }
        else {
          dVar1 = _DAT_100250d4 / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
        }
      }
      else {
        dVar1 = _DAT_100250c4 / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
      }
    }
    else if (*(int *)(param_1 + 0x584) == 0) {
      dVar1 = _DAT_100250c4 / *(double *)(param_1 + 0x68);
    }
    else if (*(int *)(param_1 + 0x588) == 0) {
      dVar1 = _DAT_100250cc / *(double *)(param_1 + 0x68);
    }
    else {
      dVar1 = _DAT_100250d4 / *(double *)(param_1 + 0x68);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      dVar1 = *(double *)(param_1 + 0x3c8);
    }
    else if (*(uint *)(param_1 + 0x588) == (uint)(*(int *)(param_1 + 0x590) == 1)) {
      dVar1 = _DAT_100250c4 / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
    }
    else {
      dVar1 = *(double *)(param_1 + 0x3c8) -
              _DAT_100250c4 / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
    }
    if ((iVar2 == 0) || (*(uint *)(param_1 + 0x588) != (uint)(*(int *)(param_1 + 0x590) == 1))) {
      if (*(int *)(param_1 + 0x98) == 0) {
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x584) == 0) {
            dVar3 = _DAT_100250cc / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
          }
          else {
            dVar3 = _DAT_100250d4 / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
          }
        }
        else {
          dVar3 = _DAT_100250c4 / (*(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68));
        }
      }
      else if (*(int *)(param_1 + 0x584) == 0) {
        dVar3 = _DAT_100250c4 / *(double *)(param_1 + 0x68);
      }
      else if (*(int *)(param_1 + 0x588) == 0) {
        dVar3 = _DAT_100250cc / *(double *)(param_1 + 0x68);
      }
      else {
        dVar3 = _DAT_100250d4 / *(double *)(param_1 + 0x68);
      }
      *(double *)(param_1 + 0x3c8) = dVar3;
    }
  }
  if (((*(int *)(param_1 + 0xa0) == 0) &&
      (dVar3 = (*(double *)(param_1 + 0x3c0) * _DAT_100250c4) / (double)*(uint *)(param_1 + 0x498),
      (NAN(*(double *)(param_1 + 0x3d0)) || NAN(dVar3)) < (*(double *)(param_1 + 0x3d0) < dVar3)))
     && (*(int *)(param_1 + 0x340) == 0)) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))();
    }
    *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + 1;
  }
  dVar1 = *(double *)(param_1 + 0x3d0) + dVar1;
  *(double *)(param_1 + 0x3d0) = dVar1;
  dVar3 = floor(dVar1 - ((double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38) * _DAT_100250c4) /
                        (double)*(uint *)(param_1 + 0x498));
  dVar1 = _DAT_100250c4;
  *(int *)(param_1 + 0x5c0) = (int)ROUND(dVar3);
  dVar1 = *(double *)(param_1 + 0x3d0) -
          (dVar1 * *(double *)(param_1 + 0x3c0)) / (double)*(uint *)(param_1 + 0x498);
  dVar3 = ((double)(*(int *)(param_1 + 0x7c) << 0xe) * _DAT_100250c4) /
          (double)*(uint *)(param_1 + 0x498);
  if (((NAN(dVar3) || NAN(dVar1)) < (dVar3 < dVar1)) && (*(int *)(param_1 + 0x340) == 0)) {
    *(int *)(param_1 + 0x4b4) = *(int *)(param_1 + 0x4b4) + 1;
  }
  if (DAT_10035734 != (FILE *)0x0) {
    fprintf(DAT_10035734,"\nvbv_delay=%d (bitcount=%.1f, decoding_time=%.2f, bitcnt_EOP=%.1f)\n",
            *(undefined4 *)(param_1 + 0x5c0),(double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38),
            *(undefined8 *)(param_1 + 0x3d0),(int)*(undefined8 *)(param_1 + 0x3c0),
            (int)((ulonglong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20));
  }
  if (*(int *)(param_1 + 0x5c0) < 0) {
    if (*(int *)(param_1 + 0x340) == 0) {
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))();
      }
      *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + 1;
    }
    *(undefined4 *)(param_1 + 0x5c0) = 0;
  }
  if (0xffff < *(int *)(param_1 + 0x5c0)) {
    if (*(int *)(param_1 + 0x340) == 0) {
      *(int *)(param_1 + 0x4b4) = *(int *)(param_1 + 0x4b4) + 1;
    }
    *(undefined4 *)(param_1 + 0x5c0) = 0xffff;
  }
  return;
}


