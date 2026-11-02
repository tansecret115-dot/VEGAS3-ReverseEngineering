/* Module: sfnetmedia.dll
   Function: FUN_00403f20
   Address: 00403f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00403f20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  uVar2 = 0;
  if (&stack0x00000000 != (undefined1 *)0x8) {
    piVar1 = (int *)SendMessageA(*(HWND *)(param_1 + 0x48),DAT_004414d0,0,0);
    local_4 = (-(uint)(piVar1 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < local_4) {
      (**(code **)*piVar1)(piVar1,&DAT_0043c770,&local_8);
    }
    uVar2 = local_8;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar2 = local_8;
    }
  }
  return uVar2;
}


