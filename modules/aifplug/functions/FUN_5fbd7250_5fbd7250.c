/* Module: aifplug.dll
   Function: FUN_5fbd7250
   Address: 5fbd7250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5fbd7250(void *this,undefined2 *param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  LRESULT LVar5;
  uint uVar6;
  undefined2 *puVar7;
  
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d4);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (WVar2 == 0xffffffff) {
    return 0;
  }
  LVar3 = SendMessageA(pHVar1,0x150,WVar2,0);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d5);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (WVar2 != 0xffffffff) {
    LVar4 = SendMessageA(pHVar1,0x150,WVar2,0);
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d6);
    WVar2 = SendMessageA(pHVar1,0x147,0,0);
    if (WVar2 != 0xffffffff) {
      LVar5 = SendMessageA(pHVar1,0x150,WVar2,0);
      puVar7 = param_1;
      switch(LVar5) {
      case 0:
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
        puVar7 = (undefined2 *)0x1;
        break;
      case 1:
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
        puVar7 = (undefined2 *)0x2;
        break;
      case 2:
        *(uint *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) =
             (uint)*(ushort *)(*(int *)((int)this + 0x34) + 2);
        puVar7 = (undefined2 *)0x1;
        break;
      case 3:
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 2;
        puVar7 = (undefined2 *)0x2;
        break;
      case 4:
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
        puVar7 = (undefined2 *)(uint)*(ushort *)(*(int *)((int)this + 0x34) + 2);
      }
      param_1[7] = (ushort)LVar4;
      param_1[1] = (short)puVar7;
      *(LRESULT *)(param_1 + 2) = LVar3;
      uVar6 = (uint)(ushort)((ushort)LVar4 >> 3) * (int)puVar7;
      param_1[6] = (short)uVar6;
      *param_1 = 1;
      *(uint *)(param_1 + 4) = (uVar6 & 0xffff) * LVar3;
      param_1[8] = 0;
      return 1;
    }
    return 0;
  }
  return 0;
}


