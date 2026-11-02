/* Module: vidcap30.exe
   Function: FUN_00458000
   Address: 00458000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458000(HWND param_1,int *param_2)

{
  int iVar1;
  HWND hWnd;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  undefined1 *puVar6;
  int local_244;
  int local_240;
  int local_23c;
  int local_234;
  undefined8 local_230;
  uint local_228;
  int local_224;
  undefined8 local_220;
  undefined1 local_210 [524];
  
  iVar3 = 0;
  iVar1 = *(int *)*param_2;
  local_240 = 0;
  local_23c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0.0;
  local_230 = 0.0;
  local_244 = 0xc54b;
  hWnd = GetDlgItem(param_1,0x9c80);
  local_210[0] = 0;
  SendMessageA(hWnd,0x1009,0,0);
  local_234 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = *(int *)(*(int *)(*param_2 + 8) + local_234 * 4);
      if (*(int *)(iVar3 + 0x2b8) == 0) {
        local_220 = local_220 + *(double *)(iVar3 + 0x20);
        local_23c = local_23c + *(int *)(iVar3 + 0xc);
        local_240 = local_240 + 1;
        local_230 = local_230 + *(double *)(iVar3 + 0x28);
        bVar4 = CARRY4(local_228,*(uint *)(iVar3 + 0x18));
        local_228 = local_228 + *(uint *)(iVar3 + 0x18);
        local_224 = local_224 + *(int *)(iVar3 + 0x1c) + (uint)bVar4;
        if (*(char *)(iVar3 + 0x30) == '\0') {
          FUN_0044e2e0();
        }
        FUN_00458840(iVar3,param_2[99],param_2[0x62],local_210,0x208);
        FUN_0041f890(hWnd,local_234,iVar3,local_210,(-(*(int *)(iVar3 + 4) != 0) & 8U) + 0xf);
      }
      local_234 = local_234 + 1;
    } while (local_234 < iVar1);
  }
  SendMessageA(hWnd,0x1030,(WPARAM)param_2,0x458a20);
  if (local_240 != 0) {
    switch(*(undefined4 *)(iVar3 + 700)) {
    case 1:
      local_244 = 0xc529;
      break;
    case 2:
      local_244 = 0xc52c;
      break;
    case 3:
      local_244 = 0xc52a;
      break;
    case 4:
      local_244 = 0xc52b;
      break;
    default:
      local_244 = 0xc52d;
    }
    local_220 = local_220 / (double)local_240;
    local_230 = local_230 / (double)local_240;
    if ((local_244 == 0xc529) && (local_23c != 0)) {
      local_244 = 0xc532;
    }
  }
  uVar2 = _SfGetString_8(DAT_005ba2a0,local_244);
  SfSetDlgItemText(param_1,0x4e3,&DAT_0058bf3c,uVar2);
  SfSetDlgItemText(param_1,0x4e4,&DAT_00589f30,local_240);
  SfSetDlgItemText(param_1,0x4e5,&DAT_00589f30,local_23c);
  uVar2 = _SfGetString_8(DAT_005ba2a0,0xc530);
  SfSetDlgItemText(param_1,0x4e7,uVar2,(undefined4)local_220,local_220._4_4_);
  uVar2 = _SfGetString_8(DAT_005ba2a0,0xc531);
  SfSetDlgItemText(param_1,0x4e9,uVar2,(undefined4)local_230,local_230._4_4_);
  puVar6 = local_210;
  uVar2 = 0x208;
  fVar5 = (float10)FUN_0042ed90();
  FUN_0045aec0(local_228,local_224,(double)fVar5,puVar6,uVar2);
  SfSetDlgItemText(param_1,0x4e6,&DAT_0058bf3c,local_210);
  if ((local_240 < 1) || (param_2[3] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _SfDlgEnableControls_16(param_1,&DAT_005b6068,2,uVar2);
  if (DAT_005bb21c == 0) {
    FUN_00420150(hWnd);
  }
  SendMessageA(hWnd,0x1030,(WPARAM)param_2,0x458a20);
  return;
}


