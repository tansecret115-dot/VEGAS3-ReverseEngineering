/* Module: rmbe3260.dll
   Function: FUN_6603e9a0
   Address: 6603e9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603e9a0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  if (param_1 == (int *)0x0) {
    return 0xfff9;
  }
  uStack_18 = 0x6603e9c1;
  puVar2 = operator_new(0x62);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_66035ed0(puVar2);
  }
  *(int **)((int)this + 0x7c) = piVar3;
  iVar1 = *piVar3;
  FUN_6605b7e0(auStack_1c,s_logical_fileinfo_6606e16c);
  (**(code **)(iVar1 + 0x30))();
  (**(code **)(**(int **)((int)this + 0x7c) + 0x34))(param_1,0);
  *(int **)((int)this + 0x80) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


