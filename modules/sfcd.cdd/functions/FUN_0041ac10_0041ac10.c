/* Module: sfcd.cdd
   Function: FUN_0041ac10
   Address: 0041ac10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ac10(HSFCD__ *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_0041ab30(param_1,param_2,(byte)param_3,&local_14,&param_3);
  if ((-1 < iVar1) && (local_14 < local_10)) {
    local_8 = param_3 >> 8 & 0xff;
    local_4 = param_3 & 0xff;
    local_c = param_3 >> 0x10 & 0xff;
    FUN_0041ef20((int *)&param_3,(int *)&local_c);
    param_3 = param_3 - 0x2c88;
    uVar2 = param_2[3] - 1;
    if (-1 < (int)uVar2) {
      while( true ) {
        iVar1 = FUN_0041f490((int)param_2,uVar2);
        if ((*(uint *)(iVar1 + 0x14) < param_3) && (param_3 < (uint)param_2[0x763])) break;
        uVar2 = uVar2 - 1;
        if (0x7fffffff < uVar2) {
          return 0;
        }
      }
      param_2[0x763] = param_3;
      param_2[3] = uVar2 + 1;
      param_2[1] = *param_2 + uVar2;
      *(uint *)(iVar1 + 0x18) = param_3 - *(int *)(iVar1 + 0x14);
    }
  }
  return 0;
}


