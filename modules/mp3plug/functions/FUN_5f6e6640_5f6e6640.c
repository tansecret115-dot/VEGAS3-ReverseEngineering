/* Module: mp3plug.dll
   Function: FUN_5f6e6640
   Address: 5f6e6640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f6e6640(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(in_EAX + 0x4c) < 0) {
    iVar3 = *(int *)(in_EAX + 0x28);
    iVar1 = 1;
    if (*(int *)(iVar3 + 4) == -1) {
      iVar4 = *(int *)(iVar3 + 4);
    }
    else {
      iVar4 = *(int *)(iVar3 + 4);
      do {
        if (param_2 <= iVar4) break;
        iVar4 = *(int *)(iVar3 + 4 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar4 != -1);
    }
    if ((iVar1 != 0xf) && (iVar4 == param_2)) {
      iVar1 = iVar1 + 1;
    }
  }
  else if (*(int *)(in_EAX + 0x4c) < *(int *)(in_EAX + 0x48)) {
    iVar3 = *(int *)(in_EAX + 0x28);
    iVar1 = 1;
    if (*(int *)(iVar3 + 4) != -1) {
      iVar4 = *(int *)(iVar3 + 4);
      do {
        if (param_2 <= iVar4) break;
        iVar4 = *(int *)(iVar3 + 4 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar4 != -1);
    }
  }
  else {
    iVar3 = *(int *)(in_EAX + 0x28);
    iVar1 = 1;
    if (*(int *)(iVar3 + 4) != -1) {
      iVar4 = *(int *)(iVar3 + 4);
      iVar2 = 1;
      while (iVar1 = iVar2, iVar4 < param_2) {
        iVar4 = *(int *)(iVar3 + 4 + iVar2 * 4);
        iVar1 = iVar2 + 1;
        if ((iVar4 == -1) || (param_2 <= iVar4)) break;
        iVar1 = iVar2 + 2;
        iVar4 = *(int *)(iVar3 + iVar1 * 4);
        iVar2 = iVar1;
        if (iVar4 == -1) break;
      }
    }
    if ((iVar1 != 0xf) && (iVar1 = iVar1 + -1, iVar1 == 0)) {
      iVar1 = 0xf;
    }
  }
  iVar3 = FUN_5f6e65a0(2,param_2);
  iVar4 = FUN_5f6e65a0(2,*(int *)(*(int *)(in_EAX + 0x28) + iVar1 * 4));
  *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x4c) - (iVar3 - iVar4);
  return iVar1;
}


