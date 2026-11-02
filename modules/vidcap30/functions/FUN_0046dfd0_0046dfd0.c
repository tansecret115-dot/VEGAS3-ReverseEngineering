/* Module: vidcap30.exe
   Function: FUN_0046dfd0
   Address: 0046dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046dfd0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0 || iVar2 != 0) {
    uVar4 = __allmul(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),100,0);
    uVar3 = __alldiv(uVar4,iVar1,iVar2);
    *param_2 = uVar3;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x20);
  param_3[1] = *(undefined4 *)(param_1 + 0x24);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return 0;
}


