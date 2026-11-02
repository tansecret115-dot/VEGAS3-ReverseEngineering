/* Module: vegas30.exe
   Function: FUN_004faed0
   Address: 004faed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004faed0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)param_1[0x5f];
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(param_1[0x5f] + 8) + iVar4 * 4);
      uVar3 = *(uint *)(iVar2 + 0x11c);
      if (iVar2 == param_2) {
        uVar3 = uVar3 | 1;
LAB_004faf0c:
        *(uint *)(iVar2 + 0x11c) = uVar3;
      }
      else if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 & 0xfffffffe;
        goto LAB_004faf0c;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if (param_3 != 0) {
    InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
  }
  return;
}


