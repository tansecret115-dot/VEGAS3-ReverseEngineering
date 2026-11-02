/* Module: rmme3260.dll
   Function: FUN_66236fb0
   Address: 66236fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66236fb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  while (iVar1 = iVar2, iVar1 != 0) {
    param_1 = iVar1;
    iVar2 = *(int *)(iVar1 + 0x4c);
  }
  local_18 = *(undefined4 *)(param_1 + 0x111);
  local_1c = 0x102;
  local_14 = 0x1b;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),&local_1c);
  return;
}


