/* Module: sdpp3260.dll
   Function: FUN_10005c60
   Address: 10005c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_10005c60(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(*param_1 + 4);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_10002800(param_1 + 1);
    return *puVar2;
  }
  return 0;
}


