/* Module: erv13260.dll
   Function: FUN_635f1e70
   Address: 635f1e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_635f1e70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char local_10c [260];
  uint local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_63602b90(puVar1);
  }
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    local_8 = 0x104;
    FUN_63602f80(&DAT_63605230,s_rncolor_63605238,local_10c,&local_8);
    iVar2 = FUN_63602c10((void *)param_1[1],local_10c,2);
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)param_1[1];
      if (puVar1 != (undefined4 *)0x0) {
        FUN_63602bb0(puVar1);
        operator_delete(puVar1);
      }
      param_1[1] = 0;
      *param_1 = 0x80004005;
      return param_1;
    }
    FUN_635f1ff0(param_1);
  }
  return param_1;
}


