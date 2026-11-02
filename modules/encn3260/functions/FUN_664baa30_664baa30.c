/* Module: encn3260.dll
   Function: FUN_664baa30
   Address: 664baa30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664baa30(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[2];
  puVar2 = *(undefined4 **)(iVar1 + 4);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  param_1[2] = (int)puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    (**(code **)(*param_1 + 0x20))(iVar1);
    return uVar3;
  }
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x20))(iVar1);
  return uVar3;
}


