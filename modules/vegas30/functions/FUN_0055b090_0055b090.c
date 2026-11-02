/* Module: vegas30.exe
   Function: FUN_0055b090
   Address: 0055b090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055b090(undefined4 *param_1)

{
  UINT UVar1;
  float10 fVar2;
  CHAR local_10c [264];
  
  UVar1 = IsDlgButtonChecked((HWND)*param_1,0x472);
  param_1[0x46] = (param_1[0x46] ^ UVar1) & 1 ^ param_1[0x46];
  UVar1 = IsDlgButtonChecked((HWND)*param_1,0x470);
  param_1[0x46] = (UVar1 & 1) << 2 | param_1[0x46] & 0xfffffffb;
  UVar1 = IsDlgButtonChecked((HWND)*param_1,0x471);
  param_1[0x46] = (UVar1 & 1) << 1 | param_1[0x46] & 0xfffffffd;
  UVar1 = IsDlgButtonChecked((HWND)*param_1,0x4bc);
  param_1[0x46] = (UVar1 & 1) << 3 | param_1[0x46] & 0xfffffff7;
  UVar1 = IsDlgButtonChecked((HWND)*param_1,0x4be);
  param_1[0x46] = (UVar1 & 1) << 4 | param_1[0x46] & 0xffffffef;
  UVar1 = IsDlgButtonChecked((HWND)*param_1,0x46f);
  param_1[0x46] = (UVar1 & 1) << 5 | param_1[0x46] & 0xffffffdf;
  UVar1 = IsDlgButtonChecked((HWND)*param_1,0x474);
  param_1[0x46] = (UVar1 & 1) << 6 | param_1[0x46] & 0xffffffbf;
  GetDlgItemTextA((HWND)*param_1,0x438,(LPSTR)(param_1 + 2),0x104);
  GetDlgItemTextA((HWND)*param_1,0x4bd,local_10c,0x104);
  fVar2 = (float10)_SfTextToDoubleTokenEx_32
                             (local_10c,param_1[0x48],param_1[0x49],0,0x3fd00000,0,0x40100000,0);
  *(double *)(param_1 + 0x48) = (double)fVar2;
  GetDlgItemTextA((HWND)*param_1,0x4bf,local_10c,0x104);
  fVar2 = (float10)_SfTextToDoubleTokenEx_32
                             (local_10c,param_1[0x4a],param_1[0x4b],0x9999999a,0x3fb99999,0,
                              0x3ff00000,0);
  *(double *)(param_1 + 0x4a) = (double)fVar2;
  return;
}


