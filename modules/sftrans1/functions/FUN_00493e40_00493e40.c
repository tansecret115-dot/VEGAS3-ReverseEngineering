/* Module: sftrans1.dll
   Function: FUN_00493e40
   Address: 00493e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall
FUN_00493e40(undefined4 param_1,undefined4 param_2,uint param_3,HWND param_4,wchar_t *param_5)

{
  int iVar1;
  WPARAM wParam;
  LRESULT LVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  CHAR local_84;
  undefined4 local_83;
  CHAR local_60 [24];
  WCHAR local_48 [31];
  undefined2 local_a;
  
  uVar3 = param_3 >> 0x10;
  if (uVar3 < 0x201) {
    if (uVar3 == 0x200) {
      param_3 = param_3 & 0xffff;
      local_60[1] = '\0';
      local_60[2] = '\0';
      local_60[3] = '\0';
      local_60[4] = '\0';
      local_60[5] = '\0';
      local_60[6] = '\0';
      local_60[7] = '\0';
      local_60[8] = '\0';
      local_60[9] = '\0';
      local_60[10] = '\0';
      local_60[0xb] = '\0';
      local_60[0xc] = '\0';
      local_60[0xd] = '\0';
      local_60[0xe] = '\0';
      local_60[0xf] = '\0';
      local_60[0x10] = '\0';
      local_60[0] = '\0';
      local_60[0x11] = '\0';
      local_60[0x12] = '\0';
      local_60[0x13] = '\0';
      local_60[0x14] = '\0';
      SendMessageA(param_4,0xd,0x14,(LPARAM)local_60);
      fVar6 = (float10)FUN_004d6ed0(local_60,0);
      local_98 = (double)fVar6;
      FUN_004c6ae0(local_60,&DAT_0055e6e4,local_98);
      if ((param_3 == 0x6c4) || (param_3 == 0x6ce)) {
        FUN_004c6ae0(&local_84,&DAT_0055e6e4,*(undefined4 *)(param_5 + 0x30),
                     *(undefined4 *)(param_5 + 0x32));
        if (_DAT_00555910 <= local_98) {
          if (_DAT_00555908 < local_98) {
            local_98 = 1.0;
          }
        }
        else {
          local_98 = 0.0;
        }
        iVar4 = lstrcmpA(&local_84,local_60);
        if (iVar4 == 0) {
          SendMessageA(param_4,0xc,0,(LPARAM)&local_84);
          return false;
        }
        *(undefined4 *)(param_5 + 0x30) = (undefined4)local_98;
        *(undefined4 *)(param_5 + 0x32) = local_98._4_4_;
      }
      else if ((param_3 == 0x6bf) || (param_3 == 0x6c8)) {
        FUN_004c6ae0(&local_84,&DAT_0055e6e4,*(undefined4 *)(param_5 + 0x34),
                     *(undefined4 *)(param_5 + 0x36));
        if (_DAT_00555910 <= local_98) {
          if (_DAT_00555908 < local_98) {
            local_98 = 1.0;
          }
        }
        else {
          local_98 = 0.0;
        }
        iVar4 = lstrcmpA(&local_84,local_60);
        if (iVar4 == 0) {
          SendMessageA(param_4,0xc,0,(LPARAM)&local_84);
          return false;
        }
        *(undefined4 *)(param_5 + 0x34) = (undefined4)local_98;
        *(undefined4 *)(param_5 + 0x36) = local_98._4_4_;
      }
      else {
        if ((param_3 != 0x6bc) && (param_3 != 0x6ca)) {
          return false;
        }
        FUN_004c6ae0(&local_84,&DAT_0055e6e4,*(undefined4 *)(param_5 + 0x38),
                     *(undefined4 *)(param_5 + 0x3a));
        if (_DAT_00555910 <= local_98) {
          if (_DAT_00563b28 < local_98) {
            local_98 = 2.0;
          }
        }
        else {
          local_98 = 0.0;
        }
        iVar4 = lstrcmpA(&local_84,local_60);
        if (iVar4 == 0) {
          SendMessageA(param_4,0xc,0,(LPARAM)&local_84);
          return false;
        }
        *(undefined4 *)(param_5 + 0x38) = (undefined4)local_98;
        *(undefined4 *)(param_5 + 0x3a) = local_98._4_4_;
      }
    }
    else if (uVar3 == 0) {
      iVar4 = (param_3 & 0xffff) - 0x9c49;
      switch(iVar4) {
      case 0:
        uVar3 = *(uint *)(param_5 + 0x22);
        if ((uVar3 & 1) != 0) {
          *(uint *)(param_5 + 0x22) = ~(uVar3 & 1) & uVar3;
          return true;
        }
        *(uint *)(param_5 + 0x22) = uVar3 | 1;
        return true;
      case 1:
        uVar3 = *(uint *)(param_5 + 0x22);
        if ((uVar3 & 2) == 0) {
          *(uint *)(param_5 + 0x22) = uVar3 | 2;
        }
        else {
          *(uint *)(param_5 + 0x22) = ~(uVar3 & 2) & uVar3;
        }
        break;
      case 2:
        iVar4 = *(int *)(param_5 + 0x2c);
        if (iVar4 != 0) {
          param_5[0x2c] = L'\0';
          param_5[0x2d] = L'\0';
        }
        FUN_0052d290(0x9c4b,CONCAT31((int3)((uint)param_2 >> 8),*(int *)(param_5 + 0x2c) == 0) | 4);
        return iVar4 != 0;
      case 3:
        iVar4 = *(int *)(param_5 + 0x2c);
        if (iVar4 != 1) {
          param_5[0x2c] = L'\x01';
          param_5[0x2d] = L'\0';
        }
        FUN_0052d290(0x9c4c,CONCAT31((int3)((uint)param_5 >> 8),*(int *)(param_5 + 0x2c) == 1) | 4);
        return iVar4 != 1;
      case 4:
        iVar1 = *(int *)(param_5 + 0x2c);
        if (iVar1 != 2) {
          param_5[0x2c] = L'\x02';
          param_5[0x2d] = L'\0';
        }
        FUN_0052d290(0x9c4d,CONCAT31((int3)((uint)iVar4 >> 8),*(int *)(param_5 + 0x2c) == 2) | 4);
        return iVar1 != 2;
      default:
        if (((short)param_3 != 0x6ab) && ((short)param_3 != 0x6aa)) {
          return false;
        }
        LVar2 = SendMessageA(param_4,0xf0,0,0);
        *(LRESULT *)(param_5 + 0x2e) = LVar2;
      }
    }
    else if (uVar3 == 1) {
      param_3 = param_3 & 0xffff;
      local_84 = '\0';
      puVar5 = &local_83;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0;
      *(undefined1 *)((int)puVar5 + 2) = 0;
      wParam = SendMessageA(param_4,0x147,0,0);
      local_84 = '\0';
      SendMessageA(param_4,0x148,wParam,(LPARAM)&local_84);
      if ((param_3 != 0x6be) && (param_3 != 0x6c7)) {
        if ((param_3 != 0x6bd) && (param_3 != 0x6c3)) {
          return false;
        }
        MultiByteToWideChar(0,1,&local_84,-1,local_48,0x20);
        local_a = 0;
        iVar4 = wcscmp(param_5,local_48);
        if (iVar4 == 0) {
          return false;
        }
        wcsncpy(param_5,local_48,0x20);
        return true;
      }
      iVar4 = FUN_004d66c0(&local_84,0);
      if (iVar4 == *(int *)(param_5 + 0x20)) {
        return false;
      }
      *(int *)(param_5 + 0x20) = iVar4;
    }
    else {
      if (uVar3 != 4) {
        return false;
      }
      local_84 = '\0';
      puVar5 = &local_83;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      SendMessageA(param_4,0xd,0x20,(LPARAM)&local_84);
      if (((param_3 & 0xffff) != 0x6be) && ((param_3 & 0xffff) != 0x6c7)) {
        return false;
      }
      iVar4 = FUN_004d66c0(&local_84,0);
      if (iVar4 == *(int *)(param_5 + 0x20)) {
        return false;
      }
      *(int *)(param_5 + 0x20) = iVar4;
    }
  }
  else {
    if ((uVar3 != 0xa0a) && (uVar3 != 0xa33)) {
      return false;
    }
    if (param_4 == (HWND)0x0) {
      return false;
    }
    SendMessageA(param_4,0xa06,0,(LPARAM)&local_98);
    *(undefined4 *)(param_5 + 0x24) = (undefined4)local_98;
    *(undefined4 *)(param_5 + 0x26) = local_98._4_4_;
    *(undefined4 *)(param_5 + 0x28) = local_90;
    *(undefined4 *)(param_5 + 0x2a) = local_8c;
  }
  return true;
}


