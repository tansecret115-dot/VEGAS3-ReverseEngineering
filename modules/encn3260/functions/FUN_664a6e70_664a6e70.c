/* Module: encn3260.dll
   Function: FUN_664a6e70
   Address: 664a6e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6e70(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x48) + 0x18))(param_2,0);
  uVar2 = 0x80004005;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(iVar1);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    uVar2 = 0;
  }
  return uVar2;
}


