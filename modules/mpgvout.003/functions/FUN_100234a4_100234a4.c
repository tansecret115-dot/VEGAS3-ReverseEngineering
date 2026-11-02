/* Module: mpgvout.003
   Function: FUN_100234a4
   Address: 100234a4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100234a4(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong local_14;
  
  dVar3 = *(double *)(param_1 + 0x460);
  if (((byte)(dVar3 < 0.0 | (byte)((ushort)((ushort)NAN(dVar3) << 10) >> 8) |
             (byte)((ushort)((ushort)(dVar3 == 0.0) << 0xe) >> 8)) != 0x40) &&
     (*(int *)(param_1 + 0x80) == 2)) {
    dVar1 = *(double *)(param_1 + 0x468) * _DAT_10023474 + dVar3 * _DAT_1002347c;
    dVar2 = _DAT_10023474 * *(double *)(param_1 + 0x470) + _DAT_1002347c;
    *(double *)(param_1 + 0x468) = dVar1;
    dVar1 = dVar1 / dVar2;
    *(double *)(param_1 + 0x470) = dVar2;
    local_14 = (ulonglong)*(uint *)(param_1 + 0x74);
    dVar3 = (double)local_14 *
            ((dVar3 * _DAT_10023484 + dVar1 + 1.0) / (dVar1 * _DAT_10023484 + dVar3 + 1.0));
    local_14 = (ulonglong)*(uint *)(param_1 + 0x78);
    dVar1 = (double)local_14 * _DAT_1002348c;
    if ((byte)(dVar1 < dVar3 | (byte)((ushort)((ushort)(NAN(dVar1) || NAN(dVar3)) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar1 == dVar3) << 0xe) >> 8)) == 1) {
      local_14 = (ulonglong)*(uint *)(param_1 + 0x78);
      dVar3 = (double)local_14 * _DAT_1002348c;
    }
    local_14 = (ulonglong)*(uint *)(param_1 + 0x74);
    if (dVar3 < (double)local_14 * _DAT_10023494) {
      local_14 = (ulonglong)*(uint *)(param_1 + 0x74);
      dVar3 = (double)local_14 * _DAT_10023494;
    }
    local_14._0_4_ = (undefined4)(longlong)ROUND(dVar3);
    *(undefined4 *)(param_1 + 0x498) = (undefined4)local_14;
  }
  local_14 = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar3 = floor((double)local_14 / *(double *)(param_1 + 0x68) + _DAT_1002349c);
  *(double *)(param_1 + 0x380) =
       (double)(param_2 + 1 + param_3) * dVar3 + *(double *)(param_1 + 0x380);
  if (*(int *)(param_1 + 0x58) != 0) {
    param_2 = param_2 * 2 + 1;
  }
  *(int *)(param_1 + 0x3d8) = param_2;
  if (*(int *)(param_1 + 0x58) != 0) {
    param_3 = param_3 * 2;
  }
  *(int *)(param_1 + 0x3dc) = param_3;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  if (DAT_10035734 != (FILE *)0x0) {
    fprintf(DAT_10035734,"\nrate control: new group of pictures (GOP)\n");
    fprintf(DAT_10035734," target number of bits for GOP: R=%.1f\n",*(undefined4 *)(param_1 + 0x380)
            ,*(undefined4 *)(param_1 + 900));
    fprintf(DAT_10035734," number of P pictures in GOP: Np=%d\n",*(undefined4 *)(param_1 + 0x3d8));
    fprintf(DAT_10035734," number of B pictures in GOP: Nb=%d\n",*(undefined4 *)(param_1 + 0x3dc));
  }
  return;
}


