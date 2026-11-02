/* Module: vegas30.exe
   Function: FUN_0052a800
   Address: 0052a800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052a800(int param_1,uint param_2,LONG param_3,LONG param_4)

{
  int *piVar1;
  POINT pt;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  tagRECT local_10;
  
  uVar2 = param_2;
  FUN_004ec4f0(param_2,0,&param_2,1);
  if ((param_2 & 0x100) != 0) {
    GetWindowRect(*(HWND *)(param_1 + 0xd8),&local_10);
    pt.y = param_4;
    pt.x = param_3;
    BVar3 = PtInRect(&local_10,pt);
    return -1 - (uint)(BVar3 != 0);
  }
  if ((param_2 & 0x80) == 0) {
    return -1;
  }
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 == (int *)0x0) {
    return -1;
  }
  if ((*piVar1 != -1) && (*piVar1 <= piVar1[1])) {
    return -1;
  }
  iVar4 = FUN_0052a7c0(param_1,uVar2);
  if (iVar4 == 0) {
    return -1;
  }
  iVar4 = FUN_0052a740(param_1,param_3,param_4);
  return iVar4;
}


