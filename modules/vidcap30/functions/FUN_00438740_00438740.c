/* Module: vidcap30.exe
   Function: FUN_00438740
   Address: 00438740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00438740(int param_1,LPPOINT param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1c14);
  if ((param_2->x == -1) && (param_2->y == -1)) {
    param_2->x = 5;
    param_2->y = 5;
    ClientToScreen(*(HWND *)(param_1 + 8),param_2);
  }
  if ((uVar1 & 0xfff0000) == 0x40000) {
    uVar2 = FUN_00404200(0x1ee,0);
    FUN_0043a810(param_1,uVar2,0x40000);
  }
  else {
    uVar2 = FUN_00404200(0x192,0);
    FUN_0043a790(param_1,uVar2);
  }
  uVar2 = FUN_00404270(*(undefined4 *)(param_1 + 8),uVar2,param_2,2);
  FUN_00437450(param_1,uVar2,0,0);
  return;
}


