/* Module: vfplugs.dll
   Function: FUN_0041de00
   Address: 0041de00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041de00(int param_1,int param_2,undefined4 param_3,WPARAM param_4)

{
  uchar *puVar1;
  int iVar2;
  HWND *ppHVar3;
  char *pcVar4;
  float local_54 [4];
  double local_44 [2];
  HWND local_34 [4];
  tagRECT local_24;
  uchar *local_10;
  
  if ((param_4 == *(WPARAM *)(param_1 + 0x118)) && (param_2 == *(int *)(param_1 + 0x128)))
  goto switchD_0041de99_default;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    SendMessageA(*(HWND *)(param_1 + 0x10),0x401,0,0);
    goto switchD_0041de99_default;
  }
  ppHVar3 = local_34;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppHVar3 = (HWND)0x0;
    ppHVar3 = ppHVar3 + 1;
  }
  local_34[2] = *(HWND *)(param_1 + 8);
  puVar1 = (uchar *)(param_1 + 0x14);
  local_34[0] = (HWND)0x2c;
  local_34[3] = (HWND)0x1;
  local_10 = puVar1;
  GetClientRect(local_34[2],&local_24);
  FUN_0041a430(param_1,local_54);
  if (*(int *)(param_1 + 0x138) != 0) {
    if (*(int *)(param_1 + 0x138) != 1) goto switchD_0041de99_default;
    switch(param_2) {
    case 1:
      pcVar4 = "Change Color Space to RGB";
      goto LAB_0041e149;
    case 2:
      goto switchD_0041de99_caseD_2;
    case 3:
    case 9:
      FUN_0042a040(puVar1,(BYTE *)"Hue: %0.2f deg.");
      break;
    case 4:
    case 10:
      FUN_0042a040(puVar1,(BYTE *)"Saturation: %0.2f%%");
      break;
    case 5:
    case 0xb:
      FUN_0042a040(puVar1,(BYTE *)"Luminance: %0.2f%%");
      break;
    case 6:
    case 0xc:
      goto switchD_0041de99_caseD_6;
    case 7:
      iVar2 = *(int *)(param_1 + 0x1f8);
      if (iVar2 == 2) {
        pcVar4 = "Color Outside NTSC Gamut - Click Swatch to Correct";
      }
      else {
        if (iVar2 != 1) goto joined_r0x0041e13e;
        pcVar4 = "Color Outside PAL Gamut - Click Swatch to Correct";
      }
      goto LAB_0041e149;
    case 8:
      FUN_00419c40(local_44,(float *)(param_1 + 0x158));
      if (local_44[0] < _DAT_00487598) {
        FUN_0042a040(puVar1,(BYTE *)"Luminance: %0.2f%%");
        break;
      }
      goto LAB_0041e067;
    default:
      goto switchD_0041de99_default;
    }
    goto LAB_0041e152;
  }
  switch(param_2) {
  case 1:
    pcVar4 = "Change Color Space to HSL";
    goto LAB_0041e149;
  case 2:
switchD_0041de99_caseD_2:
    pcVar4 = "Pick Color from Screen";
    goto LAB_0041e149;
  case 3:
    FUN_0042a040(puVar1,(BYTE *)"Red: %0.2f%%");
    break;
  case 4:
    FUN_0042a040(puVar1,(BYTE *)"Green: %0.2f%%");
    break;
  case 5:
    FUN_0042a040(puVar1,"Blue: %0.2f%%");
    break;
  case 6:
  case 0xc:
switchD_0041de99_caseD_6:
    FUN_0042a040(puVar1,(BYTE *)"Alpha: %0.2f%%");
    break;
  case 7:
    iVar2 = *(int *)(param_1 + 0x1f8);
    if (iVar2 == 2) {
      pcVar4 = "Color Outside NTSC Gamut - Click Swatch to Correct";
    }
    else if (iVar2 == 1) {
      pcVar4 = "Color Outside PAL Gamut - Click Swatch to Correct";
    }
    else {
joined_r0x0041e13e:
      if (iVar2 != 3) {
switchD_0041de99_default:
        *(int *)(param_1 + 0x128) = param_2;
        return;
      }
      pcVar4 = "Color Outside NTSC and PAL Gamut - Click Swatch to Correct";
    }
LAB_0041e149:
    FUN_0042a040(puVar1,(BYTE *)pcVar4);
    break;
  case 8:
    FUN_00419c40(local_44,(float *)(param_1 + 0x158));
    if (local_44[0] < _DAT_00487598) {
      FUN_0042a040(puVar1,(BYTE *)"Luminance: %0.2f%%");
      break;
    }
LAB_0041e067:
    FUN_0042a040(puVar1,(BYTE *)"Hue: %0.2f deg. : Luminance: %0.2f%%");
    break;
  case 9:
    FUN_0042a040(puVar1,(BYTE *)"Red: %0.2f%%");
    break;
  case 10:
    FUN_0042a040(puVar1,(BYTE *)"Green: %0.2f%%");
    break;
  case 0xb:
    FUN_0042a040(puVar1,(BYTE *)"Blue %0.2f%%");
    break;
  default:
    goto switchD_0041de99_default;
  }
LAB_0041e152:
  *(undefined4 *)(param_1 + 0x118) = 1;
  SendMessageA(*(HWND *)(param_1 + 0x10),0x401,param_4,0);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x406,0,(LPARAM)local_34);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x40c,0,(LPARAM)local_34);
  *(int *)(param_1 + 0x128) = param_2;
  return;
}


