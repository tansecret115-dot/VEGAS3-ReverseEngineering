/* Module: oggplug.dll
   Function: FUN_00404b10
   Address: 00404b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __fastcall FUN_00404b10(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  local_4 = 0;
  iVar1 = (**(code **)*piVar4)(piVar4,&DAT_00446be0);
  if (-1 < iVar1) {
    piVar3 = (int *)0x40;
    puVar2 = (undefined1 *)(**(code **)(*piVar4 + 0x20))(piVar4,0x40,&local_4);
    (**(code **)(*piVar3 + 8))(piVar3);
    return puVar2;
  }
  return (undefined1 *)&local_4;
}


