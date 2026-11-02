/* Module: vegas30.exe
   Function: FUN_004585d0
   Address: 004585d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004585d0(int param_1)

{
  uint uVar1;
  HDC hdc;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((*(int *)(param_1 + 0xac0) <= *(int *)(param_1 + 0xb28)) &&
     (*(int *)(param_1 + 0xb28) < *(int *)(param_1 + 0xac8))) {
    hdc = GetDC(*(HWND *)(param_1 + 4));
    PatBlt(hdc,*(int *)(param_1 + 0xb28),*(int *)(param_1 + 0xac4),1,*(int *)(param_1 + 0xad4),
           0x550009);
    ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar1 & 0xfffffff9;
  *(undefined4 *)(param_1 + 0xb28) = 0xffff8001;
  if ((((*(int *)(param_1 + 0xb38) == *(int *)(param_1 + 0xb88)) &&
       (*(int *)(param_1 + 0xb3c) == *(int *)(param_1 + 0xb8c))) ||
      (*(int *)(param_1 + 0xb40) != *(int *)(param_1 + 0xb70))) ||
     (((*(int *)(param_1 + 0xb44) != *(int *)(param_1 + 0xb74) || ((uVar1 & 0x20) == 0)) ||
      ((uVar1 & 0x10) != 0)))) {
    FUN_00455090(param_1,0xf);
  }
  else {
    FUN_004543c0(param_1,*(int *)(param_1 + 0xb38),*(int *)(param_1 + 0xb3c),
                 *(undefined4 *)(param_1 + 0xb90),*(undefined4 *)(param_1 + 0xb94),3);
  }
  if (*(int *)(param_1 + 0xab0) != 0) {
    (**(code **)(*(int *)(param_1 + 0xab0) + 0x14))(param_1,0);
  }
  FUN_004586f0(param_1);
  FUN_00452ea0(param_1);
  uStack_8 = 8;
  uStack_4 = 0;
  FUN_00568d40(&uStack_8,8);
  return;
}


