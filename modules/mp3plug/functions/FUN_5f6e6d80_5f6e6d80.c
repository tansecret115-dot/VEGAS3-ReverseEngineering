/* Module: mp3plug.dll
   Function: FUN_5f6e6d80
   Address: 5f6e6d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e6d80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x20c) * 8) = param_2;
  *(undefined4 *)(param_1 + 4 + *(int *)(param_1 + 0x20c) * 8) = param_3;
  iVar1 = *(int *)(param_1 + 0x20c) + 1;
  *(uint *)(param_1 + 0x20c) =
       iVar1 - (((uint)(iVar1 >> 5) >> 0x1a) + 1 + *(int *)(param_1 + 0x20c) & 0xffffffc0);
  return;
}


