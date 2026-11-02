/* Module: vegas30.exe
   Function: FUN_005ba670
   Address: 005ba670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ba670(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(iVar1 + 0x30);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(iVar1 + 0x34);
    param_5[1] = *(undefined4 *)(iVar1 + 0x38);
  }
  if (param_4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(iVar1 + 0x40);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_4 = *puVar3;
      puVar3 = puVar3 + 1;
      param_4 = param_4 + 1;
    }
  }
  FUN_005ba030(param_1,iVar1,0,1);
  FUN_005b8c00(param_1,param_2);
  return;
}


