/* Module: vidcap30.exe
   Function: FUN_00434360
   Address: 00434360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00434360(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (bVar3 != false) break;
      bVar3 = *(int *)(*(int *)(param_1[2] + iVar1 * 4) + 0x208) == 6;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  FUN_004178c0(param_1,bVar3);
  if (param_2 != 0) {
    PostMessageA(*(HWND *)(DAT_005ba4c0 + 0x18),0x111,0x101d6,0);
  }
  return 0;
}


