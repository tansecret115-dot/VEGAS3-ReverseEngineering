/* Module: sfcdi.dll
   Function: FUN_5bf18d60
   Address: 5bf18d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf18d60(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  puVar3 = param_1;
  for (iVar2 = 99; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_5bf18cd0(param_1,(int *)&param_1,param_2,param_4);
  FUN_5bf18910(puVar1 + 0x13,(SIZE_T)param_1,8);
  return;
}


