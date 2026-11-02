/* Module: mp3plug.dll
   Function: FUN_5f705730
   Address: 5f705730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f705730(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      uVar3 = 0;
      uVar2 = *(uint *)(param_1 + 8);
      if (uVar2 != 0) {
        while( true ) {
          iVar1 = *(int *)(iVar1 + uVar3 * 4);
          if (iVar1 != 0) {
            FUN_5f6d97a0(iVar1);
            uVar2 = *(uint *)(param_1 + 8);
          }
          uVar3 = uVar3 + 1;
          if (uVar2 <= uVar3) break;
          iVar1 = *(int *)(param_1 + 0xc);
        }
      }
      FUN_5f6d97a0(*(int *)(param_1 + 0xc));
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}


