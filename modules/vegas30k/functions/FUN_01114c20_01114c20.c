/* Module: vegas30k.dll
   Function: FUN_01114c20
   Address: 01114c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01114c20(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  HWND hWnd;
  UINT UVar9;
  WPARAM wParam;
  undefined4 uVar10;
  
  puVar2 = param_1;
  uVar4 = GetKeyState(0x10);
  uVar5 = GetKeyState(0x11);
  iVar8 = param_1[0xf];
  uVar7 = param_1[0x10];
  hWnd = (HWND)*param_1;
  iVar6 = iVar8;
  uVar3 = uVar7;
  if ((((uVar4 & 0x8000) != 0) && ((param_1[0x59] & 0x300) != 0)) &&
     ((*(byte *)(param_1 + 0x5a) & 4) == 0)) {
    iVar1 = param_1[0x14];
    if (iVar1 == 0) {
      iVar6 = param_1[0x12];
      uVar3 = param_1[0x13];
    }
    else {
      iVar6 = *(int *)(iVar1 + 8);
      uVar3 = *(uint *)(iVar1 + 0xc);
    }
  }
  param_1 = (undefined4 *)uVar3;
  switch(param_2) {
  case 8:
    if ((param_3 & 0x2000000) == 0) break;
    param_3 = 0;
    wParam = 0;
    UVar9 = 0x304;
    goto LAB_011150be;
  case 9:
    if ((uVar4 & 0x8000) != 0) {
      param_1 = (undefined4 *)FUN_01113a50(param_1,1,0,0);
      break;
    }
    param_1 = (undefined4 *)FUN_01113a90(param_1,1,puVar2[0x18],1);
    if ((uint)puVar2[0x18] <= param_1) {
      param_1 = (undefined4 *)0x0;
      iVar6 = FUN_01113a90(iVar6,1,puVar2[0x17],0);
    }
    goto LAB_01114fda;
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  default:
    if ((uVar5 & 0x8000) == 0) {
      uVar10 = FUN_0114eae0(puVar2,iVar8,uVar7);
      iVar8 = (*(code *)puVar2[0x88])(puVar2 + 0x72,uVar10,0x100,param_2,param_3);
      if ((iVar8 == 0) &&
         ((((0x2f < param_2 && (param_2 < 0x70)) || ((0x7f < param_2 && (param_2 < 0xf0)))) &&
          ((*(byte *)(puVar2 + 0x59) & 4) != 0)))) {
        FUN_0114f020(puVar2,1);
        hWnd = (HWND)puVar2[2];
        UVar9 = 0x100;
        wParam = param_2;
LAB_011150be:
        SendMessageA(hWnd,UVar9,wParam,param_3);
      }
      break;
    }
    if ((uVar4 & 0x8000) != 0) {
      if (param_2 == 0x5a) {
        param_3 = 0;
        UVar9 = 0x7e9;
        wParam = 0;
        goto LAB_011150be;
      }
      break;
    }
    if (param_2 == 0x43) {
LAB_01114fca:
      UVar9 = 0x301;
LAB_01114fd3:
      SendMessageA(hWnd,UVar9,0,0);
    }
    else {
      if (param_2 == 0x58) {
        UVar9 = 0x300;
        goto LAB_01114fd3;
      }
      if (param_2 == 0x56) {
        UVar9 = 0x302;
        goto LAB_01114fd3;
      }
      if (param_2 == 0x5a) {
        UVar9 = 0x304;
        goto LAB_01114fd3;
      }
      if (param_2 == 0x41) {
        UVar9 = 0x7f09;
        goto LAB_01114fd3;
      }
    }
    goto LAB_01114fda;
  case 0xd:
  case 0x20:
  case 0x71:
    uVar10 = FUN_0114eae0(puVar2,iVar8,uVar7);
    iVar8 = (*(code *)puVar2[0x88])(puVar2 + 0x72,uVar10,0x100,param_2,param_3);
    if (iVar8 == 0) {
      FUN_0114f020(puVar2,1);
    }
    break;
  case 0x1b:
    uVar7 = puVar2[0x6e];
    if (((((uVar7 & 8) == 0) || ((uVar7 & 0x10) == 0)) || ((uVar7 & 0x20) != 0)) ||
       (iVar8 = (*(code *)puVar2[0x88])(puVar2 + 0x72,puVar2[0x14],0x100,param_2,param_3),
       iVar8 == 0)) {
      (*(code *)puVar2[0x5f])(puVar2,0x100,param_2,param_3);
    }
    break;
  case 0x21:
    if (((puVar2[0x59] & 0x40) == 0) &&
       (((puVar2[0x59] & 0x300) == 0 || (param_1 != (undefined4 *)0xffff)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    uVar7 = puVar2[0x33];
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    iVar6 = FUN_01113a50(iVar6,uVar7,0,uVar10);
    break;
  case 0x22:
    uVar7 = puVar2[0x33];
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    iVar6 = FUN_01113a90(iVar6,uVar7,puVar2[0x17],puVar2[0x58] & 0x800);
    break;
  case 0x23:
    if (puVar2[0x17] != 0) {
      iVar6 = puVar2[0x17] + -1;
    }
    if (puVar2[0x18] != 0) {
      param_1 = (undefined4 *)(puVar2[0x18] - 1);
    }
    break;
  case 0x24:
    iVar6 = 0;
    param_1 = (undefined4 *)0x0;
    break;
  case 0x25:
    if (((puVar2[0x59] & 0x20) == 0) && (((puVar2[0x59] & 0x300) == 0 || (iVar6 != 0xffff)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    param_1 = (undefined4 *)FUN_01113a50(param_1,1,0,uVar10);
    break;
  case 0x26:
    if (((puVar2[0x59] & 0x40) == 0) &&
       (((puVar2[0x59] & 0x300) == 0 || (param_1 != (undefined4 *)0xffff)))) {
      iVar6 = FUN_01113a50(iVar6,1,0,0);
    }
    else {
      iVar6 = FUN_01113a50(iVar6,1,0,1);
    }
    break;
  case 0x27:
    param_1 = (undefined4 *)FUN_01113a90(param_1,1,puVar2[0x18],puVar2[0x58] & 0x400);
    break;
  case 0x28:
    iVar6 = FUN_01113a90(iVar6,1,puVar2[0x17],puVar2[0x58] & 0x800);
    break;
  case 0x2d:
    if ((uVar4 & 0x8000) != 0) {
      param_3 = 0;
      wParam = 0;
      UVar9 = 0x302;
      goto LAB_011150be;
    }
    if ((uVar5 & 0x8000) != 0) goto LAB_01114fca;
    goto LAB_01114f29;
  case 0x2e:
    if ((uVar4 & 0x8000) != 0) {
      param_3 = 0;
      wParam = 0;
      UVar9 = 0x300;
      goto LAB_011150be;
    }
    if ((uVar5 & 0x8000) == 0) {
      SendMessageA(hWnd,0x303,0,0);
      goto LAB_01114f29;
    }
    goto LAB_01114fe6;
  case 0x5d:
    goto switchD_01114ca9_caseD_5d;
  case 0x79:
    if ((uVar4 & 0x8000) == 0) goto LAB_01114fda;
switchD_01114ca9_caseD_5d:
    param_3 = 0;
    wParam = 0;
    UVar9 = 0x7b;
    goto LAB_011150be;
  case 0x90:
    break;
  }
  if ((((uVar4 & 0x8000) != 0) && ((puVar2[0x59] & 0x300) != 0)) && (param_2 != 9)) {
    if ((*(byte *)(puVar2 + 0x5a) & 4) == 0) {
      iVar8 = puVar2[0x14];
      if (iVar8 == 0) {
        return 0;
      }
      if (iVar6 != *(int *)(iVar8 + 8)) goto LAB_0111512e;
      uVar7 = *(uint *)(iVar8 + 0xc);
    }
    else {
      if (iVar6 != puVar2[0xf]) goto LAB_0111512e;
      uVar7 = puVar2[0x10];
    }
    if (param_1 == (undefined4 *)uVar7) {
      return 0;
    }
LAB_0111512e:
    FUN_01152bc0(puVar2);
    if ((*(byte *)(puVar2 + 0x5a) & 4) != 0) {
      FUN_0114e940(puVar2,iVar6,param_1,0);
    }
    if (puVar2[0x14] == 0) {
      _SfList_DeleteList_16(puVar2[0x11],0,0xffffffff,0);
      FUN_0114ece0(puVar2,iVar6,param_1);
      FUN_0114f9b0(puVar2,iVar6,param_1);
      return 0;
    }
    FUN_0114ec80(puVar2,puVar2[0x14]);
    FUN_0114ece0(puVar2,iVar6,param_1);
    FUN_0114f9b0(puVar2,iVar6,param_1);
    return 0;
  }
LAB_01114fda:
  if ((uVar5 & 0x8000) != 0) {
LAB_01114fe6:
    if ((*(byte *)(puVar2 + 0x5a) & 8) != 0) {
      if ((iVar6 == puVar2[0xf]) && (param_1 == (undefined4 *)puVar2[0x10])) {
        return 0;
      }
      uVar10 = 0;
      goto LAB_01114f3b;
    }
  }
LAB_01114f29:
  if ((iVar6 == puVar2[0xf]) && (param_1 == (undefined4 *)puVar2[0x10])) {
    return 0;
  }
  uVar10 = 1;
LAB_01114f3b:
  FUN_0114e940(puVar2,iVar6,param_1,uVar10);
  FUN_0114f9b0(puVar2,iVar6,param_1);
  return 0;
}


