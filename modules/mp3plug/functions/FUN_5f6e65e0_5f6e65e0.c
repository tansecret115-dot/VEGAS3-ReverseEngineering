/* Module: mp3plug.dll
   Function: FUN_5f6e65e0
   Address: 5f6e65e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f6e65e0(undefined4 param_1,int param_2)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(in_EAX + 0x34);
  if (iVar2 == 1) {
    uVar1 = 0;
  }
  else if (iVar2 == 2) {
    uVar1 = 1;
  }
  else if (iVar2 == 0) {
    iVar2 = FUN_5f6e65a0(1,param_2);
    iVar2 = *(int *)(in_EAX + 0x44) - iVar2;
    *(int *)(in_EAX + 0x44) = iVar2;
    if (iVar2 < 0) {
      *(int *)(in_EAX + 0x44) = iVar2 + *(int *)(in_EAX + 0x24);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


