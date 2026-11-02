/* Module: sfxpfx2.dll
   Function: FUN_5c8984c0
   Address: 5c8984c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8984c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  piVar3 = &local_4;
  piVar2 = *(int **)(param_1 + 0x30);
  local_4 = param_1;
  iVar1 = (**(code **)*piVar2)(piVar2,&DAT_5c8dba20,&local_4);
  if (-1 < iVar1) {
    (**(code **)(*piVar2 + 0x14))(piVar2,(undefined1 *)((int)piVar3 + -0x9e33));
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}


