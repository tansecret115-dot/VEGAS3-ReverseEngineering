/* Module: vegas30.exe
   Function: FUN_00535ff0
   Address: 00535ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00535ff0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_930 [588];
  
  iVar1 = FUN_005fb200(1);
  if (-1 < iVar1) {
    puVar2 = local_930;
    for (iVar1 = 0x24c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    iVar1 = FUN_00532af0(param_2,local_930);
    local_930[1] = *(undefined4 *)(param_2 + 0x10c);
    if (-1 < iVar1) {
      FUN_00535250(param_1,local_930);
    }
  }
  return;
}


