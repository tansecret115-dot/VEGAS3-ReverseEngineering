/* Module: vidcap30.exe
   Function: FUN_00497c50
   Address: 00497c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00497c50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != 1) {
    ppuVar1 = &PTR_FUN_005b6d1c;
    puVar2 = (undefined4 *)(param_1 + 0x10);
    do {
      (*(code *)*ppuVar1)(param_1,*puVar2,param_2,param_3,param_4);
      ppuVar1 = ppuVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (ppuVar1 < &DAT_005b6d34);
    return 1;
  }
  iVar3 = 1;
  ppuVar1 = &PTR_FUN_005b6d1c;
  do {
    (*(code *)*ppuVar1)(param_1,0,1,iVar3,param_4);
    ppuVar1 = ppuVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (ppuVar1 < &DAT_005b6d34);
  return 1;
}


