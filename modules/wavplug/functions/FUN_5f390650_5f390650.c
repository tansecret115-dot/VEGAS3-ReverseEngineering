/* Module: wavplug.dll
   Function: FUN_5f390650
   Address: 5f390650
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5f390650(void *this,int *param_1,LPCSTR param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  piVar1 = *(int **)((int)this + 0x214);
  puVar2 = (undefined4 *)0x0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      return 0;
    }
    puVar2 = *(undefined4 **)piVar1[2];
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8000ffff;
    }
  }
  uVar3 = FUN_5f394360(param_1,param_2,puVar2,*(int *)((int)this + 0x21c),0,0,1);
  return uVar3;
}


