/* Module: vidcap30.exe
   Function: FUN_00443b20
   Address: 00443b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443b20(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x38) & param_3) != (param_2 & param_3 & param_3)) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    FUN_0042f4b0(iVar1,1);
    *(uint *)(param_1 + 0x38) = ~param_3 & *(uint *)(param_1 + 0x38) | param_2 & param_3;
    **(uint **)(iVar1 + 4) = **(uint **)(iVar1 + 4) | 0x80;
    FUN_0042f5d0(iVar1,1);
  }
  return;
}


