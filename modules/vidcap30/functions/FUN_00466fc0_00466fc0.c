/* Module: vidcap30.exe
   Function: FUN_00466fc0
   Address: 00466fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00466fc0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uStack_48;
  undefined4 **ppuStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int *piStack_14;
  int *piStack_8;
  
  puStack_38 = &param_2;
  puStack_3c = &DAT_005a1c68;
  puStack_40 = param_2;
  ppuStack_44 = (undefined4 **)0x466fd9;
  iVar1 = (**(code **)*param_2)();
  if (-1 < iVar1) {
    ppuStack_44 = &puStack_3c;
    uStack_48 = 0x30;
    iVar1 = (**(code **)(*piStack_8 + 0x4c))(piStack_8);
    if (-1 < iVar1) {
      if (*(int *)(param_1 + 0xe8) == 0) {
        puStack_40 = (undefined4 *)(((uint)puStack_40 | 8) - 8);
      }
      else {
        puStack_40 = (undefined4 *)((uint)puStack_40 | 8);
      }
      (**(code **)(*piStack_14 + 0x50))(piStack_14,0x30,&uStack_48);
    }
    (**(code **)(*piStack_14 + 8))(piStack_14);
  }
  return;
}


