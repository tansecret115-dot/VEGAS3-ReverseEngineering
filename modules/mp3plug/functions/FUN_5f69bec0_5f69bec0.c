/* Module: mp3plug.dll
   Function: FUN_5f69bec0
   Address: 5f69bec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69bec0(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_4;
  
  iVar5 = 0;
  local_4 = 0;
  iVar1 = **(int **)((int)this + 0x18);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x18) + 8) + iVar5 * 4);
      iVar3 = FUN_5f69a6a0(iVar2);
      if (iVar3 == param_1) {
        if (param_2 == local_4) {
          if (param_3 != (undefined4 *)0x0) {
            uVar4 = FUN_5f69a6b0(iVar2);
            *param_3 = uVar4;
          }
          return iVar2;
        }
        local_4 = local_4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return 0;
}


