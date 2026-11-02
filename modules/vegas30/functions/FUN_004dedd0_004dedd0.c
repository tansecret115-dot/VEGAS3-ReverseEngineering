/* Module: vegas30.exe
   Function: FUN_004dedd0
   Address: 004dedd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004dedd0(int param_1,HWND param_2)

{
  int *piVar1;
  code *pcVar2;
  LPCSTR lpString;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  pHVar3 = *(HWND *)(param_1 + 0xf18);
  if (*(int *)(param_1 + 8) == 0) {
    *(HWND *)(param_1 + 8) = param_2;
    pHVar3 = CreateWindowExA(0,"SonicFoundry_TrackView","",0x50010000,0,0,0,0,param_2,
                             (HMENU)&DAT_000003ef,DAT_006471fc,(LPVOID)(param_1 + 0x80));
    *(HWND *)(param_1 + 0xf18) = pHVar3;
    FUN_0047c3d0(param_1 + 0xcf8,pHVar3,&LAB_004ddd50,0,0);
    *(HWND *)(param_1 + 0x84) = pHVar3;
    return 0;
  }
  if (param_2 == (HWND)0x0) {
    FUN_0047c3d0(param_1 + 0xcf8,0,0,0,1);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0xe14)) {
      piVar6 = (int *)(param_1 + 0xe08);
      do {
        if (*piVar6 != 0) {
          piVar1 = *(int **)(*piVar6 + 0x24);
          if (piVar1 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar1;
          }
          if (iVar4 + -1 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)piVar1[2];
          }
          if (((iVar4 != 0) && (*(undefined4 **)(iVar4 + 0x218) != (undefined4 *)0x0)) &&
             (pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x218), pcVar2 != (code *)0x0)) {
            (*pcVar2)(iVar4);
          }
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < *(int *)(param_1 + 0xe14));
      *(HWND *)(param_1 + 0x84) = pHVar3;
      return 0;
    }
  }
  else {
    SetParent(pHVar3,param_2);
    FUN_00455400((LPVOID)(param_1 + 0x80));
    FUN_0043bc40(param_1 + 0xf20,param_1 + 0xf24,param_2);
    FUN_004def20(param_1,param_2);
    lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x5600);
    SetWindowTextA(param_2,lpString);
  }
  *(HWND *)(param_1 + 0x84) = pHVar3;
  return 0;
}


