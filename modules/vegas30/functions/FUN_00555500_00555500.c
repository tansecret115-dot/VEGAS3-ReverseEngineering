/* Module: vegas30.exe
   Function: FUN_00555500
   Address: 00555500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00555500(HWND param_1,int param_2)

{
  HWND hWnd;
  undefined4 *puVar1;
  undefined8 uVar2;
  CHAR *lpString;
  int iVar3;
  undefined4 local_8c [10];
  CHAR local_64 [100];
  
  lpString = local_64;
  iVar3 = 100;
  local_64[0] = '\0';
  hWnd = GetDlgItem(param_1,0x4c6);
  GetWindowTextA(hWnd,lpString,iVar3);
  puVar1 = local_8c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_8c[0] = *(undefined4 *)(param_2 + 0x24);
  iVar3 = FUN_005f13f0(3);
  if (iVar3 != 0) {
    local_8c[2] = *(undefined4 *)(iVar3 + 0x48);
    local_8c[3] = *(undefined4 *)(iVar3 + 0x4c);
  }
  uVar2 = _SfTextToNanoTimeToken2_40(local_64,local_8c,0,0,0,0,0,0,0,0);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}


