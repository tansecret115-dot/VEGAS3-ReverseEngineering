/* Module: mpgvout.001
   Function: FUN_10024370
   Address: 10024370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10024370(int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 local_24;
  ulonglong local_14;
  
  if (*(int *)(param_1 + 0x80) != 1) {
    dVar2 = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38) - *(double *)(param_1 + 0x3a8);
    *(double *)(param_1 + 0x3a8) = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38);
    local_14 = (ulonglong)*(uint *)(param_1 + 0x4ac);
    dVar3 = (double)local_14;
    if ((byte)(dVar3 < dVar2 | (byte)((ushort)((ushort)(NAN(dVar3) || NAN(dVar2)) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar3 == dVar2) << 0xe) >> 8)) == 1) {
      local_14 = (ulonglong)*(uint *)(param_1 + 0x4ac);
      *(undefined4 *)(param_1 + 0x4ac) = 0;
      dVar3 = (double)local_14;
    }
    else {
      local_14 = (ulonglong)*(uint *)(param_1 + 0x4ac);
      local_14._0_4_ = (undefined4)(longlong)ROUND((double)local_14 - dVar2);
      *(undefined4 *)(param_1 + 0x4ac) = (undefined4)local_14;
      dVar3 = dVar2;
    }
    *(double *)(param_1 + 0x380) = *(double *)(param_1 + 0x380) - dVar3;
    if ((*(int *)(param_1 + 0x2dc) == 0) && (*(int *)(param_1 + 0x53c) == 0)) {
      FUN_100225c0(param_1);
    }
    local_14 = (ulonglong)*(uint *)(param_1 + 0x444);
    fVar4 = (float10)local_14;
    if (*(int *)(param_1 + 0x53c) == 0) {
      dVar3 = (dVar2 - *(double *)(param_1 + 0x388)) + *(double *)(param_1 + 0x390);
      *(double *)(param_1 + 0x390) = dVar3;
      if ((byte)(dVar3 < 0.0 | (byte)((ushort)((ushort)NAN(dVar3) << 10) >> 8) |
                (byte)((ushort)((ushort)(dVar3 == 0.0) << 0xe) >> 8)) == 1) {
        *(undefined8 *)(param_1 + 0x390) = 0;
      }
    }
    else {
      *(double *)(param_1 + 0x390) = (double)*(int *)(param_1 + 0x410);
    }
    iVar1 = *(int *)(param_1 + 0x5bc);
    if (iVar1 == 2) {
      local_14._0_4_ = (undefined4)(longlong)ROUND(fVar4);
      *(undefined4 *)(param_1 + 0x3f0) = (undefined4)local_14;
      *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + -1;
      *(int *)(param_1 + 0x410) = (int)ROUND(*(double *)(param_1 + 0x390));
    }
    else if (iVar1 < 3) {
      if (iVar1 == 1) {
        local_14._0_4_ = (undefined4)(longlong)ROUND(fVar4);
        *(undefined4 *)(param_1 + 0x3ec) = (undefined4)local_14;
        *(int *)(param_1 + 0x40c) = (int)ROUND(*(double *)(param_1 + 0x390));
      }
    }
    else if (iVar1 == 3) {
      local_14._0_4_ = (undefined4)(longlong)ROUND(fVar4);
      *(undefined4 *)(param_1 + 0x3f4) = (undefined4)local_14;
      *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + -1;
      *(int *)(param_1 + 0x414) = (int)ROUND(*(double *)(param_1 + 0x390));
    }
    if (DAT_10035734 != (FILE *)0x0) {
      fprintf(DAT_10035734,"\nrate control: end of picture\n");
      local_24 = SUB84(dVar2,0);
      fprintf(DAT_10035734," actual number of bits: S=%.1f\n",local_24,
              (int)((ulonglong)dVar2 >> 0x20));
      fprintf(DAT_10035734," average quantization parameter Q=%.1f\n",
              *(double *)(param_1 + 0x3b0) / (double)*(int *)(param_1 + 0x57c));
      fprintf(DAT_10035734," remaining number of bits in GOP: R=%.1f\n",
              *(undefined8 *)(param_1 + 0x380));
      fprintf(DAT_10035734," global complexity measures (I,P,B): Xi=%d, Xp=%d, Xb=%d\n",
              *(undefined4 *)(param_1 + 0x3ec),*(undefined4 *)(param_1 + 0x3f0),
              *(undefined4 *)(param_1 + 0x3f4));
      fprintf(DAT_10035734," virtual buffer fullness (I,P,B): d0i=%d, d0p=%d, d0b=%d\n",
              *(undefined4 *)(param_1 + 0x40c),*(undefined4 *)(param_1 + 0x410),
              *(undefined4 *)(param_1 + 0x414));
      uVar5 = 0x10024709;
      fprintf(DAT_10035734," remaining number of P pictures in GOP: Np=%d\n",
              *(undefined4 *)(param_1 + 0x3d8));
      fprintf(DAT_10035734," remaining number of B pictures in GOP: Nb=%d\n",
              *(undefined4 *)(param_1 + 0x3dc),uVar5);
      fprintf(DAT_10035734," average activity: avg_act=%.1f\n",*(undefined8 *)(param_1 + 0x458));
    }
  }
  return;
}


