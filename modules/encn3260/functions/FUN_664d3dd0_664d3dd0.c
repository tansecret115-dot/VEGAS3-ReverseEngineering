/* Module: encn3260.dll
   Function: FUN_664d3dd0
   Address: 664d3dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d3dd0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_c,&local_8,param_1);
  if (iVar1 == 0) {
    pvVar2 = operator_new(0xc);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_664d8060((int)pvVar2);
    }
    puVar3[2] = param_2;
    FUN_664d80e0(*(void **)(local_8 + 0x1c),puVar3);
    *(int *)(local_8 + 0x20) = *(int *)(local_8 + 0x20) + 1;
    return *(undefined4 *)(local_c + 8);
  }
  return 0;
}


