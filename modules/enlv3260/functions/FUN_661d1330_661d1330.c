/* Module: enlv3260.dll
   Function: FUN_661d1330
   Address: 661d1330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d1330(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  
  piVar1 = param_1;
  if (param_1[0xb] == 0) {
    return -0x7ffbfff9;
  }
  (**(code **)(*param_1 + 0xc))(param_1);
  iVar2 = param_2;
  piVar1[param_2 + 0xf] = (int)param_3;
  (**(code **)(*param_3 + 4))(param_3);
  piVar1[0x28] = piVar1[0x28] + 1;
  (**(code **)(*piVar1 + 0x10))(piVar1);
  param_1 = (int *)0xffffffff;
  BVar3 = ReleaseSemaphore(*(HANDLE *)(piVar1[0xb] + iVar2 * 4),1,(LPLONG)&param_1);
  return (-(uint)(BVar3 != 0) & 0x7fffbffb) + 0x80004005;
}


