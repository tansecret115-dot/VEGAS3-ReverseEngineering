/* Module: vegas30.exe
   Function: FUN_00463000
   Address: 00463000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463000(int param_1,HDC param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UINT c;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  tagSIZE local_18;
  RECT local_10;
  
  iVar2 = *(int *)(param_3 + 0x78 + param_4 * 0x58);
  piVar1 = (int *)(param_3 + 0x78 + param_4 * 0x58);
  iVar3 = *(int *)(iVar2 + 0x50);
  if ((*(LPCSTR *)(iVar3 + 0x20) != (LPCSTR)0x0) &&
     (c = lstrlenA(*(LPCSTR *)(iVar3 + 0x20)), c != 0)) {
    GetTextExtentPointA(param_2,*(LPCSTR *)(iVar3 + 0x20),c,&local_18);
    iVar2 = *(int *)(iVar2 + 0x218);
    iVar7 = *(int *)(iVar2 + 0x38);
    if (9 < *(int *)(iVar2 + 0x3c) - iVar7) {
      if ((*(uint *)(param_1 + 0x18) & 0x200400) == 0) {
        iVar7 = *(int *)(iVar2 + 0x20);
      }
      iVar7 = iVar7 + 4;
      local_10.top = *(int *)(iVar2 + 0x24) + 4;
      local_10.bottom = *(int *)(iVar2 + 0x2c) + -2;
      if (local_18.cy + local_10.top <= local_10.bottom) {
        local_10.bottom = local_18.cy + local_10.top;
      }
      local_10.right = local_18.cx + iVar7;
      if (piVar1[10] < local_10.right) {
        param_4 = param_4 + 1;
        iVar4 = 0;
        if (param_4 < *(int *)(param_3 + 0x5c)) {
          piVar5 = (int *)(param_3 + 0x78 + param_4 * 0x58);
          do {
            iVar6 = iVar4;
            if ((piVar5[9] == piVar1[9]) && (iVar6 = param_4, *piVar5 != *piVar1)) break;
            param_4 = param_4 + 1;
            piVar5 = piVar5 + 0x16;
            iVar4 = iVar6;
          } while (param_4 < *(int *)(param_3 + 0x5c));
        }
        iVar4 = *(int *)(param_3 + 0xa0 + iVar4 * 0x58);
        if (iVar4 <= local_10.right) {
          local_10.right = iVar4;
        }
      }
      iVar4 = *(int *)(iVar2 + 0x20);
      if ((iVar7 < iVar4) || (iVar4 = *(int *)(iVar2 + 0x28), local_10.left = iVar7, iVar4 < iVar7))
      {
        local_10.left = iVar4;
      }
      iVar4 = *(int *)(iVar2 + 0x20);
      if ((local_10.right < iVar4) || (iVar4 = *(int *)(iVar2 + 0x28), iVar4 < local_10.right)) {
        local_10.right = iVar4;
      }
      ExtTextOutA(param_2,iVar7,local_10.top,4,&local_10,*(LPCSTR *)(iVar3 + 0x20),c,(INT *)0x0);
      *(uint *)(iVar2 + 0x68) = *(uint *)(iVar2 + 0x68) | 2;
    }
  }
  return;
}


