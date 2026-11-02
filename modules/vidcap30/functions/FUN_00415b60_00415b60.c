/* Module: vidcap30.exe
   Function: FUN_00415b60
   Address: 00415b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415b60(HWND param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  WPARAM wParam;
  undefined1 local_230 [12];
  int local_224;
  undefined4 local_220;
  undefined1 local_208 [520];
  
  iVar1 = *param_2;
  SendMessageA(param_1,0x1009,0,0);
  wParam = 0;
  local_208[0] = 0;
  if (0 < iVar1) {
    do {
      bVar4 = 1;
      iVar2 = *(int *)(param_2[2] + wParam * 4);
      FUN_00415c50(iVar2,&DAT_005b2860,4,local_208,0x208);
      uVar3 = *(uint *)(iVar2 + 0x38);
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 2) == 0) {
          cVar5 = (-((uVar3 & 0x10) != 0) & 8U) + 0xd;
        }
        else {
          cVar5 = (-((uVar3 & 0x10) != 0) & 8U) + 0xf;
          bVar4 = 0;
        }
      }
      else {
        cVar5 = (-((uVar3 & 0x10) != 0) & 8U) + 0xe;
      }
      FUN_0041f890(param_1,wParam,iVar2,local_208,cVar5);
      local_224 = (bVar4 + 1) * 0x1000;
      local_220 = 0xf000;
      SendMessageA(param_1,0x102b,wParam,(LPARAM)local_230);
      wParam = wParam + 1;
    } while ((int)wParam < iVar1);
  }
  return;
}


