/* Module: sftrans1.dll
   Function: FUN_004c2630
   Address: 004c2630
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004c2630(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2 == *(int *)(param_1 + 0xc0)) {
    if (param_2 == 0) {
      uVar1 = (int)(*(uint *)(param_1 + 0xc) << 0x1c) >> 0x1f;
      uVar2 = ~*(uint *)(param_1 + 0xc) >> 3 & 1;
    }
    else if (param_2 == 1) {
      uVar1 = ~*(uint *)(param_1 + 0xc) >> 3 & 1;
      uVar2 = (int)(*(uint *)(param_1 + 0xc) << 0x1c) >> 0x1f;
    }
  }
  bVar3 = (int)(*(uint *)(param_1 + 0xc) << 0x14) >> 0x1f != uVar1;
  if (bVar3) {
    *(uint *)(param_1 + 0xc) = (uVar1 & 1) << 0xb | *(uint *)(param_1 + 0xc) & 0xfffff7ff;
  }
  bVar4 = (int)(*(uint *)(param_1 + 0xc) << 0x13) >> 0x1f != uVar2;
  if (bVar4) {
    *(uint *)(param_1 + 0xc) = (uVar2 & 1) << 0xc | *(uint *)(param_1 + 0xc) & 0xffffefff;
  }
  bVar4 = bVar4 || bVar3;
  if (((param_3 != 0) || (bVar4)) && ((*(uint *)(param_1 + 0xc) & 0x100100) == 0)) {
    InvalidateRect(*(HWND *)(param_1 + 0x28),(RECT *)(param_1 + 0x34),0);
    UpdateWindow(*(HWND *)(param_1 + 0x28));
  }
  return bVar4;
}


