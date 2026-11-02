/* Module: mpgaout.dll
   Function: FUN_10002168
   Address: 10002168
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10002168(int *param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  param_1[0x3143] = 0;
  param_1[0x314f] = 0;
  param_1[0x3152] = 0;
  param_1[0x3153] = 0;
  FUN_100069e8(0x400);
  FUN_100080d0((int)param_1);
  FUN_10003140((int)param_1);
  FUN_10006b38((int)param_1);
  iVar4 = param_1[0xb];
  if (iVar4 == 0xac44) {
    param_1[0x2417] = 0;
LAB_10002228:
    memset(param_1 + 0x2421,0,0x1200);
    memset(param_1 + 0x28a1,0,0x100);
    memset(param_1 + 0x2921,0,0x300);
    memset(param_1 + 0x29e1,0,0x180);
    memset(param_1 + 0x28e1,0,0x100);
    memset(param_1 + 0x2a42,0,0x200);
    memset(param_1 + 0x2ac2,0,0x200);
    memset(param_1 + 0x2b42,0,0x200);
    memset(param_1 + 0x2bc2,0,0x100);
    memset(param_1 + 0x2c02,0,0x1500);
    param_1[0x240c] = (int)(param_1 + 0x2413);
    param_1[0x2416] = param_1[3];
    iVar4 = *param_1;
    param_1[0x240f] = -1;
    param_1[0x241e] = param_1[4];
    param_1[0x240e] = 0;
    param_1[0x2419] = param_1[5];
    param_1[0x2413] = 1;
    param_1[0x2415] = param_1[6];
    param_1[0x2414] = param_1[1];
    param_1[0x241c] = param_1[7];
    param_1[0x241a] = iVar4;
    param_1[0x241d] = param_1[8];
    param_1[0x241b] = 0;
    iVar3 = 2;
    param_1[0x240d] = iVar4;
    if (iVar4 == 3) {
      iVar3 = 1;
    }
    param_1[0x2410] = iVar3;
    if (param_1[1] == 2) {
      iVar4 = FUN_10002010(param_1 + 0x240c);
      param_1[0x2412] = iVar4;
    }
    else {
      param_1[0x2412] = 0x20;
    }
    if (param_1[0x241a] == 1) {
      iVar4 = FUN_10005f70(param_1[0x2414],param_1[0x241b]);
      param_1[0x2411] = iVar4;
    }
    else {
      param_1[0x2411] = param_1[0x2412];
    }
    param_1[0x314c] = param_1[0x2410];
    if (param_1[0x2414] == 1) {
      param_1[0x314d] = 0x20;
      param_1[0x314e] = 0x180;
    }
    else {
      param_1[0x314d] = 8;
      param_1[0x314e] = 0x480;
    }
    dVar1 = ((double)*(int *)(&DAT_1000c040 + param_1[0x2416] * 4 + (param_1[0x2414] + -1) * 0x3c) /
            (double)(uint)param_1[0x314d]) *
            ((double)(uint)param_1[0x314e] / *(double *)(&DAT_1000c000 + param_1[0x2417] * 8));
    *(double *)(param_1 + 0x3144) = dVar1;
    param_1[0x3142] = (int)ROUND(dVar1);
    dVar1 = dVar1 - (double)(int)ROUND(dVar1);
    *(double *)(param_1 + 0x3146) = dVar1;
    *(double *)(param_1 + 0x3148) = -dVar1;
    if (param_1[10] == 0) {
      FUN_10001050((int)param_1,"   frac SpF=%.3f, tot bitrate=%d kbps, s freq=%.1f kHz.");
    }
    if ((byte)((byte)((ushort)((ushort)NAN(*(double *)(param_1 + 0x3146)) << 10) >> 8) |
              (byte)((ushort)((ushort)(*(double *)(param_1 + 0x3146) == 0.0) << 0xe) >> 8)) == 0x40)
    {
      param_1[0x2418] = 0;
    }
    uVar2 = 0;
  }
  else {
    if (iVar4 < 0xac45) {
      if (iVar4 == 32000) {
        param_1[0x2417] = 2;
        goto LAB_10002228;
      }
    }
    else if (iVar4 == 48000) {
      param_1[0x2417] = 1;
      goto LAB_10002228;
    }
    FUN_1000109c((int)param_1,"Unknown audio sampling rate");
    uVar2 = 2;
  }
  return uVar2;
}


