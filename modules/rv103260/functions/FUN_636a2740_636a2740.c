/* Module: rv103260.dll
   Function: FUN_636a2740
   Address: 636a2740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636a2740(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  if (*(short *)(param_1 + 8) != 0) {
    piVar4 = (int *)(param_1 + 10);
    do {
      iVar1 = *piVar4;
      iVar2 = ftol();
      uVar3 = (*(int *)(param_1 + 400) * 100) / iVar2;
      *(uint *)(iVar1 + 0xe4) = uVar3;
      if (100 < uVar3) {
        *(undefined4 *)(iVar1 + 0xe4) = 100;
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < (int)(uint)*(ushort *)(param_1 + 8));
  }
  return 0;
}


