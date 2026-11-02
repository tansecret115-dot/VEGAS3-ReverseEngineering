/* Module: sfmarket2.dll
   Function: FUN_00409a50
   Address: 00409a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00409a50(int param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int *piVar2;
  undefined4 local_4;
  
  piVar2 = *(int **)(param_1 + 0x50);
  local_4 = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(piVar2,&DAT_004a4100,&local_4);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2,unaff_retaddr);
      if (iVar1 == 0) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        return 1;
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
  }
  return 0;
}


