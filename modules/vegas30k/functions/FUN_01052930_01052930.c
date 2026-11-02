/* Module: vegas30k.dll
   Function: FUN_01052930
   Address: 01052930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01052930(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != 1) {
    ppuVar1 = &PTR_FUN_01205938;
    puVar2 = (undefined4 *)(param_1 + 0x10);
    do {
      (*(code *)*ppuVar1)(param_1,*puVar2,param_2,param_3,param_4);
      ppuVar1 = ppuVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (ppuVar1 < &PTR_s_The_reason_for_the_error_could_n_01205950);
    return 1;
  }
  iVar3 = 1;
  ppuVar1 = &PTR_FUN_01205938;
  do {
    (*(code *)*ppuVar1)(param_1,0,1,iVar3,param_4);
    ppuVar1 = ppuVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (ppuVar1 < &PTR_s_The_reason_for_the_error_could_n_01205950);
  return 1;
}


