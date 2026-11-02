/* Module: rmbe3260.dll
   Function: FUN_660039c0
   Address: 660039c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_660039c0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0xc))
                    (*(int **)(param_1 + 0x104),DAT_66075000,&local_8);
  if (-1 < iVar1) {
    fVar2 = FUN_66003a30(param_1);
    if (fVar2 != (float10)_DAT_660624ec) {
      (**(code **)(*local_8 + 0x20))(local_8,(float)fVar2);
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}


