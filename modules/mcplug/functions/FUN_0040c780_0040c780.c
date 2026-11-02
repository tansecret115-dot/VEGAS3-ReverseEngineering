/* Module: mcplug.dll
   Function: FUN_0040c780
   Address: 0040c780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040c780(void *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x44) == 0) {
    return 0x80004003;
  }
  switch(*(undefined4 *)((int)param_1 + 0x18)) {
  case 0x3ed:
  case 0x3f4:
  case 0x3f9:
    FUN_00411c20(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x40) + 100))
                      (*(int **)((int)param_1 + 0x40),*(undefined4 *)((int)param_1 + 0x44));
    return uVar1;
  case 0x3ee:
  case 0x3f3:
  case 0x3f8:
    FUN_00413160(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x40) + 100))
                      (*(int **)((int)param_1 + 0x40),*(undefined4 *)((int)param_1 + 0x44));
    return uVar1;
  case 0x3ef:
  case 0x3f2:
  case 0x3f7:
    FUN_00414200(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x40) + 100))
                      (*(int **)((int)param_1 + 0x40),*(undefined4 *)((int)param_1 + 0x44));
    return uVar1;
  case 0x3f0:
  case 0x3f1:
  case 0x3f6:
    FUN_00414e40(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x40) + 100))
                      (*(int **)((int)param_1 + 0x40),*(undefined4 *)((int)param_1 + 0x44));
    return uVar1;
  default:
    FUN_004110d0(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x40) + 100))
                      (*(int **)((int)param_1 + 0x40),*(undefined4 *)((int)param_1 + 0x44));
    return uVar1;
  }
}


