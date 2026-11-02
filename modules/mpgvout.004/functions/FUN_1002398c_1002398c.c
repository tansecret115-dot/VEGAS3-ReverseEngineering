/* Module: mpgvout.004
   Function: FUN_1002398c
   Address: 1002398c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1002398c(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  undefined4 uVar5;
  ulonglong local_14;
  
  dVar4 = *(double *)(param_1 + 0x460);
  if ((dVar4 != 0.0) && (*(int *)(param_1 + 0x80) == 2)) {
    dVar2 = *(double *)(param_1 + 0x468) * _DAT_1002395c + dVar4 * _DAT_10023964;
    dVar1 = _DAT_10023964 + _DAT_1002395c * *(double *)(param_1 + 0x470);
    *(double *)(param_1 + 0x468) = dVar2;
    dVar2 = dVar2 / dVar1;
    *(double *)(param_1 + 0x470) = dVar1;
    local_14 = (ulonglong)*(uint *)(param_1 + 0x74);
    dVar1 = (double)local_14;
    local_14 = (ulonglong)*(uint *)(param_1 + 0x78);
    dVar1 = dVar1 * ((dVar4 * _DAT_1002396c + dVar2 + 1.0) / (dVar2 * _DAT_1002396c + dVar4 + 1.0));
    if ((NAN((double)local_14 * _DAT_10023974) || NAN(dVar1)) <
        ((double)local_14 * _DAT_10023974 < dVar1)) {
      local_14 = (ulonglong)*(uint *)(param_1 + 0x78);
      dVar1 = (double)local_14 * _DAT_10023974;
    }
    local_14 = (ulonglong)*(uint *)(param_1 + 0x74);
    if (dVar1 < (double)local_14 * _DAT_1002397c) {
      local_14 = (ulonglong)*(uint *)(param_1 + 0x74);
      dVar1 = (double)local_14 * _DAT_1002397c;
    }
    local_14._0_4_ = (undefined4)(longlong)ROUND(dVar1);
    *(undefined4 *)(param_1 + 0x498) = (undefined4)local_14;
  }
  local_14 = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar4 = floor((double)local_14 / *(double *)(param_1 + 0x68) + _DAT_10023984);
  *(double *)(param_1 + 0x380) =
       (double)(param_2 + 1 + param_3) * dVar4 + *(double *)(param_1 + 0x380);
  if (*(int *)(param_1 + 0x58) != 0) {
    param_2 = param_2 * 2 + 1;
  }
  *(int *)(param_1 + 0x3d8) = param_2;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  iVar3 = param_3 * 2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar3 = param_3;
  }
  *(int *)(param_1 + 0x3dc) = iVar3;
  if (DAT_10035734 != (FILE *)0x0) {
    fprintf(DAT_10035734,"\nrate control: new group of pictures (GOP)\n");
    fprintf(DAT_10035734," target number of bits for GOP: R=%.1f\n",*(undefined8 *)(param_1 + 0x380)
           );
    uVar5 = 0x10023ba8;
    fprintf(DAT_10035734," number of P pictures in GOP: Np=%d\n",*(undefined4 *)(param_1 + 0x3d8));
    fprintf(DAT_10035734," number of B pictures in GOP: Nb=%d\n",*(undefined4 *)(param_1 + 0x3dc),
            uVar5);
  }
  return;
}


