/* Module: rmme3260.dll
   Function: FUN_662619c0
   Address: 662619c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662619c0(void *this,byte *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  byte *local_14 [3];
  int local_8;
  
  local_8 = 0;
  if (param_1 != (byte *)0x0) {
    iVar1 = FUN_66252960(*(void **)((int)this + 4),param_1,&local_8);
    if (iVar1 != 0) {
      return local_8;
    }
  }
  if (param_2 != (char *)0x0) {
    FUN_66250280(local_14,param_2);
    FUN_662509d0((int *)local_14);
    iVar2 = FUN_66252960(*(void **)((int)this + 8),local_14[0],&local_8);
    iVar1 = local_8;
    if (iVar2 != 0) {
      FUN_66250210((int *)local_14);
      return iVar1;
    }
    FUN_66250210((int *)local_14);
  }
  return 0;
}


