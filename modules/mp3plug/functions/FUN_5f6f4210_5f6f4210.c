/* Module: mp3plug.dll
   Function: FUN_5f6f4210
   Address: 5f6f4210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6f4210(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = 0;
  if (0 < in_stack_00000018) {
    do {
      if (*(float *)(in_EAX + iVar1 * 4) <= *(float *)(param_2 + iVar1 * 4)) {
        *(undefined4 *)(in_stack_0000001c + iVar1 * 4) =
             *(undefined4 *)(in_stack_00000010 + iVar1 * 4);
      }
      else {
        *(undefined4 *)(in_stack_0000001c + iVar1 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
      }
      *(float *)(in_stack_00000020 + iVar1 * 4) =
           *(float *)(in_stack_0000001c + iVar1 * 4) * *(float *)(in_stack_00000014 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000018);
  }
  return;
}


