/* Module: mp3plug.dll
   Function: FUN_5f6e2000
   Address: 5f6e2000
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f6e2000(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x20) == 0) {
    iVar1 = 0x480;
  }
  else {
    iVar1 = 0x240;
  }
  return (((iVar1 >> 3) * *(int *)(&DAT_5f73fdd0 + param_2 * 4 + *(int *)(in_EAX + 0x20) * 0x40)) /
         *(int *)(in_EAX + 8)) * 8;
}


