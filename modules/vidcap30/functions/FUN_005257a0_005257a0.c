/* Module: vidcap30.exe
   Function: FUN_005257a0
   Address: 005257a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005257a0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar3 = *param_1;
  }
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
  }
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
  }
  FUN_00525830(iVar3,iVar2,iVar1);
  if (iVar2 != 0) {
    FUN_005494b0(iVar3,*(undefined4 *)(iVar2 + 0x35));
    FUN_00549450(iVar2);
    *param_2 = 0;
  }
  if (iVar1 != 0) {
    FUN_005494b0(iVar3,*(undefined4 *)(iVar1 + 0x35));
    FUN_00549450(iVar1);
    *param_3 = 0;
  }
  if (iVar3 != 0) {
    FUN_00549450(iVar3);
    *param_1 = 0;
  }
  return;
}


