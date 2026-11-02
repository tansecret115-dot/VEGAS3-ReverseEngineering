/* Module: vidcap30.exe
   Function: FUN_00508b20
   Address: 00508b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00508b20(undefined4 *param_1,UINT_PTR param_2)

{
  HWND hWnd;
  POINT pt;
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  tagPOINT local_18;
  RECT local_10;
  
  puVar1 = param_1;
  bVar5 = param_2 == 2;
  hWnd = (HWND)*param_1;
  param_1 = (undefined4 *)0x0;
  GetCursorPos(&local_18);
  ScreenToClient(hWnd,&local_18);
  local_10.left = puVar1[0x26];
  local_10.top = puVar1[0x27];
  local_10.right = puVar1[0x28];
  local_10.bottom = puVar1[0x29];
  pt.y = local_18.y;
  pt.x = local_18.x;
  BVar2 = PtInRect(&local_10,pt);
  if ((BVar2 == 0) && (puVar1[0x2a] != 0)) {
    if (bVar5) {
      param_1 = (undefined4 *)FUN_00540eb0(puVar1,puVar1[0xf],puVar1[0x10]);
      iVar3 = *(int *)((int)param_1 + 8);
      uVar4 = *(uint *)((int)param_1 + 0xc);
    }
    else {
      iVar3 = puVar1[0x32];
      uVar4 = puVar1[0x2e];
    }
    if ((local_10.bottom < local_18.y) && ((puVar1[0x59] & 0x500) != 0)) {
      if (!bVar5) {
        iVar3 = puVar1[0x33] + puVar1[0x32];
      }
      iVar3 = FUN_00507290(iVar3,1,puVar1[0x17],puVar1[0x58] & 0x800);
    }
    if ((local_10.right < local_18.x) && ((puVar1[0x59] & 0xa00) != 0)) {
      if (!bVar5) {
        uVar4 = puVar1[0x2f] + puVar1[0x2e];
      }
      uVar4 = FUN_00507290(uVar4,1,puVar1[0x18],puVar1[0x58] & 0x400);
    }
    if ((local_18.y < local_10.top) && ((puVar1[0x59] & 0x500) != 0)) {
      if (!bVar5) {
        iVar3 = puVar1[0x32];
      }
      iVar3 = FUN_00507250(iVar3,1,0,1);
    }
    if ((local_18.x < local_10.left) && ((puVar1[0x59] & 0xa00) != 0)) {
      if (!bVar5) {
        uVar4 = puVar1[0x2e];
      }
      if ((uint)puVar1[0x19] < uVar4) {
        uVar4 = FUN_00507250(uVar4,1,puVar1[0x19],1);
      }
      else {
        puVar1[0x2a] = 0;
        if ((bVar5) && ((puVar1[0x59] & 0x200) != 0)) {
          puVar1[0x26] = 0;
          puVar1[0x27] = 0;
          puVar1[0x28] = 0;
          puVar1[0x29] = 0;
          FUN_00541670(puVar1,local_18.x,local_18.y);
        }
      }
    }
    if (uVar4 == 0xffff) {
      if (iVar3 == 0xffff) {
        if ((puVar1[0x59] & 0x300) == 0) {
          uVar4 = puVar1[0x19];
          iVar3 = 0;
        }
      }
      else if ((*(byte *)(puVar1 + 0x59) & 0x40) == 0) {
        uVar4 = puVar1[0x19];
      }
    }
    else if ((iVar3 == 0xffff) && ((*(byte *)(puVar1 + 0x59) & 0x20) == 0)) {
      iVar3 = 0;
    }
    if ((!bVar5) ||
       ((iVar3 == *(int *)((int)param_1 + 8) && (uVar4 == *(uint *)((int)param_1 + 0xc))))) {
      FUN_00541d80(puVar1,iVar3,uVar4);
      return;
    }
    FUN_00541d80(puVar1,iVar3,uVar4);
    if ((puVar1[0x59] & 0x300) != 0) {
      FUN_005410b0(puVar1,iVar3,uVar4);
      return;
    }
  }
  else {
    KillTimer(hWnd,param_2);
    puVar1[0x2a] = 0;
  }
  return;
}


