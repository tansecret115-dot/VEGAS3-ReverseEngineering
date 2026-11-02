/* Module: tokr3260.dll
   Function: FUN_68056d70
   Address: 68056d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68056d70(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  
  puVar1 = malloc(4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfff0bdc1;
  }
  iVar4 = 0;
  if (0 < param_2) {
    do {
      puVar2 = malloc(8);
      if (puVar2 == (undefined4 *)0x0) {
        return 0xfff0bdc1;
      }
      puVar2[1] = puVar1;
      pvVar3 = calloc(0x400,4);
      *puVar2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return 0xfff0bdc1;
      }
      iVar4 = iVar4 + 1;
      *param_1 = puVar2;
      param_1 = param_1 + 1;
    } while (iVar4 < param_2);
  }
  pvVar3 = calloc(0x200,4);
  *puVar1 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  iVar4 = FUN_68058900(0x200,'\0','\0',0,0x3ff00000,(int)pvVar3);
  if (iVar4 == -999999) {
    return 0xfff0bdc1;
  }
  FUN_68058050();
  return 0;
}


