/* Module: vegas30.exe
   Function: FUN_005246e0
   Address: 005246e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005246e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar2 = FUN_005256c0(param_1);
    iVar3 = FUN_0050a0a0(uVar2,&param_1);
    if (-1 < iVar3) {
      FUN_00508c50(*(undefined4 *)(iVar1 + 0xfc));
      *(undefined4 *)(iVar1 + 0xfc) = 0;
      uVar2 = FUN_00509ea0(0);
      *(undefined4 *)(iVar1 + 0xfc) = uVar2;
      *(undefined4 *)(iVar1 + 0x100) = 0;
      FUN_005277b0(iVar1);
      uVar2 = FUN_0050a040(*(undefined4 *)(iVar1 + 0x10c),param_1);
      FUN_005256f0(iVar1,uVar2,1);
      FUN_00525460(iVar1);
      FUN_00524880(iVar1);
      FUN_00524ad0(iVar1);
    }
  }
  return iVar3;
}


