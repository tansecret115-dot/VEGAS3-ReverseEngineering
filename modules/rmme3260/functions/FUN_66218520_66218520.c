/* Module: rmme3260.dll
   Function: FUN_66218520
   Address: 66218520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __fastcall FUN_66218520(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = FUN_662184f0(param_1);
  if (iVar2 == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x46) + 0x38))();
  }
  return uVar1;
}


