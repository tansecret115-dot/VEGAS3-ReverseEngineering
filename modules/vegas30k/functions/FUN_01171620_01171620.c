/* Module: vegas30k.dll
   Function: FUN_01171620
   Address: 01171620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01171620(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar1 = *(int *)(param_1 + 0x59 + param_2 * 4);
    *(int *)(iVar1 + param_3 * 4) = *(int *)(iVar1 + param_3 * 4) + 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x49 + param_2 * 4);
  FUN_01171510(param_1,*(undefined4 *)(iVar1 + param_3 * 4),(int)*(char *)(iVar1 + 0x400 + param_3))
  ;
  return;
}


