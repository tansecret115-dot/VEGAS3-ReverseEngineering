/* Module: vegas30.exe
   Function: FUN_005021d0
   Address: 005021d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005021d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short unaff_BX;
  undefined4 *unaff_retaddr;
  undefined4 extraout_var;
  int **ppiVar4;
  int *local_14;
  undefined4 local_10;
  
  ppiVar4 = &local_14;
  local_14 = (int *)0x0;
  FUN_00503030(L"#text");
  iVar2 = FUN_00502100(param_1,extraout_var,ppiVar4);
  if ((-1 < iVar2) && (local_14 != (int *)0x0)) {
    local_10 = (uint)local_10._2_2_ << 0x10;
    iVar2 = (**(code **)(*local_14 + 0x20))(local_14,&local_10);
    iVar1 = local_10;
    if ((-1 < iVar2) && (unaff_BX == 8)) {
      Ordinal_6(*unaff_retaddr);
      uVar3 = Ordinal_2(iVar1);
      *unaff_retaddr = uVar3;
    }
    Ordinal_9(&stack0xffffffe8);
  }
  return iVar2;
}


