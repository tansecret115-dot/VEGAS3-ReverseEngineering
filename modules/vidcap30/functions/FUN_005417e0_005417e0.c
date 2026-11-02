/* Module: vidcap30.exe
   Function: FUN_005417e0
   Address: 005417e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005417e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x94);
  FUN_00541850(param_1,*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x88),param_1 + 0xb0,
               *(undefined4 *)(param_1 + 0xb8));
  FUN_005419b0(param_1,iVar2 - iVar1,param_1 + 0xc0,*(undefined4 *)(param_1 + 200));
  FUN_00541b00(param_1,0,param_1 + 0xb0);
  FUN_00541b00(param_1,1,param_1 + 0xc0);
  return;
}


