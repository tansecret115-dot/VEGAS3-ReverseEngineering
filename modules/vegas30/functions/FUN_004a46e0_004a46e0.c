/* Module: vegas30.exe
   Function: FUN_004a46e0
   Address: 004a46e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a46e0(int param_1,int param_2)

{
  uchar *_Source;
  LPCSTR lpString2;
  int *piVar1;
  int iVar2;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  uchar local_104 [260];
  
  iVar2 = *(int *)(param_2 + 0x218);
  local_114 = *(int *)(iVar2 + 0x20);
  local_110 = *(int *)(iVar2 + 0x24);
  local_10c = *(undefined4 *)(iVar2 + 0x28);
  local_108 = *(undefined4 *)(iVar2 + 0x2c);
  piVar1 = (int *)_SfGetUIFontSize_4(100);
  local_114 = local_114 + 4;
  local_10c = local_114 + *piVar1 * 0x1e;
  local_110 = local_110 + 3;
  local_108 = piVar1[1] + 3 + local_110;
  iVar2 = *(int *)(param_1 + 0xac8) + -4;
  if (iVar2 < local_10c) {
    local_114 = local_114 + (iVar2 - local_10c);
    local_10c = iVar2;
  }
  local_104[0] = '\0';
  if ((*(int *)(param_2 + 0x50) != 0) &&
     (_Source = *(uchar **)(*(int *)(param_2 + 0x50) + 0x20), _Source != (uchar *)0x0)) {
    _mbscpy(local_104,_Source);
  }
  iVar2 = FUN_00404d90(*(undefined4 *)(param_1 + 4),0xffffffff,&local_114,100,local_104,0x104);
  if (iVar2 != 0) {
    return;
  }
  if ((*(int *)(*(int *)(param_2 + 0x50) + 0x20) != 0) ||
     (iVar2 = lstrlenA((LPCSTR)local_104), iVar2 == 0)) {
    lpString2 = *(LPCSTR *)(*(int *)(param_2 + 0x50) + 0x20);
    if (lpString2 == (LPCSTR)0x0) {
      return;
    }
    iVar2 = lstrcmpA((LPCSTR)local_104,lpString2);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x2e,0);
  FUN_004ea750(*(undefined4 *)(param_1 + 0xbc8),param_2,2,0);
  FUN_005c69a0(*(undefined4 *)(param_2 + 0x50),local_104);
  FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
  FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
  return;
}


