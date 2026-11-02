/* Module: sfcdi.dll
   Function: FUN_5bf159a0
   Address: 5bf159a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf159a0(HWND param_1)

{
  HDC hdc;
  LPSTR pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  tagSIZE *ptVar7;
  tagSIZE local_28;
  int local_20 [3];
  LPSTR local_14;
  
  SendMessageA(param_1,0x1009,0,0);
  SendMessageA(param_1,0x1036,0,0x20);
  hdc = GetDC(param_1);
  ptVar7 = &local_28;
  iVar6 = 5;
  pCVar1 = FUN_5bf283e0(DAT_5bf65fc4,0x90c);
  GetTextExtentPointA(hdc,pCVar1,iVar6,ptVar7);
  ptVar7 = &local_28;
  iVar6 = 8;
  iVar3 = local_28.cx + 8;
  pCVar1 = FUN_5bf283e0(DAT_5bf65fc4,0x90d);
  GetTextExtentPointA(hdc,pCVar1,iVar6,ptVar7);
  iVar4 = local_28.cx + 8;
  GetTextExtentPointA(hdc,"00:00:00:00",0xb,&local_28);
  iVar6 = local_28.cx + 4;
  ReleaseDC(param_1,hdc);
  piVar5 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_20[0] = 0xf;
  local_20[1] = 1;
  local_20[2] = iVar3;
  local_14 = FUN_5bf283e0(DAT_5bf65fc4,0x90c);
  SendMessageA(param_1,0x101b,0,(LPARAM)local_20);
  local_20[1] = 0;
  local_20[2] = iVar4;
  local_14 = FUN_5bf283e0(DAT_5bf65fc4,0x90e);
  SendMessageA(param_1,0x101b,1,(LPARAM)local_20);
  local_20[1] = 1;
  local_20[2] = iVar6;
  local_14 = FUN_5bf283e0(DAT_5bf65fc4,0x90f);
  SendMessageA(param_1,0x101b,2,(LPARAM)local_20);
  local_20[1] = 1;
  local_20[2] = iVar6;
  local_14 = FUN_5bf283e0(DAT_5bf65fc4,0x910);
  SendMessageA(param_1,0x101b,3,(LPARAM)local_20);
  local_20[1] = 1;
  local_20[2] = iVar6;
  local_14 = FUN_5bf283e0(DAT_5bf65fc4,0x911);
  SendMessageA(param_1,0x101b,4,(LPARAM)local_20);
  return;
}


