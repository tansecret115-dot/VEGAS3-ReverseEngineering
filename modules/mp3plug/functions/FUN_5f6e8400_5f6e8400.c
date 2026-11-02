/* Module: mp3plug.dll
   Function: FUN_5f6e8400
   Address: 5f6e8400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6e8400(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
  *(int *)(param_1 + 0x524) = *(int *)(param_1 + 0x524) + 1;
  *(int *)(param_1 + 0x69c) = param_2 + *(int *)(param_1 + 0x69c);
  FUN_5f6e90a0(*(int *)(param_1 + 0x51c),param_1 + 0x1c,*(int *)(param_1 + 0x69c),param_1 + 0x6a0,
               *(int *)(param_1 + 0x530));
  iVar1 = FUN_5f6ea1b0(*(int *)(param_1 + 0x530),*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 0x51c),param_1 + 0x1c,0,(int *)(param_1 + 0x82c));
  iVar2 = FUN_5f6eb600(*(undefined4 *)(param_1 + 0x51c),(int *)(param_1 + 0x1c),
                       *(int *)(param_1 + 0x530),param_1 + 0x538);
  return iVar2 + iVar1;
}


