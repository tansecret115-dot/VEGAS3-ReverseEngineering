/* Module: vegas30.exe
   Function: FUN_00512930
   Address: 00512930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512930(int *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int iVar6;
  
  iVar1 = *(int *)(*param_1 + 0x98);
  if (_DAT_0061a4ac <= param_2) {
    if (_DAT_0061a4a8 < param_2) {
      param_2 = 8.0;
    }
  }
  else {
    param_2 = 0.125;
  }
  *(float *)(iVar1 + 8) = param_2;
  if (DAT_00647e50 == 0) {
    iVar6 = param_1[0x47];
  }
  else {
    param_2 = (float)*(double *)(iVar1 + 0x80) * param_2;
    iVar6 = param_1[0x47];
  }
  FUN_00542520(iVar6,param_2,0);
  FUN_00542520(param_1[0x41],*(undefined4 *)(iVar1 + 8),0);
  fVar3 = (float10)FUN_005a5f80(iVar1 + 0x24);
  fVar4 = (float10)FUN_005a5ff0(iVar1 + 0x24);
  fVar2 = (float)_DAT_006495d0;
  while( true ) {
    while( true ) {
      *(float *)(iVar1 + 0x20) = fVar2;
      fVar5 = (float10)*(float *)(iVar1 + 8) * (float10)*(float *)(iVar1 + 0x20);
      if (fVar5 * (float10)(float)fVar3 <= (float10)_DAT_0061a4a4) break;
      fVar2 = *(float *)(iVar1 + 0x20) * _DAT_0061a460;
    }
    if (fVar5 * fVar4 <= (float10)_DAT_0061a4a4) break;
    fVar2 = *(float *)(iVar1 + 0x20) * _DAT_0061a460;
  }
  while( true ) {
    while (fVar5 = (float10)*(float *)(iVar1 + 8) * (float10)*(float *)(iVar1 + 0x20),
          fVar5 * (float10)(float)fVar3 < (float10)_DAT_0061a4a0) {
      *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x20);
    }
    if ((float10)_DAT_0061a4a0 <= fVar5 * fVar4) break;
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x20);
  }
  return;
}


