/* Module: sfpaplug.dll
   Function: FUN_00410490
   Address: 00410490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_00410490(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    piVar3 = *(int **)((int)this + 8);
    param_1 = 0;
    iVar2 = (**(code **)*piVar3)(piVar3,&DAT_0044dc80);
    if (-1 < iVar2) {
      (**(code **)(param_1 + 0x10))(&param_1,iVar1);
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return;
}


