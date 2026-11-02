/* Module: oggplug.dll
   Function: FUN_00431010
   Address: 00431010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00431010(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  FUN_00431050(param_1,param_2,(size_t *)0x1);
  puVar1 = (undefined4 *)param_1[0x1a];
  puVar2 = FUN_00432550(param_2);
  puVar1[0xc] = puVar2;
  piVar3 = calloc(1,0x24);
  *puVar1 = piVar3;
  FUN_004368b0(piVar3,param_2);
  return 0;
}


