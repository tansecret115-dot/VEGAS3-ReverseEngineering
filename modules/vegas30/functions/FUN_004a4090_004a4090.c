/* Module: vegas30.exe
   Function: FUN_004a4090
   Address: 004a4090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a4090(int param_1,HWND param_2)

{
  HWND pHVar1;
  int *piVar2;
  code *pcVar3;
  HWND pHVar4;
  int iVar5;
  
  pHVar1 = *(HWND *)(param_1 + 8);
  if (pHVar1 == (HWND)0x0) {
    FUN_0047c3d0(param_1 + 0xcf8,param_2,&LAB_00497c40,*(undefined4 *)(param_1 + 0xc48),0);
  }
  else {
    if (param_2 != (HWND)0x0) {
      if (*(HWND *)(param_1 + 0x408) != (HWND)0x0) {
        SetParent(*(HWND *)(param_1 + 0x408),param_2);
      }
      if (*(HWND *)(param_1 + 0x290) != (HWND)0x0) {
        pHVar4 = GetParent(*(HWND *)(param_1 + 0x290));
        if (pHVar4 == pHVar1) {
          SetParent(*(HWND *)(param_1 + 0x290),param_2);
          *(HWND *)(param_1 + 0x29c) = param_2;
        }
      }
      FUN_0047c3d0(param_1 + 0xcf8,0,0,0,1);
      FUN_0047c3d0(param_1 + 0xcf8,param_2,&LAB_00497c40,*(undefined4 *)(param_1 + 0xc48),0);
      *(HWND *)(param_1 + 0x84) = param_2;
      return 0;
    }
    FUN_0047c3d0(param_1 + 0xcf8,0,0,0,1);
    iVar5 = FUN_005b87a0(*(undefined4 *)(param_1 + 0xc48));
    if (iVar5 != 0) {
      piVar2 = *(int **)(iVar5 + 0x24);
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
      if (iVar5 + -1 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)piVar2[2];
      }
      if (((iVar5 != 0) && (*(undefined4 **)(iVar5 + 0x218) != (undefined4 *)0x0)) &&
         (pcVar3 = (code *)**(undefined4 **)(iVar5 + 0x218), pcVar3 != (code *)0x0)) {
        (*pcVar3)(iVar5);
        *(undefined4 *)(param_1 + 0x84) = 0;
        return 0;
      }
    }
  }
  *(HWND *)(param_1 + 0x84) = param_2;
  return 0;
}


