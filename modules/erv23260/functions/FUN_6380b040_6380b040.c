/* Module: erv23260.dll
   Function: FUN_6380b040
   Address: 6380b040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6380b040(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_63817f76;
  local_c = ExceptionList;
  uVar2 = 0;
  if (param_2 == 3) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_637f2000(0x590);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_638114e0(puVar1);
      goto LAB_6380b0ab;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_637f2000(0x260);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_6380d0c0(puVar1);
      goto LAB_6380b0ab;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_6380b0ab:
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 2;
  }
  ExceptionList = local_c;
  return uVar2;
}


