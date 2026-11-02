/* Module: sftrans1.dll
   Function: FUN_004b9f70
   Address: 004b9f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9f70(int param_1,int param_2,undefined4 param_3,WPARAM param_4)

{
  int iVar1;
  int iVar2;
  HWND *ppHVar3;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  double local_44;
  double local_3c;
  HWND local_34 [4];
  tagRECT local_24;
  int local_10;
  
  if ((param_4 == *(WPARAM *)(param_1 + 0x118)) && (param_2 == *(int *)(param_1 + 0x128)))
  goto switchD_004ba009_default;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    SendMessageA(*(HWND *)(param_1 + 0x10),0x401,0,0);
    goto switchD_004ba009_default;
  }
  ppHVar3 = local_34;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppHVar3 = (HWND)0x0;
    ppHVar3 = ppHVar3 + 1;
  }
  local_34[2] = *(HWND *)(param_1 + 8);
  iVar2 = param_1 + 0x14;
  local_34[0] = (HWND)0x2c;
  local_34[3] = (HWND)0x1;
  local_10 = iVar2;
  GetClientRect(local_34[2],&local_24);
  FUN_004b65a0(param_1,&local_54);
  if (*(int *)(param_1 + 0x138) != 0) {
    if (*(int *)(param_1 + 0x138) != 1) goto switchD_004ba009_default;
    switch(param_2) {
    case 1:
      goto LAB_004ba2b9;
    case 2:
      goto switchD_004ba009_caseD_2;
    case 3:
    case 9:
      FUN_004c6ae0(iVar2,"Hue: %0.2f deg.",(double)(local_54 * _DAT_0055d650));
      break;
    case 4:
    case 10:
      FUN_004c6ae0(iVar2,"Saturation: %0.2f%%",(double)(local_50 * _DAT_00561370));
      break;
    case 5:
    case 0xb:
      FUN_004c6ae0(iVar2,"Luminance: %0.2f%%",(double)(local_4c * _DAT_00561370));
      break;
    case 6:
    case 0xc:
      goto switchD_004ba009_caseD_6;
    case 7:
      iVar1 = *(int *)(param_1 + 0x1f8);
      goto joined_r0x004ba0e0;
    case 8:
      FUN_004b5db0(&local_44,param_1 + 0x158);
      local_3c = local_3c * _DAT_00566a78;
      if (local_44 < _DAT_00555910) {
        FUN_004c6ae0(iVar2,"Luminance: %0.2f%%",local_3c);
        break;
      }
      goto LAB_004ba1d7;
    default:
      goto switchD_004ba009_default;
    }
    goto LAB_004ba2c2;
  }
  switch(param_2) {
  case 1:
    goto LAB_004ba2b9;
  case 2:
switchD_004ba009_caseD_2:
    goto LAB_004ba2b9;
  case 3:
    FUN_004c6ae0(iVar2,"Red: %0.2f%%",(double)(local_54 * _DAT_00561370));
    break;
  case 4:
    FUN_004c6ae0(iVar2,"Green: %0.2f%%",(double)(local_50 * _DAT_00561370));
    break;
  case 5:
    FUN_004c6ae0(iVar2,"Blue: %0.2f%%",(double)(local_4c * _DAT_00561370));
    break;
  case 6:
  case 0xc:
switchD_004ba009_caseD_6:
    FUN_004c6ae0(iVar2,"Alpha: %0.2f%%",(double)(local_48 * _DAT_00561370));
    break;
  case 7:
    iVar1 = *(int *)(param_1 + 0x1f8);
joined_r0x004ba0e0:
    if (((iVar1 != 2) && (iVar1 != 1)) && (iVar1 != 3)) {
switchD_004ba009_default:
      *(int *)(param_1 + 0x128) = param_2;
      return;
    }
LAB_004ba2b9:
    FUN_004c6ae0(iVar2);
    break;
  case 8:
    FUN_004b5db0(&local_44,param_1 + 0x158);
    local_3c = local_3c * _DAT_00566a78;
    if (local_44 < _DAT_00555910) {
      FUN_004c6ae0(iVar2,"Luminance: %0.2f%%",local_3c);
      break;
    }
LAB_004ba1d7:
    FUN_004c6ae0(iVar2,"Hue: %0.2f deg. : Luminance: %0.2f%%",local_44 * _DAT_00557d68,local_3c);
    break;
  case 9:
    FUN_004c6ae0(iVar2,"Red: %0.2f%%",(double)(local_54 * _DAT_00561370));
    break;
  case 10:
    FUN_004c6ae0(iVar2,"Green: %0.2f%%",(double)(local_50 * _DAT_00561370));
    break;
  case 0xb:
    FUN_004c6ae0(iVar2,"Blue %0.2f%%",(double)(local_4c * _DAT_00561370));
    break;
  default:
    goto switchD_004ba009_default;
  }
LAB_004ba2c2:
  *(undefined4 *)(param_1 + 0x118) = 1;
  SendMessageA(*(HWND *)(param_1 + 0x10),0x401,param_4,0);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x406,0,(LPARAM)local_34);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x40c,0,(LPARAM)local_34);
  *(int *)(param_1 + 0x128) = param_2;
  return;
}


