/* Module: sftrans1.dll
   Function: FUN_0054d4b0
   Address: 0054d4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054d4b0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  SHORT SVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (((-1 < *(int *)(param_1 + 0x14c)) && (-1 < *(int *)(param_1 + 0x158))) &&
     (*(int *)(param_1 + 0x158) <
      **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8))) {
    SVar4 = GetKeyState(0x10);
    if ((param_3 & 0x20000000) != 0) {
      iVar1 = *(int *)(param_1 + 0x158);
      pdVar2 = *(double **)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
                iVar1 * 4);
      if ((uint)(int)SVar4 >> 0x10 == 0) {
        local_18 = *pdVar2 + pdVar2[5];
        uVar5 = 5;
        dVar3 = pdVar2[1] + pdVar2[6];
      }
      else {
        local_18 = *pdVar2 + pdVar2[10];
        uVar5 = 6;
        dVar3 = pdVar2[1] + pdVar2[0xb];
      }
      local_20 = SUB84(dVar3,0);
      uStack_1c = (undefined4)((ulonglong)dVar3 >> 0x20);
      switch(param_2) {
      case 0x25:
        FUN_0054dae0(iVar1,uVar5,local_18 - *(double *)(param_1 + 0x128),local_20,uStack_1c);
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      case 0x26:
        FUN_0054dae0(iVar1,uVar5,(LONG)local_18,local_18._4_4_,dVar3 + *(double *)(param_1 + 0x130))
        ;
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      case 0x27:
        FUN_0054dae0(iVar1,uVar5,local_18 + *(double *)(param_1 + 0x128),local_20,uStack_1c);
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        break;
      case 0x28:
        FUN_0054dae0(iVar1,uVar5,(LONG)local_18,local_18._4_4_,dVar3 - *(double *)(param_1 + 0x130))
        ;
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)&local_18);
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&local_18,0);
        return;
      }
    }
  }
  return;
}


