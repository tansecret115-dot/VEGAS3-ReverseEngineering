/* Module: sfpaplug.dll
   Function: FUN_004021a0
   Address: 004021a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004021a0(void *this,undefined2 *param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  LRESULT LVar5;
  ushort uVar6;
  short sVar7;
  
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d4);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (WVar2 == 0xffffffff) {
    return 0;
  }
  LVar3 = SendMessageA(pHVar1,0x150,WVar2,0);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d5);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (WVar2 == 0xffffffff) {
    return 0;
  }
  LVar4 = SendMessageA(pHVar1,0x150,WVar2,0);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d6);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (WVar2 == 0xffffffff) {
    return 0;
  }
  LVar5 = SendMessageA(pHVar1,0x150,WVar2,0);
  switch(LVar5) {
  case 0:
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
    break;
  case 1:
    sVar7 = 2;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
    goto LAB_004022d3;
  case 2:
    *(uint *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) =
         (uint)*(ushort *)(*(int *)((int)this + 0x34) + 2);
    break;
  case 3:
    sVar7 = 2;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 2;
    goto LAB_004022d3;
  case 4:
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
    sVar7 = *(short *)(*(int *)((int)this + 0x34) + 2);
    goto LAB_004022d3;
  default:
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
  }
  sVar7 = 1;
LAB_004022d3:
  param_1[7] = (ushort)LVar4;
  param_1[1] = sVar7;
  *(LRESULT *)(param_1 + 2) = LVar3;
  uVar6 = ((ushort)LVar4 >> 3) * sVar7;
  param_1[6] = uVar6;
  *param_1 = 1;
  *(uint *)(param_1 + 4) = (uint)uVar6 * LVar3;
  param_1[8] = 0;
  return 1;
}


