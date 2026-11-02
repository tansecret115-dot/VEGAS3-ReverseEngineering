/* Module: vidcap30.exe
   Function: FUN_0044aa10
   Address: 0044aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044aa10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *local_c;
  int local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_c = (int *)0x0;
  local_8 = 0;
  FUN_004487a0(*(undefined4 *)(param_1 + 0x88),&local_c);
  if (local_c == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *local_c;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = FUN_0044c6e0(*(undefined4 *)(*(int *)(local_c[2] + iVar2 * 4) + 0x20c));
      if ((*(byte *)(iVar1 + 0x38) & 2) != 0) {
        FUN_00417770(&local_8,*(undefined4 *)(iVar1 + 0x14),0,0xffffffff,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if (local_8 != 0) {
    local_4 = FUN_004178c0(local_8,0);
    if (param_2 != 0) {
      PostMessageA(*(HWND *)(DAT_005ba4c0 + 0x18),0x111,0x101d6,0);
    }
    _SfList_Destroy_4(local_8);
  }
  if (local_c != (int *)0x0) {
    _SfList_Destroy_4(local_c);
  }
  return local_4;
}


