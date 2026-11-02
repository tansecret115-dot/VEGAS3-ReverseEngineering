/* Module: vegas30k.dll
   Function: FUN_01090380
   Address: 01090380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01090380(int param_1,int param_2,undefined4 param_3,WPARAM param_4)

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
  goto switchD_01090419_default;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    SendMessageA(*(HWND *)(param_1 + 0x10),0x401,0,0);
    goto switchD_01090419_default;
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
  FUN_0108c9b0(param_1,&local_54);
  if (*(int *)(param_1 + 0x138) != 0) {
    if (*(int *)(param_1 + 0x138) != 1) goto switchD_01090419_default;
    switch(param_2) {
    case 1:
      goto LAB_010906c9;
    case 2:
      goto switchD_01090419_caseD_2;
    case 3:
    case 9:
      SfPrintF(iVar2,"Hue: %0.2f deg.",(double)(local_54 * _DAT_011e26b4));
      break;
    case 4:
    case 10:
      SfPrintF(iVar2,"Saturation: %0.2f%%",(double)(local_50 * _DAT_011e26a0));
      break;
    case 5:
    case 0xb:
      SfPrintF(iVar2,"Luminance: %0.2f%%",(double)(local_4c * _DAT_011e26a0));
      break;
    case 6:
    case 0xc:
      goto switchD_01090419_caseD_6;
    case 7:
      iVar1 = *(int *)(param_1 + 0x1f8);
      goto joined_r0x010904f0;
    case 8:
      FUN_0108c1c0(&local_44,param_1 + 0x158);
      local_3c = local_3c * _DAT_011e2670;
      if (local_44 < _DAT_011db3f0) {
        SfPrintF(iVar2,"Luminance: %0.2f%%",local_3c);
        break;
      }
      goto LAB_010905e7;
    default:
      goto switchD_01090419_default;
    }
    goto LAB_010906d2;
  }
  switch(param_2) {
  case 1:
    goto LAB_010906c9;
  case 2:
switchD_01090419_caseD_2:
    goto LAB_010906c9;
  case 3:
    SfPrintF(iVar2,"Red: %0.2f%%",(double)(local_54 * _DAT_011e26a0));
    break;
  case 4:
    SfPrintF(iVar2,"Green: %0.2f%%",(double)(local_50 * _DAT_011e26a0));
    break;
  case 5:
    SfPrintF(iVar2,"Blue: %0.2f%%",(double)(local_4c * _DAT_011e26a0));
    break;
  case 6:
  case 0xc:
switchD_01090419_caseD_6:
    SfPrintF(iVar2,"Alpha: %0.2f%%",(double)(local_48 * _DAT_011e26a0));
    break;
  case 7:
    iVar1 = *(int *)(param_1 + 0x1f8);
joined_r0x010904f0:
    if (((iVar1 != 2) && (iVar1 != 1)) && (iVar1 != 3)) {
switchD_01090419_default:
      *(int *)(param_1 + 0x128) = param_2;
      return;
    }
LAB_010906c9:
    SfPrintF(iVar2);
    break;
  case 8:
    FUN_0108c1c0(&local_44,param_1 + 0x158);
    local_3c = local_3c * _DAT_011e2670;
    if (local_44 < _DAT_011db3f0) {
      SfPrintF(iVar2,"Luminance: %0.2f%%",local_3c);
      break;
    }
LAB_010905e7:
    SfPrintF(iVar2,"Hue: %0.2f deg. : Luminance: %0.2f%%",local_44 * _DAT_011db3d0,local_3c);
    break;
  case 9:
    SfPrintF(iVar2,"Red: %0.2f%%",(double)(local_54 * _DAT_011e26a0));
    break;
  case 10:
    SfPrintF(iVar2,"Green: %0.2f%%",(double)(local_50 * _DAT_011e26a0));
    break;
  case 0xb:
    SfPrintF(iVar2,"Blue %0.2f%%",(double)(local_4c * _DAT_011e26a0));
    break;
  default:
    goto switchD_01090419_default;
  }
LAB_010906d2:
  *(undefined4 *)(param_1 + 0x118) = 1;
  SendMessageA(*(HWND *)(param_1 + 0x10),0x401,param_4,0);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x406,0,(LPARAM)local_34);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x40c,0,(LPARAM)local_34);
  *(int *)(param_1 + 0x128) = param_2;
  return;
}


