/* Module: vegas30.exe
   Function: FUN_004cbeb0
   Address: 004cbeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004cbeb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  RECT *lpRect;
  int iVar1;
  uint *puVar2;
  int iVar3;
  HMENU hMenu;
  int iVar4;
  uint uEnable;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  tagPOINT local_10;
  uint local_8;
  uint local_4;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0xce4);
  if (*(int *)(iVar1 + 4) == 3) {
    local_18 = *(undefined4 *)(iVar1 + 0x138);
    local_14 = 0;
    local_20 = 2;
    local_1c = iVar1;
    iVar3 = FUN_0044b620(&local_20,*(undefined4 *)(param_1 + 4),param_2,param_3);
    if (iVar3 != 0) {
      FUN_004d48f0(param_1,iVar1,2);
      return 0;
    }
  }
  else {
    hMenu = (HMENU)FUN_004047d0(0x332,0);
    if (*(int *)(iVar1 + 0x244) == 0) {
      if (*(int **)(iVar1 + 0x234) == (int *)0x0) {
        param_1 = 0;
      }
      else {
        param_1 = **(int **)(iVar1 + 0x234);
      }
    }
    else {
      param_1 = FUN_005d0420(iVar1);
    }
    uEnable = (uint)(param_1 < 1);
    EnableMenuItem(hMenu,0xa7b3,uEnable);
    EnableMenuItem(hMenu,0xa7b4,uEnable);
    EnableMenuItem(hMenu,0xa7b5,uEnable);
    iVar4 = FUN_00404830(*(undefined4 *)(iVar3 + 4),hMenu,&param_2,2);
    switch(iVar4) {
    case 0xa7b3:
    case 0xa7b4:
      FUN_00422f00();
      FUN_004e9f70(*(undefined4 *)(iVar1 + 8),0x21b,0);
      iVar3 = 0;
      if (0 < param_1) {
        do {
          FUN_004ea9f0(*(undefined4 *)(iVar1 + 8),iVar1,iVar3,0x22);
          FUN_005d16a0(iVar1,iVar3,iVar4 == 0xa7b3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1);
      }
      FUN_004eb2b0(*(undefined4 *)(iVar1 + 8));
      FUN_004ea040(*(undefined4 *)(iVar1 + 8),0);
      FUN_00422fb0();
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 8;
      return 0;
    case 0xa7b5:
      Transport_Suspend();
      FUN_00422f00();
      FUN_004e9f70(*(undefined4 *)(iVar1 + 8),0x218,0);
      FUN_004ea250(*(undefined4 *)(iVar1 + 8),iVar1,0x21,0);
      FUN_005d13b0(iVar1 + 0x38);
      FUN_004eb2b0(*(undefined4 *)(iVar1 + 8));
      FUN_004ea040(*(undefined4 *)(iVar1 + 8),0);
      Transport_Resume(0);
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 8;
      return 0;
    case 0xa7ba:
      puVar2 = *(uint **)(*(int *)(iVar1 + 0x69c) + 0x54);
      lpRect = (RECT *)(puVar2 + 0x25);
      *puVar2 = *puVar2 | 0x200;
      InvalidateRect(*(HWND *)(iVar3 + 4),lpRect,0);
      local_10.x = lpRect->left;
      local_10.y = puVar2[0x26];
      local_8 = puVar2[0x27];
      local_4 = puVar2[0x28];
      MapWindowPoints(*(HWND *)(iVar3 + 4),(HWND)0x0,&local_10,2);
      local_20 = puVar2[3] - puVar2[1];
      local_1c = puVar2[4] - puVar2[2];
      FUN_00505c10(iVar3,iVar1,&local_10,&local_20,1);
      *puVar2 = *puVar2 & 0xfffffdff;
      InvalidateRect(*(HWND *)(iVar3 + 4),lpRect,0);
    }
  }
  return 0;
}


