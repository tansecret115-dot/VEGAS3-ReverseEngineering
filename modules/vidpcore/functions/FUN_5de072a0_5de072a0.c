/* Module: vidpcore.dll
   Function: FUN_5de072a0
   Address: 5de072a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de072a0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    param_1[4] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_3;
    param_1[1] = param_3;
    param_1[5] = 0;
    param_1[6] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    piVar2 = (int *)param_1[4];
    param_1[0x1a] = 0;
    *(undefined1 *)(param_1 + 0x1b) = 1;
    param_1[0x1d] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x20] = 0;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      while (iVar1 != 0) {
        (*(code *)piVar2[8])(1);
        if (*param_1 == 100) {
          piVar2 = piVar2 + 7;
        }
        else {
          piVar2 = piVar2 + 9;
        }
        iVar1 = *piVar2;
      }
    }
    return 0;
  }
  return 0x80070057;
}


