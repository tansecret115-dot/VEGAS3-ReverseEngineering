/* Module: mp3plug.dll
   Function: FUN_5f695e10
   Address: 5f695e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f695e10(HWND param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  WPARAM wParam;
  int iVar6;
  int iVar7;
  int local_15c;
  int local_158;
  BYTE local_144 [64];
  uchar local_104 [260];
  
  FUN_5f695f80(param_1);
  iVar6 = *param_2;
  if (iVar6 != 1 && -1 < iVar6 + -1) {
    local_15c = 0;
    local_158 = 1;
    do {
      piVar1 = *(int **)(local_15c + param_2[2]);
      if ((piVar1 != (int *)0x0) && (iVar7 = local_158, local_158 < iVar6)) {
        do {
          piVar2 = *(int **)(param_2[2] + iVar7 * 4);
          if ((piVar2 != (int *)0x0) &&
             ((*piVar2 < *piVar1 || ((*piVar2 == *piVar1 && (piVar2[1] < piVar1[1])))))) {
            iVar6 = *piVar1;
            iVar3 = piVar1[1];
            iVar4 = piVar1[2];
            *piVar1 = *piVar2;
            piVar1[1] = piVar2[1];
            piVar1[2] = piVar2[2];
            *piVar2 = iVar6;
            piVar2[1] = iVar3;
            piVar2[2] = iVar4;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *param_2);
      }
      local_15c = local_15c + 4;
      iVar6 = *param_2;
      bVar5 = local_158 < iVar6 + -1;
      local_158 = local_158 + 1;
    } while (bVar5);
  }
  FUN_5f69dd80(DAT_5f74d2f4,0x7f,(LPSTR)local_144,0x40);
  iVar6 = 0;
  if (0 < *param_2) {
    do {
      iVar7 = *(int *)(param_2[2] + iVar6 * 4);
      if (iVar7 != 0) {
        FUN_5f6b1a30(local_104,local_144);
        wParam = SendMessageA(param_1,0x143,0,(LPARAM)local_104);
        SendMessageA(param_1,0x151,wParam,iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *param_2);
  }
  return 0;
}


