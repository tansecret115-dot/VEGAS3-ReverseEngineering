/* Module: vidcap30.exe
   Function: FUN_00402190
   Address: 00402190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402190(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  HWND hWnd;
  BOOL BVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *local_c;
  undefined4 local_8;
  int local_4;
  
  local_14 = *param_2;
  local_1c = *param_1;
  uVar6 = 0;
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  uVar8 = 1;
  local_4 = local_14;
  if (local_14 < local_1c) {
    do {
      puVar7 = (uint *)(param_1[1] * local_14 + param_1[2]);
      uVar1 = *puVar7;
      if (uVar1 < 0x13) {
        if (uVar1 == 0x12) {
          DAT_005bbb24 = 1;
        }
        else {
          switch(uVar1) {
          case 0:
            local_1c = local_14 + 1;
            break;
          case 1:
            DAT_005ba4b4 = DAT_005ba4b4 | 0x30;
            break;
          case 2:
            uVar8 = 1;
            DAT_005ba4b4 = DAT_005ba4b4 & 0xffffffbf | 0x80;
            break;
          case 3:
            uVar8 = 1;
            DAT_005ba4b4 = DAT_005ba4b4 | 0xc0;
            break;
          case 5:
            uVar8 = FUN_00402600(puVar7[2]);
            DAT_005bbb28 = (LPCSTR)puVar7[2];
            break;
          case 8:
            hWnd = (HWND)_SfHexToDWordToken_8(puVar7[2],&local_c);
            BVar2 = IsWindow(hWnd);
            _DAT_005bba74 = 0;
            DAT_005bba70 = -(uint)(BVar2 != 0) & (uint)hWnd;
            if (*local_c == ';') {
              _DAT_005bba74 = _SfTextToDWordToken_8(local_c + 1,0);
            }
            uVar8 = 1;
            break;
          case 9:
            FUN_0045c9a0(puVar7[2]);
            uVar8 = 1;
            DAT_005ba50c = DAT_005ba50c | 0x20;
            break;
          case 10:
            uVar8 = 1;
            local_10 = 1;
            break;
          case 0xb:
            if (*param_3 != 0) {
              FUN_00441a20();
              *param_3 = 0;
            }
            FUN_00441600(puVar7[2],1);
            SendMessageA((HWND)*DAT_005ba4c0,0x111,0x19cde,0);
            uVar8 = 1;
            break;
          case 0xc:
            uVar8 = 1;
            DAT_005ba4b4 = DAT_005ba4b4 & 0xfffeffff | 0x8000;
            break;
          case 0xd:
            uVar8 = 1;
            DAT_005ba4b4 = DAT_005ba4b4 & 0xfffbffff | 0x20000;
            break;
          case 0xe:
            uVar8 = 1;
            DAT_005ba4b4 = DAT_005ba4b4 | 0x60000;
          }
        }
      }
      else {
        switch(uVar1) {
        case 0x414:
          DAT_005ba4b4 = DAT_005ba4b4 | 0x20;
          break;
        case 0x417:
          uVar8 = FUN_00417770(&local_18,puVar7[2],0,0xffffffff,0);
          break;
        case 0x426:
        case 0x428:
          local_8 = 1;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < local_1c);
    if (local_18 != 0) {
      FUN_004178c0(local_18,1);
      FUN_00417990(local_18);
    }
    if (local_10 != 0) {
      uVar5 = 0;
      local_14 = 0;
      local_10 = 0;
      param_3 = (int *)0x0;
      if (local_4 < local_1c) {
        puVar3 = (undefined4 *)(param_1[1] * local_4 + param_1[2]);
        iVar4 = local_1c - local_4;
        do {
          switch(*puVar3) {
          case 10:
            local_14 = puVar3[2];
            break;
          case 0xf:
            local_10 = puVar3[2];
            break;
          case 0x10:
            uVar6 = puVar3[2];
            break;
          case 0x11:
            param_3 = (int *)puVar3[2];
            break;
          case 0x13:
            uVar5 = puVar3[2];
          }
          puVar3 = (undefined4 *)((int)puVar3 + param_1[1]);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_00446050(DAT_005ba4bc,0);
      FUN_00446270(local_14,local_10,uVar6,param_3,uVar5);
    }
  }
  if (DAT_005bbb24 != 0) {
    if (DAT_005bbb28 != (LPCSTR)0x0) {
      DeleteFileA(DAT_005bbb28);
      DAT_005bbb24 = 0;
      DAT_005bbb28 = (LPCSTR)0x0;
      *param_2 = local_1c;
      return uVar8;
    }
    *param_2 = local_1c;
    return uVar8;
  }
  *param_2 = local_1c;
  return uVar8;
}


