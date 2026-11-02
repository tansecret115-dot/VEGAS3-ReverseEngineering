/* Module: mp3plug.dll
   Function: FUN_5f6eb600
   Address: 5f6eb600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6eb600(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_ac [40];
  
  puVar3 = (undefined4 *)(param_4 + 0xc);
  puVar4 = local_ac;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_5f6eb180(param_3,param_2);
  puVar3 = local_ac;
  puVar4 = (undefined4 *)(param_4 + 0xc);
  for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return iVar1;
}


