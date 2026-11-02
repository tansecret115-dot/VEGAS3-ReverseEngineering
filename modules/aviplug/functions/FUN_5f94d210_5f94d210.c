/* Module: aviplug.dll
   Function: FUN_5f94d210
   Address: 5f94d210
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong __fastcall
FUN_5f94d210(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,int param_6
            ,int *param_7)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_7 = 0;
  if (*(int *)(param_3 + 4) != 0) {
    uVar2 = __allrem(param_4,param_5,*(uint *)(param_3 + 8),(int)*(uint *)(param_3 + 8) >> 0x1f);
    iVar1 = (int)uVar2;
    if (0 < param_6) {
      do {
        *param_7 = *param_7 + *(int *)(*(int *)(param_3 + 4) + iVar1 * 4);
        iVar1 = (int)((longlong)(iVar1 + 1) % (longlong)*(int *)(param_3 + 8));
        param_6 = param_6 + -1;
        uVar2 = CONCAT44(iVar1,iVar1);
      } while (param_6 != 0);
    }
    return uVar2 & 0xffffffff00000000;
  }
  return CONCAT44(param_2,0x8000ffff);
}


