/* Module: sctplug.dll
   Function: FUN_00409730
   Address: 00409730
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00409730(void *this,int *param_1,LPCSTR param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)((int)this + 0x214);
  puVar3 = (undefined4 *)0x0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      return 0;
    }
    puVar3 = *(undefined4 **)piVar1[2];
    if (puVar3 == (undefined4 *)0x0) {
      return -0x7fff0001;
    }
  }
  iVar2 = FUN_0040aee0(param_1,param_2,puVar3,*(int *)((int)this + 0x21c));
  return iVar2;
}


