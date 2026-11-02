/* Module: mpgmux.dll
   Function: FUN_100012f0
   Address: 100012f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_100012f0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = (int *)param_2[1]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    iVar2 = iVar2 + *piVar1;
  }
  return *param_2 - iVar2;
}


