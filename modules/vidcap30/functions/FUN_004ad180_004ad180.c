/* Module: vidcap30.exe
   Function: FUN_004ad180
   Address: 004ad180
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004ad180(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2 == *(int *)(param_1 + 0x90)) {
    if (param_2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
      uVar2 = (uint)(uVar1 == 0);
    }
    else if (param_2 == 1) {
      uVar2 = *(uint *)(param_1 + 0x1c);
      uVar1 = (uint)(uVar2 == 0);
    }
  }
  bVar3 = *(uint *)(param_1 + 0x10) != uVar1;
  if (bVar3) {
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  bVar4 = *(uint *)(param_1 + 0x14) != uVar2;
  if (bVar4) {
    *(uint *)(param_1 + 0x14) = uVar2;
  }
  bVar4 = bVar4 || bVar3;
  if ((param_3 != 0) || (bVar4)) {
    InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(param_1 + 0x38));
  }
  return bVar4;
}


