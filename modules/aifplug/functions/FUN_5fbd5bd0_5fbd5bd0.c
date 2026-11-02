/* Module: aifplug.dll
   Function: FUN_5fbd5bd0
   Address: 5fbd5bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5fbd5bd0(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_3 = 0xac44;
  if (((param_2 != 0) && (*(int *)((int)this + 0x224) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x224) + 0x424), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x16) != 0) {
      *param_3 = *(undefined4 *)(*(int *)(iVar1 + 0x16) + 4);
      return 0;
    }
    *param_3 = *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


