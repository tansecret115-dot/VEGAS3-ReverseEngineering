/* Module: sfppack1.dll
   Function: FUN_5cdc0520
   Address: 5cdc0520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdc0520(void *this,double param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  double *pdStack_2a0;
  int iStack_29c;
  double adStack_298 [2];
  undefined8 local_288;
  undefined4 local_280 [5];
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  double local_1f8 [2];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 auStack_1d8 [36];
  undefined4 auStack_148 [4];
  undefined4 auStack_138 [36];
  double adStack_a8 [20];
  
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0xe1b089a0,0xbfd495e9,0xa9b499d0,0x3fca47ba);
  local_288._0_4_ = *puVar1;
  local_288._4_4_ = puVar1[1];
  local_280[0] = puVar1[2];
  local_280[1] = puVar1[3];
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0xe1b089a0,0xbfd495e9,0xa9b499d0,0xbfca47ba);
  local_280[2] = *puVar1;
  local_280[3] = puVar1[1];
  local_280[4] = puVar1[2];
  local_26c = puVar1[3];
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0x340d4dc6,0xbfd1739f,0x384fd2a6,0x3fe2b5bb);
  local_268 = *puVar1;
  local_264 = puVar1[1];
  local_260 = puVar1[2];
  local_25c = puVar1[3];
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0x340d4dc6,0xbfd1739f,0x384fd2a6,0xbfe2b5bb);
  local_258 = *puVar1;
  local_254 = puVar1[1];
  local_250 = puVar1[2];
  local_24c = puVar1[3];
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0x60aa64c3,0xbfc75254,0xfbb517a4,0x3fec0055);
  local_248 = *puVar1;
  local_244 = puVar1[1];
  local_240 = puVar1[2];
  local_23c = puVar1[3];
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0x60aa64c3,0xbfc75254,0xfbb517a4,0xbfec0055);
  local_238 = *puVar1;
  local_234 = puVar1[1];
  local_230 = puVar1[2];
  local_22c = puVar1[3];
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0x47991bc5,0xbfb060fe,0x3968d75a,0x3ff083d0);
  local_228 = *puVar1;
  local_224 = puVar1[1];
  local_220 = puVar1[2];
  local_21c = puVar1[3];
  puVar1 = (undefined4 *)FUN_5cdbfb30(&local_2b0,0x47991bc5,0xbfb060fe,0x3968d75a,0xbff083d0);
  iVar5 = 8;
  fVar7 = (float10)fptan((float10)param_1 * (float10)_DAT_5ce13800 * (float10)_DAT_5ce137d0);
  local_218 = *puVar1;
  local_20c = puVar1[3];
  local_214 = puVar1[1];
  local_210 = puVar1[2];
  pdVar4 = (double *)&local_288;
  do {
    puVar1 = (undefined4 *)FUN_5cdbf960(local_1f8,(double)(fVar7 + fVar7),*pdVar4,pdVar4[1]);
    local_2ac = puVar1[1];
    uVar8 = puVar1[2];
    local_2a4 = puVar1[3];
    iVar5 = iVar5 + -1;
    *(undefined4 *)pdVar4 = *puVar1;
    *(undefined4 *)((int)pdVar4 + 4) = local_2ac;
    *(undefined4 *)(pdVar4 + 1) = uVar8;
    *(undefined4 *)((int)pdVar4 + 0xc) = local_2a4;
    pdVar4 = pdVar4 + 2;
  } while (iVar5 != 0);
  uVar9 = 0;
  uVar8 = 0;
  fVar7 = (float10)_CIpow();
  puVar1 = (undefined4 *)
           FUN_5cdbfb30((undefined4 *)local_1f8,SUB84((double)fVar7,0),
                        (int)((ulonglong)(double)fVar7 >> 0x20),uVar8,uVar9);
  iStack_29c = 8;
  local_2b0 = *puVar1;
  uVar8 = puVar1[1];
  uStack_2a8 = puVar1[2];
  local_2a4 = puVar1[3];
  pdStack_2a0 = (double *)&local_288;
  do {
    pdVar2 = (double *)
             FUN_5cdbf900(local_1f8,(double)CONCAT44(uVar8,local_2b0),
                          (double)CONCAT44(local_2a4,uStack_2a8),*pdStack_2a0,pdStack_2a0[1]);
    local_2b0 = *(undefined4 *)pdVar2;
    uVar8 = *(undefined4 *)((int)pdVar2 + 4);
    pdVar4 = pdVar2 + 1;
    uStack_2a8 = *(undefined4 *)pdVar4;
    local_2a4 = *(undefined4 *)((int)pdVar2 + 0xc);
    pdStack_2a0 = pdStack_2a0 + 2;
    iStack_29c = iStack_29c + -1;
  } while (iStack_29c != 0);
  local_2ac = uVar8;
  FUN_5cdbfbe0(adStack_298,8,adStack_a8,0,SQRT(*pdVar2 * *pdVar2 + *pdVar4 * *pdVar4),0,0x3ff00000,
               auStack_148,&uStack_1e8);
  puVar1 = (undefined4 *)((int)this + 0x1e0);
  iVar5 = 0;
  do {
    iVar3 = iVar5 + 0x10;
    puVar1[-0x10] = *(undefined4 *)((int)auStack_138 + iVar5);
    puVar1[-0xf] = *(undefined4 *)((int)auStack_138 + iVar5 + 4);
    *puVar1 = *(undefined4 *)((int)auStack_1d8 + iVar5);
    puVar1[1] = *(undefined4 *)((int)auStack_1d8 + iVar5 + 4);
    puVar1 = puVar1 + 2;
    iVar5 = iVar3;
  } while (iVar3 < 0x80);
  *(undefined4 *)((int)this + 0x260) = uStack_1e8;
  *(undefined4 *)((int)this + 0x264) = uStack_1e4;
  puVar1 = (undefined4 *)((int)this + 0x220);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  puVar6 = (undefined4 *)((int)this + 0x268);
  for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}


