/* Module: g2plug.dll
   Function: FUN_5f804ae0
   Address: 5f804ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_5f804ae0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    piVar3 = *(int **)((int)this + 0x14);
    param_1 = 0;
    iVar2 = (**(code **)*piVar3)(piVar3,&DAT_5f869c80);
    if (-1 < iVar2) {
      (**(code **)(param_1 + 0x10))(&param_1,iVar1);
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return;
}


