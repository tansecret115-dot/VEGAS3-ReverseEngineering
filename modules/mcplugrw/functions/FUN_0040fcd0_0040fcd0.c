/* Module: mcplugrw.dll
   Function: FUN_0040fcd0
   Address: 0040fcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040fcd0(WPARAM param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  LPSTR wParam;
  int local_2c [7];
  tagRECT local_10;
  
  iVar2 = param_2;
  piVar4 = local_2c;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_2c[1] = 0;
  local_2c[0] = 0x2c;
  local_2c[2] = 1;
  local_2c[3] = 0xffffffff;
  local_2c[4] = 0xffffffff;
  local_2c[5] = 0xffffffff;
  local_2c[6] = 0xffffffff;
  SystemParametersInfoA(0x30,0,&local_10,0);
  InflateRect(&local_10,
              -((int)((local_10.right - local_10.left) +
                     (local_10.right - local_10.left >> 0x1f & 0xfU)) >> 4),
              -((int)((local_10.bottom - local_10.top) +
                     (local_10.bottom - local_10.top >> 0x1f & 0xfU)) >> 4));
  *(undefined4 *)(iVar2 + 0x24c) = 1;
  FUN_0040d830(local_2c,iVar2);
  PostMessageA(DAT_004a84dc,0x6ca,param_1,0);
  **(undefined4 **)(iVar2 + 0x360) = DAT_004a8128;
  iVar3 = FUN_00412f90(DAT_004a8128,(int *)&param_1,&param_2,2);
  if ((iVar3 == -0x7ffb1ed3) || (iVar3 == -0x7ffb1ec0)) {
    *(undefined4 *)(*(int *)(iVar2 + 0x360) + 4) = DAT_004a84f4;
    *(undefined4 *)(*(int *)(iVar2 + 0x360) + 8) = 0;
  }
  else {
    *(int *)(*(int *)(iVar2 + 0x360) + 4) = param_2;
    uVar1 = FUN_00410900(DAT_004a8128);
    *(uint *)(*(int *)(iVar2 + 0x360) + 8) = uVar1 & 0xffff;
  }
  _mbscpy((uchar *)(*(int *)(iVar2 + 0x360) + 0xc),(uchar *)"Permanent");
  if (*(int *)(iVar2 + 0x254) == 0) {
    wParam = (LPSTR)(iVar2 + 0x156);
    iVar2 = FUN_004131b0(DAT_004a8128,wParam,0x19,*(uint *)(*(int *)(iVar2 + 0x360) + 4));
    if ((iVar2 < 0) && (iVar2 = FUN_00413b60(DAT_004a8128,wParam,0x19), iVar2 < 0))
    goto LAB_0040fe84;
  }
  else {
    wParam = (LPSTR)(iVar2 + 0x13d);
  }
  PostMessageA(DAT_004a84dc,0x6cb,(WPARAM)wParam,0);
LAB_0040fe84:
  FUN_0040f110();
  return;
}


