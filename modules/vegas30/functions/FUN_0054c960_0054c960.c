/* Module: vegas30.exe
   Function: FUN_0054c960
   Address: 0054c960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054c960(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint wParam;
  uint *_Memory;
  LRESULT LVar3;
  int iVar4;
  uint uVar5;
  WPARAM wParam_00;
  uint uVar6;
  uint *_Memory_00;
  WPARAM *pWVar7;
  int local_38;
  int local_34;
  uint local_30;
  uint *local_2c;
  WPARAM local_28 [8];
  undefined4 *local_8;
  
  iVar2 = (int)param_1;
  *param_2 = 0;
  local_34 = 0;
  local_38 = _SfList_CreateExZ_32(&local_34,4,0xffffffff,0xffffffff,0,0,0,0);
  if (-1 < local_38) {
    if (*(int *)((int)param_1 + 0x84) == 2) {
      wParam = SendMessageA(*(HWND *)((int)param_1 + 0x98),0x43e,0,0);
      if (wParam != 0) {
        _Memory = calloc(1,wParam << 4);
        local_2c = _Memory;
        if (_Memory == (uint *)0x0) {
          local_38 = -0x7ff8fff2;
          goto LAB_0054cad1;
        }
        LVar3 = SendMessageA(*(HWND *)((int)param_1 + 0x98),0x43d,wParam,(LPARAM)_Memory);
        if (LVar3 == 0) {
          local_38 = -0x7fffbffb;
          free(_Memory);
        }
        else {
          local_30 = 0;
          _Memory_00 = _Memory;
          param_1 = _Memory;
          if (wParam != 0) {
            do {
              uVar1 = *_Memory;
              uVar6 = _Memory[2];
              uVar5 = uVar1;
              if (uVar6 <= uVar1) {
                uVar5 = uVar6;
              }
              if (uVar6 < uVar1) {
                uVar6 = uVar1;
              }
              if ((uVar5 == 0xffff) || (uVar6 == 0xffff)) {
                uVar5 = 0;
                uVar6 = *(int *)(iVar2 + 0x554) - 1;
              }
              if (uVar6 < **(uint **)(iVar2 + 0xb4)) {
                for (; uVar5 <= uVar6; uVar5 = uVar5 + 1) {
                  local_38 = **(int **)(*(int *)(*(int *)(iVar2 + 0xb4) + 8) + uVar5 * 4);
                  local_38 = _SfList_InsertList_16(local_34,0xffffffff,&local_38,1);
                  _Memory_00 = local_2c;
                  if (local_38 < 0) goto LAB_0054caa3;
                  _Memory = param_1;
                }
                _Memory_00 = local_2c;
                if (local_38 < 0) break;
                _Memory = _Memory + 4;
                param_1 = _Memory;
              }
              local_30 = local_30 + 1;
              _Memory_00 = local_2c;
            } while (local_30 < wParam);
          }
LAB_0054caa3:
          free(_Memory_00);
        }
      }
    }
    else {
      local_30 = SendMessageA(*(HWND *)((int)param_1 + 0x9c),0x1032,0,0);
      wParam_00 = 0xffffffff;
      param_1 = (uint *)0x0;
      if (local_30 != 0) {
        do {
          wParam_00 = SendMessageA(*(HWND *)(iVar2 + 0x9c),0x100c,wParam_00,2);
          if (wParam_00 == 0xffffffff) break;
          pWVar7 = local_28;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pWVar7 = 0;
            pWVar7 = pWVar7 + 1;
          }
          local_28[0] = 4;
          local_28[1] = wParam_00;
          LVar3 = SendMessageA(*(HWND *)(iVar2 + 0x9c),0x1005,0,(LPARAM)local_28);
          if (LVar3 == 1) {
            local_2c = (uint *)*local_8;
            local_38 = _SfList_InsertList_16(local_34,0xffffffff,&local_2c,1);
            if (local_38 < 0) goto LAB_0054cad1;
          }
          param_1 = (uint *)((int)param_1 + 1);
        } while (param_1 < local_30);
      }
    }
    if (-1 < local_38) {
      *param_2 = local_34;
      return local_38;
    }
  }
LAB_0054cad1:
  if (local_34 != 0) {
    _SfList_Destroy_4(local_34);
  }
  return local_38;
}


