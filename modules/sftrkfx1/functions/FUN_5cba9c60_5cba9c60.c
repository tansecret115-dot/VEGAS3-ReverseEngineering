/* Module: sftrkfx1.dll
   Function: FUN_5cba9c60
   Address: 5cba9c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba9c60(uint param_1,HDC param_2,RECT *param_3)

{
  RECT *lprcSrc2;
  DWORD color;
  int *piVar1;
  uint uVar2;
  RECT local_20;
  tagRECT local_10;
  
  lprcSrc2 = (RECT *)(param_1 + 0xc);
  color = GetSysColor(5);
  SetBkColor(param_2,color);
  local_20.right = *(LONG *)(param_1 + 0x14);
  local_20.left = lprcSrc2->left;
  local_20.top = *(LONG *)(param_1 + 0x10);
  local_20.bottom = *(LONG *)(param_1 + 0x18);
  ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))
              (param_2,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x84),lprcSrc2);
  }
  IntersectRect(&local_10,param_3,lprcSrc2);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    piVar1 = (int *)(param_1 + 0x84);
    do {
      if (*piVar1 != 0) {
        FUN_5cba99e0(param_1,*piVar1,param_2,0x80,&local_10.left);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x80));
  }
  return;
}


