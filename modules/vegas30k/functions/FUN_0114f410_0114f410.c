/* Module: vegas30k.dll
   Function: FUN_0114f410
   Address: 0114f410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114f410(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x94);
  FUN_0114f480(param_1,*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x88),param_1 + 0xb0,
               *(undefined4 *)(param_1 + 0xb8));
  FUN_0114f5e0(param_1,iVar2 - iVar1,param_1 + 0xc0,*(undefined4 *)(param_1 + 200));
  FUN_0114f730(param_1,0,param_1 + 0xb0);
  FUN_0114f730(param_1,1,param_1 + 0xc0);
  return;
}


