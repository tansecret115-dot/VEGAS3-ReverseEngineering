/* Module: mp3plug.dll
   Function: FUN_5f6cd9e0
   Address: 5f6cd9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6cd9e0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_5f6cd690(param_1,param_2,param_3,*(int *)(param_1 + 0xf8),(int *)(param_1 + 0x100),
                       *(int *)(param_1 + 0xfc));
  if (*(int *)(param_1 + 0x100) == *(int *)(param_1 + 0xfc)) {
    FUN_5f6cf800(*(uint **)(param_1 + 200),*(int *)(param_1 + 0xf8),*(int *)(param_1 + 0x104),
                 (uint *)(param_1 + 0xfc),(int *)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
  }
  return iVar1;
}


