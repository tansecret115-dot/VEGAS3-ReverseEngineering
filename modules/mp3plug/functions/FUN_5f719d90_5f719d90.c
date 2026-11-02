/* Module: mp3plug.dll
   Function: FUN_5f719d90
   Address: 5f719d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f719d90(undefined4 param_1,int *param_2)

{
  void *in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2[7] == 0) {
    return 1;
  }
  if (*param_2 == 1) {
    if ((char)param_2[8] == '\0') {
      iVar1 = 9;
    }
    else {
      iVar1 = 0x11;
    }
  }
  else if ((char)param_2[8] == '\0') {
    iVar1 = 0x11;
  }
  else {
    iVar1 = 0x20;
  }
  *(uint *)((int)in_EAX + 0x1c) =
       *(int *)((int)in_EAX + 0x1c) - 0x20U & *(int *)((int)in_EAX + 0xc) - 1U;
  *(int *)((int)in_EAX + 0x18) = *(int *)((int)in_EAX + 0x18) + -0x20;
  *(int *)((int)in_EAX + 0x10) = *(int *)((int)in_EAX + 0x10) + 0x20;
  uVar2 = FUN_5f71e100(in_EAX,0x10,0xffff);
  uVar3 = FUN_5f714080(in_EAX,0x10);
  uVar2 = FUN_5f71e100(in_EAX,iVar1 << 3,uVar2 & 0xffff);
  if ((uVar2 & 0xffff) == (uVar3 & 0xffff)) {
    if (iVar1 != 0) {
      *(int *)((int)in_EAX + 0x18) = *(int *)((int)in_EAX + 0x18) + iVar1 * -8;
      *(int *)((int)in_EAX + 0x10) = *(int *)((int)in_EAX + 0x10) + iVar1 * 8;
      *(uint *)((int)in_EAX + 0x1c) =
           iVar1 * -8 + *(int *)((int)in_EAX + 0x1c) & *(int *)((int)in_EAX + 0xc) - 1U;
    }
    return 1;
  }
  return 0;
}


