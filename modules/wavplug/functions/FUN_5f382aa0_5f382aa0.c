/* Module: wavplug.dll
   Function: FUN_5f382aa0
   Address: 5f382aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f382aa0(void *this,undefined2 *param_1)

{
  ushort uVar1;
  HWND pHVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  LRESULT LVar5;
  LRESULT LVar6;
  short sVar7;
  
  pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d4);
  WVar3 = SendMessageA(pHVar2,0x147,0,0);
  if (WVar3 == 0xffffffff) {
    return 0;
  }
  LVar4 = SendMessageA(pHVar2,0x150,WVar3,0);
  pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d5);
  WVar3 = SendMessageA(pHVar2,0x147,0,0);
  if (WVar3 != 0xffffffff) {
    LVar5 = SendMessageA(pHVar2,0x150,WVar3,0);
    pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d6);
    WVar3 = SendMessageA(pHVar2,0x147,0,0);
    if (WVar3 != 0xffffffff) {
      sVar7 = 1;
      LVar6 = SendMessageA(pHVar2,0x150,WVar3,0);
      switch(LVar6) {
      case 0:
        sVar7 = 1;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
        break;
      case 1:
        sVar7 = 2;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
        break;
      case 2:
        sVar7 = 1;
        *(uint *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) =
             (uint)*(ushort *)(*(int *)((int)this + 0x34) + 2);
        break;
      case 3:
        sVar7 = 2;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 2;
        break;
      case 4:
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
        sVar7 = *(short *)(*(int *)((int)this + 0x34) + 2);
      }
      param_1[7] = (ushort)LVar5;
      uVar1 = ((ushort)LVar5 >> 3) * sVar7;
      param_1[6] = uVar1;
      param_1[1] = sVar7;
      *(uint *)(param_1 + 4) = (uint)uVar1 * LVar4;
      *param_1 = 1;
      *(LRESULT *)(param_1 + 2) = LVar4;
      param_1[8] = 0;
      return 1;
    }
    return 0;
  }
  return 0;
}


