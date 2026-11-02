/* Module: vegas30k.dll
   Function: FUN_010a3fd0
   Address: 010a3fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010a3fd0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  HWND hWnd;
  uint uVar2;
  undefined4 *puVar3;
  HDC hDC;
  int iVar4;
  uint uVar5;
  int local_10;
  undefined4 local_c;
  int local_8 [2];
  
  puVar3 = param_1;
  hWnd = (HWND)*param_1;
  if ((uint)param_1[0x27] <= (uint)param_1[0x28]) {
    MessageBeep(0);
    return 0xffffffff;
  }
  uVar5 = 0;
  if (param_1[0x28] != 0) {
    do {
      FUN_010a3660(puVar3,puVar3[0x2d] + uVar5 * 8,local_8);
      if (param_2 == local_8[0]) goto LAB_010a4040;
    } while ((local_8[0] <= param_2) && (uVar5 = uVar5 + 1, uVar5 < (uint)puVar3[0x28]));
  }
  if (uVar5 != puVar3[0x28]) {
    hDC = GetDC(hWnd);
    FUN_010a38d0(puVar3,hDC,0,puVar3[0x28] + -1);
    uVar2 = puVar3[0x28];
    while (uVar2 = uVar2 - 1, uVar5 <= uVar2) {
      *(undefined4 *)(puVar3[0x2d] + 8 + uVar2 * 8) = *(undefined4 *)(puVar3[0x2d] + uVar2 * 8);
      *(undefined4 *)(puVar3[0x2d] + uVar2 * 8 + 0xc) =
           *(undefined4 *)(puVar3[0x2d] + 4 + uVar2 * 8);
      iVar4 = FUN_010a4160(puVar3,uVar2,&param_1);
      if (iVar4 != 0) {
        piVar1 = (int *)(puVar3[0x2e] + (int)param_1 * 4);
        *piVar1 = *piVar1 + 1;
      }
      iVar4 = FUN_010a41a0(puVar3,uVar2,&param_1);
      if (iVar4 != 0) {
        *(int *)(puVar3[0x2f] + (int)param_1 * 0x1c) =
             *(int *)(puVar3[0x2f] + (int)param_1 * 0x1c) + 1;
      }
    }
    uVar2 = puVar3[0xd];
    if (-1 < (int)uVar2) {
      if (uVar5 <= uVar2) {
        puVar3[0xd] = uVar2 + 1;
      }
      if (uVar5 <= (uint)puVar3[0xe]) {
        puVar3[0xe] = puVar3[0xe] + 1;
      }
    }
    local_10 = param_2;
    local_c = param_3;
    FUN_010a3720(puVar3,&local_10,puVar3[0x2d] + uVar5 * 8);
    iVar4 = puVar3[0x28];
    puVar3[0x28] = iVar4 + 1;
    FUN_010a38d0(puVar3,hDC,0,iVar4);
    ReleaseDC(hWnd,hDC);
    return uVar5;
  }
LAB_010a4040:
  MessageBeep(0);
  return 0xffffffff;
}


