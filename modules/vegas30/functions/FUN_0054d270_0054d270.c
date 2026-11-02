/* Module: vegas30.exe
   Function: FUN_0054d270
   Address: 0054d270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054d270(int param_1)

{
  uint uVar1;
  int iVar2;
  uint wParam;
  uint *_Memory;
  LRESULT LVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_4;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar5 = FUN_004ec820(*(int *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  wParam = SendMessageA(*(HWND *)(param_1 + 0x98),0x43e,0,0);
  _Memory = calloc(1,wParam << 4);
  if (_Memory == (uint *)0x0) {
    return -0x7ff8fff2;
  }
  LVar3 = SendMessageA(*(HWND *)(param_1 + 0x98),0x43d,wParam,(LPARAM)_Memory);
  if (LVar3 == 0) {
    iVar5 = -0x7fffbffb;
  }
  else {
    local_4 = 0;
    puVar4 = _Memory;
    if (wParam != 0) {
      while( true ) {
        uVar1 = *puVar4;
        uVar6 = puVar4[2];
        uVar7 = uVar1;
        if (uVar6 <= uVar1) {
          uVar7 = uVar6;
        }
        if (uVar6 < uVar1) {
          uVar6 = uVar1;
        }
        if ((uVar7 == 0xffff) || (uVar6 == 0xffff)) {
          uVar7 = 0;
          uVar6 = *(int *)(param_1 + 0x554) - 1;
        }
        if (**(uint **)(param_1 + 0xb4) <= uVar6) break;
        for (; uVar7 <= uVar6; uVar7 = uVar7 + 1) {
          iVar2 = **(int **)(*(int *)(*(int *)(param_1 + 0xb4) + 8) + uVar7 * 4);
          if (((*(byte *)(iVar2 + 0x134) & 0x20) == 0) &&
             (iVar5 = FUN_004ec280(param_1 + 0xb8,iVar2 + 0x170,0,0,0,0xffffffff,0xffffffff,0,
                                   0xffffffff,0,0,0), iVar5 < 0)) goto LAB_0054d3be;
        }
        if (iVar5 < 0) goto LAB_0054d3be;
        puVar4 = puVar4 + 4;
        local_4 = local_4 + 1;
        if (wParam <= local_4) goto LAB_0054d3be;
      }
      iVar5 = -0x7fffbffb;
    }
  }
LAB_0054d3be:
  free(_Memory);
  return iVar5;
}


