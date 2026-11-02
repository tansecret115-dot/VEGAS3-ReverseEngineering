/* Module: vidpcore.dll
   Function: FUN_5dea8e10
   Address: 5dea8e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5dea8e10(int param_1,int param_2,undefined4 param_3,WPARAM param_4)

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
  goto switchD_5dea8ea9_default;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    SendMessageA(*(HWND *)(param_1 + 0x10),0x401,0,0);
    goto switchD_5dea8ea9_default;
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
  FUN_5dea5440(param_1,&local_54);
  if (*(int *)(param_1 + 0x138) != 0) {
    if (*(int *)(param_1 + 0x138) != 1) goto switchD_5dea8ea9_default;
    switch(param_2) {
    case 1:
      goto LAB_5dea9159;
    case 2:
      goto switchD_5dea8ea9_caseD_2;
    case 3:
    case 9:
      FUN_5deb5050(iVar2,"Hue: %0.2f deg.",(double)(local_54 * _DAT_5df342b8));
      break;
    case 4:
    case 10:
      FUN_5deb5050(iVar2,"Saturation: %0.2f%%",(double)(local_50 * _DAT_5df224c8));
      break;
    case 5:
    case 0xb:
      FUN_5deb5050(iVar2,"Luminance: %0.2f%%",(double)(local_4c * _DAT_5df224c8));
      break;
    case 6:
    case 0xc:
      goto switchD_5dea8ea9_caseD_6;
    case 7:
      iVar1 = *(int *)(param_1 + 0x1f8);
      goto joined_r0x5dea8f80;
    case 8:
      FUN_5dea4c50(&local_44,param_1 + 0x158);
      local_3c = local_3c * _DAT_5df1fa80;
      if (local_44 < _DAT_5df18838) {
        FUN_5deb5050(iVar2,"Luminance: %0.2f%%",local_3c);
        break;
      }
      goto LAB_5dea9077;
    default:
      goto switchD_5dea8ea9_default;
    }
    goto LAB_5dea9162;
  }
  switch(param_2) {
  case 1:
    goto LAB_5dea9159;
  case 2:
switchD_5dea8ea9_caseD_2:
    goto LAB_5dea9159;
  case 3:
    FUN_5deb5050(iVar2,"Red: %0.2f%%",(double)(local_54 * _DAT_5df224c8));
    break;
  case 4:
    FUN_5deb5050(iVar2,"Green: %0.2f%%",(double)(local_50 * _DAT_5df224c8));
    break;
  case 5:
    FUN_5deb5050(iVar2,"Blue: %0.2f%%",(double)(local_4c * _DAT_5df224c8));
    break;
  case 6:
  case 0xc:
switchD_5dea8ea9_caseD_6:
    FUN_5deb5050(iVar2,"Alpha: %0.2f%%",(double)(local_48 * _DAT_5df224c8));
    break;
  case 7:
    iVar1 = *(int *)(param_1 + 0x1f8);
joined_r0x5dea8f80:
    if (((iVar1 != 2) && (iVar1 != 1)) && (iVar1 != 3)) {
switchD_5dea8ea9_default:
      *(int *)(param_1 + 0x128) = param_2;
      return;
    }
LAB_5dea9159:
    FUN_5deb5050(iVar2);
    break;
  case 8:
    FUN_5dea4c50(&local_44,param_1 + 0x158);
    local_3c = local_3c * _DAT_5df1fa80;
    if (local_44 < _DAT_5df18838) {
      FUN_5deb5050(iVar2,"Luminance: %0.2f%%",local_3c);
      break;
    }
LAB_5dea9077:
    FUN_5deb5050(iVar2,"Hue: %0.2f deg. : Luminance: %0.2f%%",local_44 * _DAT_5df2ade8,local_3c);
    break;
  case 9:
    FUN_5deb5050(iVar2,"Red: %0.2f%%",(double)(local_54 * _DAT_5df224c8));
    break;
  case 10:
    FUN_5deb5050(iVar2,"Green: %0.2f%%",(double)(local_50 * _DAT_5df224c8));
    break;
  case 0xb:
    FUN_5deb5050(iVar2,"Blue %0.2f%%",(double)(local_4c * _DAT_5df224c8));
    break;
  default:
    goto switchD_5dea8ea9_default;
  }
LAB_5dea9162:
  *(undefined4 *)(param_1 + 0x118) = 1;
  SendMessageA(*(HWND *)(param_1 + 0x10),0x401,param_4,0);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x406,0,(LPARAM)local_34);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x40c,0,(LPARAM)local_34);
  *(int *)(param_1 + 0x128) = param_2;
  return;
}


