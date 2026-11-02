/* Module: aviplug.dll
   Function: FUN_5f937000
   Address: 5f937000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f937000(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar1 = -0x7fffbffb;
  iVar3 = 1;
  ppuVar2 = &PTR_PTR_5f9f1e34;
  do {
    if (-1 < iVar1) {
      return;
    }
    if ((*(int *)(*ppuVar2 + 0x94) != 0) && (*(int *)(*(int *)(*ppuVar2 + 0x94) + 0x14) == param_2))
    {
      *param_3 = iVar3;
      iVar1 = 0;
    }
    ppuVar2 = ppuVar2 + 0x10b;
    iVar3 = iVar3 + 1;
  } while (ppuVar2 < &PTR_s_An_error_occurred_while_creating_5f9f2ee4);
  return;
}


