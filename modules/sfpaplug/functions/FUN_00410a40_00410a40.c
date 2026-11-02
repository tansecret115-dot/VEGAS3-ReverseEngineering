/* Module: sfpaplug.dll
   Function: FUN_00410a40
   Address: 00410a40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00410a40(void *this,int *param_1,LPCSTR param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)((int)this + 0x214);
  puVar3 = (undefined4 *)0x0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      return 0;
    }
    puVar3 = *(undefined4 **)piVar1[2];
    if (puVar3 == (undefined4 *)0x0) {
      return 0x8000ffff;
    }
  }
  uVar2 = FUN_004046f0(param_1,param_2,puVar3,*(int *)((int)this + 0x21c),1);
  return uVar2;
}


