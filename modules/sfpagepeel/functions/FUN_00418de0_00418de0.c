/* Module: sfpagepeel.dll
   Function: FUN_00418de0
   Address: 00418de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418de0(int param_1,int param_2,undefined4 param_3,WPARAM param_4)

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
  goto switchD_00418e79_default;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    SendMessageA(*(HWND *)(param_1 + 0x10),0x401,0,0);
    goto switchD_00418e79_default;
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
  FUN_00415410(param_1,local_54);
  if (*(int *)(param_1 + 0x138) != 0) {
    if (*(int *)(param_1 + 0x138) != 1) goto switchD_00418e79_default;
    switch(param_2) {
    case 1:
      pcVar4 = "Change Color Space to RGB";
      goto LAB_00419129;
    case 2:
      goto switchD_00418e79_caseD_2;
    case 3:
    case 9:
      FUN_00425020(puVar1,"Hue: %0.2f deg.");
      break;
    case 4:
    case 10:
      FUN_00425020(puVar1,(BYTE *)"Saturation: %0.2f%%");
      break;
    case 5:
    case 0xb:
      FUN_00425020(puVar1,"Luminance: %0.2f%%");
      break;
    case 6:
    case 0xc:
      goto switchD_00418e79_caseD_6;
    case 7:
      iVar2 = *(int *)(param_1 + 0x1f8);
      if (iVar2 == 2) {
        pcVar4 = "Color Outside NTSC Gamut - Click Swatch to Correct";
      }
      else {
        if (iVar2 != 1) goto joined_r0x0041911e;
        pcVar4 = "Color Outside PAL Gamut - Click Swatch to Correct";
      }
      goto LAB_00419129;
    case 8:
      FUN_00414c20(local_44,(float *)(param_1 + 0x158));
      if (local_44[0] < _DAT_0046fdc8) {
        FUN_00425020(puVar1,"Luminance: %0.2f%%");
        break;
      }
      goto LAB_00419047;
    default:
      goto switchD_00418e79_default;
    }
    goto LAB_00419132;
  }
  switch(param_2) {
  case 1:
    pcVar4 = "Change Color Space to HSL";
    goto LAB_00419129;
  case 2:
switchD_00418e79_caseD_2:
    pcVar4 = "Pick Color from Screen";
    goto LAB_00419129;
  case 3:
    FUN_00425020(puVar1,(BYTE *)"Red: %0.2f%%");
    break;
  case 4:
    FUN_00425020(puVar1,(BYTE *)"Green: %0.2f%%");
    break;
  case 5:
    FUN_00425020(puVar1,(BYTE *)"Blue: %0.2f%%");
    break;
  case 6:
  case 0xc:
switchD_00418e79_caseD_6:
    FUN_00425020(puVar1,(BYTE *)"Alpha: %0.2f%%");
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
joined_r0x0041911e:
      if (iVar2 != 3) {
switchD_00418e79_default:
        *(int *)(param_1 + 0x128) = param_2;
        return;
      }
      pcVar4 = "Color Outside NTSC and PAL Gamut - Click Swatch to Correct";
    }
LAB_00419129:
    FUN_00425020(puVar1,(BYTE *)pcVar4);
    break;
  case 8:
    FUN_00414c20(local_44,(float *)(param_1 + 0x158));
    if (local_44[0] < _DAT_0046fdc8) {
      FUN_00425020(puVar1,"Luminance: %0.2f%%");
      break;
    }
LAB_00419047:
    FUN_00425020(puVar1,(BYTE *)"Hue: %0.2f deg. : Luminance: %0.2f%%");
    break;
  case 9:
    FUN_00425020(puVar1,(BYTE *)"Red: %0.2f%%");
    break;
  case 10:
    FUN_00425020(puVar1,(BYTE *)"Green: %0.2f%%");
    break;
  case 0xb:
    FUN_00425020(puVar1,(BYTE *)"Blue %0.2f%%");
    break;
  default:
    goto switchD_00418e79_default;
  }
LAB_00419132:
  *(undefined4 *)(param_1 + 0x118) = 1;
  SendMessageA(*(HWND *)(param_1 + 0x10),0x401,param_4,0);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x406,0,(LPARAM)local_34);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x40c,0,(LPARAM)local_34);
  *(int *)(param_1 + 0x128) = param_2;
  return;
}


