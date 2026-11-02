/* Module: vidpcore.dll
   Function: FUN_5de05750
   Address: 5de05750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de05750(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000014;
  
  BVar3 = IsBadWritePtr(in_stack_00000014,0x48);
  if (BVar3 != 0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (in_stack_00000014 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0xbc);
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
    *in_stack_00000014 = 0;
    puVar5 = in_stack_00000014 + 2;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    in_stack_00000014[3] = uVar2;
    in_stack_00000014[5] = uVar1;
    in_stack_00000014[7] = 1;
    in_stack_00000014[9] = 0x7fffffff;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return 0;
}


