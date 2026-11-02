/* Module: wavplug.dll
   Function: FUN_5f38b5f0
   Address: 5f38b5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f38b5f0(void *this,undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (((param_2 != 0) && (*(int *)((int)this + 0x220) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x220) + 0x424), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x16) == 0) {
      *param_3 = *(int *)(iVar1 + 4);
    }
    else {
      *param_3 = *(int *)(*(int *)(iVar1 + 0x16) + 4);
    }
  }
  if (*param_3 == 0) {
    *param_3 = 0xac44;
  }
  return 0;
}


