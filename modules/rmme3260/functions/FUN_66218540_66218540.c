/* Module: rmme3260.dll
   Function: FUN_66218540
   Address: 66218540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66218540(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_662184f0(param_1);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x46) + 4))();
  }
  return uVar2;
}


