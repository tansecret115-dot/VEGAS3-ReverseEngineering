/* Module: aviplug.dll
   Function: FUN_5f93c070
   Address: 5f93c070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f93c070(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_3 = 0xac44;
  if ((*(int *)((int)this + 0x184) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x184) + 0x424), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x16) != 0) {
      *param_3 = *(undefined4 *)(*(int *)(iVar1 + 0x16) + 4);
      return 0;
    }
    *param_3 = *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


