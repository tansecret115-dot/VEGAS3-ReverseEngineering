/* Module: vidcap30.exe
   Function: FUN_004422e0
   Address: 004422e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004422e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LPCSTR pszPath;
  DWORD_PTR DVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  SHFILEINFOA *pSVar8;
  undefined4 local_390;
  int local_38c [9];
  SHFILEINFOA local_368;
  undefined1 local_208 [520];
  
  iVar2 = FUN_00441a60();
  pcVar5 = SendMessageA_exref;
  local_390 = 0xc;
  piVar7 = local_38c;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  SendMessageA(*(HWND *)(param_1 + 0x1668),0xb,0,0);
  SendMessageA(*(HWND *)(param_1 + 0x1668),0x1009,0,0);
  iVar6 = 0;
  pSVar8 = &local_368;
  for (iVar4 = 0x58; iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar8->hIcon = (HICON)0x0;
    pSVar8 = (SHFILEINFOA *)&pSVar8->iIcon;
  }
  if (0 < iVar2) {
    do {
      pszPath = (LPCSTR)FUN_00441ab0(iVar6);
      DVar3 = SHGetFileInfoA(pszPath,0x80,&local_368,0x160,0x4010);
      if (DVar3 != *(DWORD_PTR *)(param_1 + 0x1794)) {
        *(DWORD_PTR *)(param_1 + 0x1794) = DVar3;
      }
      DVar3 = SHGetFileInfoA(pszPath,0x80,&local_368,0x160,0x4011);
      if (DVar3 != *(DWORD_PTR *)(param_1 + 0x1790)) {
        SendMessageA(*(HWND *)(param_1 + 0x1668),0x1003,1,DVar3);
        *(DWORD_PTR *)(param_1 + 0x1790) = DVar3;
      }
      FUN_00442490(pszPath,&DAT_005b5740,2,local_208,0x208);
      FUN_0041f890(*(undefined4 *)(param_1 + 0x1668),iVar6,pszPath,local_208,local_368.iIcon);
      iVar6 = iVar6 + 1;
      pcVar5 = SendMessageA_exref;
    } while (iVar6 < iVar2);
  }
  local_38c[3] = 3;
  local_38c[0] = 0;
  if (0 < iVar2) {
    do {
      (*pcVar5)(*(undefined4 *)(param_1 + 0x1668),0x1005,0,&local_390);
      iVar2 = *(int *)(local_38c[3] + 0x11c);
      puVar1 = (undefined4 *)(local_38c[3] + 0x11c);
      (*pcVar5)(*(undefined4 *)(param_1 + 0x1668),0x1006,0,&stack0xfffffc60);
      *puVar1 = 0;
      local_38c[0] = local_38c[0] + 1;
    } while (local_38c[0] < iVar2);
  }
  (*pcVar5)(*(undefined4 *)(param_1 + 0x1668),0xb,1,0);
  return;
}


