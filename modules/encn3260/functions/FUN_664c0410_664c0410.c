/* Module: encn3260.dll
   Function: FUN_664c0410
   Address: 664c0410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c0410(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)*param_1 + 4);
  FUN_664c3ab0((void *)*param_1,iVar1 * 2,0xffffffff);
  uVar2 = param_1[2];
  if (uVar2 < (uint)param_1[1]) {
    if (-1 < (int)uVar2) {
      iVar3 = (uVar2 + iVar1) * 4;
      do {
        uVar2 = uVar2 - 1;
        *(undefined4 *)(iVar3 + *(int *)*param_1) =
             *(undefined4 *)(*(int *)*param_1 + 4 + uVar2 * 4);
        iVar3 = iVar3 + -4;
      } while (-1 < (int)uVar2);
    }
    param_1[2] = param_1[2] + iVar1;
  }
  return;
}


