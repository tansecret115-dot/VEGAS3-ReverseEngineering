/* Module: mp3plug.dll
   Function: FUN_5f696ac0
   Address: 5f696ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f696ac0(void *this,HWND param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  UINT UVar4;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar5;
  HGLOBAL pvVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x424);
  puVar2 = *(undefined4 **)(iVar1 + 0x3e);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  if ((puVar2[0x11] == 0) && ((puVar2 == (undefined4 *)0x0 || (*(uint *)(iVar1 + 0x3a) < 0x856)))) {
    puVar2 = (undefined4 *)
             (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                       (*(int **)((int)this + 0x30),0x42,0x856);
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    iVar1 = puVar2[0x11];
    puVar8 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
    if (puVar8 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar3 = puVar3 + 1;
      }
      (**(code **)(**(int **)((int)this + 0x30) + 0x24))
                (*(int **)((int)this + 0x30),
                 *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e));
    }
    puVar2[0x11] = puVar2 + 0x13;
    if ((iVar1 == 0) && ((*(byte *)(puVar2 + 0x10) & 6) != 0)) {
      puVar2[0x14] = 1;
    }
    puVar2[0x12] = 0x80a;
    *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e) = puVar2;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3a) = 0x856;
  }
  puVar8 = (undefined4 *)puVar2[0x11];
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_5f696950(puVar8);
    *puVar3 = 0x80a;
    UVar4 = IsDlgButtonChecked(param_1,0x416);
    puVar3[1] = UVar4;
    GetDlgItemTextA(param_1,0x3ea,(LPSTR)(puVar3 + 2),0xff);
    GetDlgItemTextA(param_1,0x3eb,(LPSTR)((int)puVar3 + 0x107),0xff);
    GetDlgItemTextA(param_1,0x406,(LPSTR)((int)puVar3 + 0x305),0xff);
    GetDlgItemTextA(param_1,0x407,(LPSTR)(puVar3 + 0x101),5);
    GetDlgItemTextA(param_1,0x3ed,(LPSTR)((int)puVar3 + 0x409),0x400);
    GetDlgItemTextA(param_1,0x3ec,(LPSTR)((int)puVar3 + 0x206),0xff);
    hWnd = GetDlgItem(param_1,0x432);
    wParam = SendMessageA(hWnd,0x147,0,0);
    if (wParam != 0xffffffff) {
      LVar5 = SendMessageA(hWnd,0x150,wParam,0);
      *(char *)((int)puVar3 + 0x809) = (char)LVar5;
    }
    FUN_5f696d10(puVar8,puVar3);
    pvVar6 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(puVar3);
    GlobalFree(pvVar6);
    UVar4 = IsDlgButtonChecked(param_1,0x448);
    if (UVar4 != 0) {
      puVar2[0x10] = puVar2[0x10] & 0xfffffffb | 2;
      return 0;
    }
    UVar4 = IsDlgButtonChecked(param_1,0x449);
    if (UVar4 != 0) {
      puVar2[0x10] = puVar2[0x10] & 0xfffffffd | 4;
      return 0;
    }
    puVar2[0x10] = puVar2[0x10] | 6;
  }
  return 0;
}


