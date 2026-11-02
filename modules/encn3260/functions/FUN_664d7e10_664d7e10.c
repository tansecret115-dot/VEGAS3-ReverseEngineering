/* Module: encn3260.dll
   Function: FUN_664d7e10
   Address: 664d7e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d7e10(void *this,char *param_1)

{
  uint uVar1;
  char *_Str2;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_664d79b0(param_1);
  uVar1 = (**(code **)((int)this + 8))(param_1);
  puVar3 = *(undefined4 **)(*(int *)((int)this + 0x18) + (uVar1 % *(uint *)((int)this + 0xc)) * 4);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    _Str2 = (char *)(**(code **)(*(int *)*puVar3 + 0x20))();
    iVar2 = _stricmp(param_1,_Str2);
    if (iVar2 == 0) {
      return puVar3;
    }
    puVar3 = (undefined4 *)puVar3[3];
  } while (puVar3 != (undefined4 *)0x0);
  return (undefined4 *)0x0;
}


