/* Module: mp3plug.dll
   Function: FUN_5f6f4270
   Address: 5f6f4270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6f4270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  iVar3 = 0;
  if (0 < in_stack_00000014) {
    do {
      iVar2 = iVar3 * 4;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      if (*(float *)(in_EAX + iVar2) <= *(float *)(param_2 + iVar1)) {
        *(undefined4 *)(in_stack_00000018 + -4 + iVar3 * 4) =
             *(undefined4 *)(in_stack_00000010 + -4 + iVar3 * 4);
      }
      else {
        *(undefined4 *)(in_stack_00000018 + -4 + iVar3 * 4) =
             *(undefined4 *)(param_1 + -4 + iVar3 * 4);
      }
    } while (iVar3 < in_stack_00000014);
  }
  return;
}


