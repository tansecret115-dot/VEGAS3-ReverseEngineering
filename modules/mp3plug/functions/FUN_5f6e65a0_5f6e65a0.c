/* Module: mp3plug.dll
   Function: FUN_5f6e65a0
   Address: 5f6e65a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f6e65a0(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (*(int *)(in_EAX + 0x20) >> 3) * param_2;
  if (param_1 == 1) {
    iVar1 = iVar1 % *(int *)(in_EAX + 0x24);
  }
  else if (param_1 == 2) {
    iVar1 = iVar1 / *(int *)(in_EAX + 0x24);
  }
  return iVar1;
}


