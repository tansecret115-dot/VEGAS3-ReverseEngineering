/* Module: tokr3260.dll
   Function: FUN_68056c00
   Address: 68056c00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68056c00(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  float *pfVar4;
  int iVar5;
  int local_8;
  
  puVar1 = malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
    return -999999;
  }
  local_8 = 0;
  if (0 < param_2) {
    do {
      puVar2 = malloc(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        return -999999;
      }
      puVar2[3] = puVar1;
      pvVar3 = calloc(0x42f,4);
      *puVar2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return -999999;
      }
      pvVar3 = calloc(0x22f,4);
      puVar2[1] = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return -999999;
      }
      pvVar3 = calloc(0x22f,4);
      puVar2[2] = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return -999999;
      }
      local_8 = local_8 + 1;
      *param_1 = puVar2;
      param_1 = param_1 + 1;
    } while (local_8 < param_2);
  }
  *puVar1 = 0x30;
  pfVar4 = calloc(0x30,4);
  puVar1[1] = pfVar4;
  if (pfVar4 == (float *)0x0) {
    return -999999;
  }
  iVar5 = FUN_68058b70(0x30,pfVar4);
  return (-(uint)(iVar5 != -999999) & 999999) - 999999;
}


