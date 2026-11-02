/* Module: vidpcore.dll
   Function: FUN_5df0a7f0
   Address: 5df0a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5df0a7f0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 uVar4;
  int local_4;
  
  uVar1 = *(ushort *)(param_1 + 0x7cc);
  local_4 = 0;
  iVar3 = FUN_5df0a440(param_2,&local_4);
  if (iVar3 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_5df12d80();
    uVar2 = uVar2 & uVar1;
  }
  uVar4 = 0;
  if (local_4 != 0) {
    FUN_5de03b10(local_4);
    uVar4 = extraout_var;
  }
  return CONCAT22(uVar4,uVar2);
}


