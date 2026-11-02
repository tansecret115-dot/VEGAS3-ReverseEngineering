/* Module: rmbe3260.dll
   Function: FUN_6603e060
   Address: 6603e060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603e060(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar1 = param_1;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  iVar2 = FUN_6605edb0((void *)((int)this + 0x48),(uint)param_1,(int *)&local_8);
  if (iVar2 != 0) {
    param_1 = local_8;
    uVar3 = FUN_6603e0c0(puVar1,(int *)&param_1,&local_c);
    return uVar3;
  }
  return 0xfff2;
}


