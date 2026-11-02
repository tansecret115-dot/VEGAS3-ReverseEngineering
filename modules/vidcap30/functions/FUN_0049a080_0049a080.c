/* Module: vidcap30.exe
   Function: FUN_0049a080
   Address: 0049a080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_0049a080(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  local_4 = 0;
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x20) + 8);
  iVar1 = (**(code **)*piVar2)(piVar2,&DAT_005a5b38);
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*piVar2 + 0xe0))(piVar2), &stack0x00000000 != (undefined1 *)0x4)) {
    (**(code **)(local_4 + 8))(&local_4);
  }
  return iVar1;
}


