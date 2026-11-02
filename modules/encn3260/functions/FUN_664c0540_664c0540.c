/* Module: encn3260.dll
   Function: FUN_664c0540
   Address: 664c0540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664c0540(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[3];
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = param_1[1];
  uVar3 = *(undefined4 *)(*(int *)*param_1 + iVar2 * 4);
  if (iVar2 == ((int *)*param_1)[1] + -1) {
    param_1[1] = 0;
    param_1[3] = iVar1 + -1;
    return uVar3;
  }
  param_1[3] = iVar1 + -1;
  param_1[1] = iVar2 + 1;
  return uVar3;
}


