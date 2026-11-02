/* Module: oggplug.dll
   Function: FUN_0043cb80
   Address: 0043cb80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_0043cb80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + param_3 * 4);
  if (iVar2 < 0) {
    return *(int *)(param_2 + param_3 * 4);
  }
  iVar1 = *(int *)(param_2 + param_3 * 4);
  if (-1 < iVar1) {
    iVar2 = iVar2 + iVar1 >> 1;
  }
  return iVar2;
}


