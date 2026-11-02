/* Module: sftrans1.dll
   Function: FUN_00543120
   Address: 00543120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00543120(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004dc9c0(*(undefined4 *)(param_1 + 8),param_2,0,0xffffffff,&LAB_005430a0);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 4) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 8) + 4) * iVar1 + 4 + *(int *)(*(int *)(param_1 + 8) + 8));
    return 0;
  }
  return 0x80004005;
}


