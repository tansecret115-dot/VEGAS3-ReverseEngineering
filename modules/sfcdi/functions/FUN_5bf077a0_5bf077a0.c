/* Module: sfcdi.dll
   Function: FUN_5bf077a0
   Address: 5bf077a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf077a0(void)

{
  uint uVar1;
  tPARAMETERS_DEVDES *ptVar2;
  long lVar3;
  uint uVar4;
  HSFCD__ *local_68;
  undefined4 local_64 [13];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = *DAT_5bf65ff4;
  uVar4 = 0;
  if (uVar1 == 0) {
    return 0;
  }
  do {
    ptVar2 = *(tPARAMETERS_DEVDES **)(DAT_5bf65ff4[2] + uVar4 * 4);
    if (*(int *)ptVar2 != -1) {
      local_68 = (HSFCD__ *)0x0;
      lVar3 = cdr_Open(ptVar2,&local_68);
      if (-1 < lVar3) {
        local_64[0] = 100;
        cdr_GetDeviceCaps(local_68,(cdrcaps_tag *)local_64);
        cdr_Close(local_68);
        *(undefined4 *)(ptVar2 + 0x1a0) = local_30;
        *(undefined4 *)(ptVar2 + 0x1a4) = local_2c;
        *(undefined4 *)(ptVar2 + 0x1a8) = local_28;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar1);
  return 0;
}


